#include <iostream>

#include "lexer.h"

using namespace std;

Lexer::Lexer(istream* stream) {
    this->stream = stream;
}

int Lexer::nextToken() {
    cout << "nextToken" << endl;
    return 1;
}
