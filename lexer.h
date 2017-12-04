#ifndef _LEXER_H_
#define _LEXER_H_

#include <fstream>

using namespace std;

class Lexer {

private:
    istream *stream;

public:
    Lexer(istream *stream);
    int nextToken(void);
};

#endif // _LEXER_H_