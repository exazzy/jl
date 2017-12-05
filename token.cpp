#include <iostream>
#include <cstddef>
#include "token.h"

Token::Token() {
    this->type = UNDEFINED;
    this->value = NULL;
}

Token::Token(TokenType type) {
    this->type = type;
    this->value = NULL;
}

Token::Token(int value) {
    this->type = NUMBER;

    int *iPtr = new int;
    *iPtr = value;
    this->value = iPtr;
//    cout << "1>>>>" << getIntValue() << endl;
    cout << "1>>>>" << this->value << endl;
}

TokenType Token::getType(void) {
    return type;
}

int Token::getIntValue(void) {
    int *iPtr = (int *) value;
    return *iPtr;
}

string Token::toString(void) {
    string result;

    switch (type) {
        case NUMBER:
            result = "NUMBER: " + to_string(getIntValue());
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
    if (value != NULL) {
        switch (type) {
            case NUMBER:
                delete (int *) value;
                break;

            default:
                break;
        }
    }
}