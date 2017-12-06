#ifndef _LEXER_H_
#define _LEXER_H_

#include <fstream>
#include "token.h"

using namespace std;

class Lexer {

private:
    istream *stream;
    char lookAheadCh;

    bool isWhiteSpace(char ch);
    bool isDigit(char ch);
    
    char nextChar(void);
    char lookAhead(void);

public:
    Lexer(istream *stream);
    Token nextToken(void);
};

#endif // _LEXER_H_
