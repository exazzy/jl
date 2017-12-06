#include <iostream>
#include "lexer.h"

const char *filename = "test.j";

int main(int argc, char **argv) {

    ifstream *file = new ifstream(filename);
    Lexer *lexer = new Lexer(file);

    Token token;
    do {
//    for (int i = 0; i < 5; i++) {
	token = lexer->nextToken();
	cout << token.toString() << endl;
    } while (token.getType() != END);
//    }
    cout << endl;

    file->close();
    delete file;

    delete lexer;

    return 0;
}
