#ifndef _LEXER_H_
#define _LEXER_H_

#include <fstream>
#include "token.h"

using namespace std;

class Lexer {

private:
    istream *stream;
    char lookAhead;

    bool isWhiteSpace(char ch);
    bool isDigit(char ch);

public:
    Lexer(istream *stream);
    Token nextToken(void);
};

#endif // _LEXER_H_