#ifndef _LEXEME_H_
#define _LEXEME_H_

#include <string>

using namespace std;

enum TokenType {NUMBER, PLUS, MULT, END, UNDEFINED, INVALID};

class Token {

private:
    TokenType type;
    double value;
    
    char lookAheadCh;

public:
    Token();
    Token(TokenType type);
    Token(double value);

    ~Token();

    TokenType getType(void);
    double getValue(void);
    string toString(void);

};

#endif // _LEXEME_H_
