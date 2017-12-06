#include <iostream>
#include <string>

#include "lexer.h"

using namespace std;

Lexer::Lexer(istream* stream) {
    this->stream = stream;
}

Token Lexer::nextToken() {
    char ch;

    while (isWhiteSpace(ch = lookAhead())) {
	nextChar();
    }

    if (isDigit(ch)) {
	string value;
//        bool 
	while (isDigit(lookAhead())) {
	    ch = nextChar();
	    value += ch;
	}
	return Token(stod(value.c_str()));
    }

    if (ch == '+') {
	nextChar();
	return Token(PLUS);
    }

    if (ch == '*') {
	nextChar();
	return Token(MULT);
    }

    if (ch == EOF) {
	return Token(END);
    }

    return Token(INVALID);
}

char Lexer::nextChar(void) {
    char ch = lookAheadCh;
    lookAheadCh = 0;
    return ch ?: stream->get();
}

char Lexer::lookAhead(void) {
    return lookAheadCh ?: lookAheadCh = stream->get();
}

bool Lexer::isWhiteSpace(char ch) {
    return (ch == ' ') || (ch == '\r') || (ch == '\n') || (ch == '\t');
}

bool Lexer::isDigit(char ch) {
    return (ch >= '0') && (ch <= '9');
}
