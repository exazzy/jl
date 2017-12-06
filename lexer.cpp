#include <iostream>

#include "lexer.h"

using namespace std;

Lexer::Lexer(istream* stream) {
    this->stream = stream;
}

Token Lexer::nextToken() {
    char ch;

    do {
    } while (isWhiteSpace(ch = stream->get()));

    if (isDigit(ch)) {
	return Token((int)(ch - '0'));
    }

    if (ch == '+') {
	return Token(PLUS);
    }

    if (ch == '*') {
	return Token(MULT);
    }

    if (ch == EOF) {
	return Token(END);
    }

    return Token(INVALID);
}

char lookAhead() {
    return 0;
}

bool Lexer::isWhiteSpace(char ch) {
    return (ch == ' ') || (ch == '\r') || (ch == '\n') || (ch == '\t');
}

bool Lexer::isDigit(char ch) {
    return (ch >= '0') && (ch <= '9');
}
