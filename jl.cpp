#include <iostream>
#include "lexer.h"
#include "parser.h"

const char *filename = "test.j";

int main(int argc, char **argv) {

    ifstream *file = new ifstream(filename);
    Lexer *lexer = new Lexer(file);
    Parser *parser = new Parser(lexer);

//    Token token;
//    do {
//        token = lexer->nextToken();
//        cout << token.toString() << endl;
//    } while (token.getType() != END);
//    cout << endl;
    Node *node = parser->parse();
    if (node) {
        cout << "Node: " << node << endl;
        delete node;
    }

    file->close();
    delete file;

    delete parser;
    delete lexer;

    return 0;
}
