#include <iostream>
#include <cstddef>
#include "token.h"

Token::Token() {
    this->type = UNDEFINED;
}

Token::Token(TokenType type) {
    this->type = type;
}

Token::Token(double value) {
    this->type = NUMBER;
    this->value = value;
}

TokenType Token::getType(void) {
    return type;
}

double Token::getValue(void) {
    return value;
}

string Token::toString(void) {
    string result;

    switch (type) {
	case NUMBER:
	    result = "NUMBER: " + to_string(getValue());
	    break;

	case PLUS:
	    result = "PLUS";
	    break;

	case MULT:
	    result = "MULT";
	    break;

	case END:
	    result = "END";
	    break;

	case UNDEFINED:
	    result = "UNDEFINED";
	    break;

	default:
	    result = "INVALID";
    }

    return result;
}

Token::~Token(void) {
}
