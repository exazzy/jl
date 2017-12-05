#ifndef _LEXEME_H_
#define _LEXEME_H_

#include <string>

using namespace std;

enum TokenType {NUMBER, PLUS, MULT, END, UNDEFINED, INVALID};

class Token {

private:
    TokenType type;
    void *value;

public:
    Token();
    Token(TokenType type);
    Token(int value);

    ~Token();

    TokenType getType(void);
    int getIntValue(void);
    string toString(void);

};

#endif // _LEXEME_H_