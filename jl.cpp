#include <iostream>
#include "lexer.h"

const char *filename = "test.j";

int main(int argc, char **argv) {

    ifstream *file = new ifstream(filename);
    Lexer *lexer = new Lexer(file);

    lexer->nextToken();

    file->close();
    delete file;

    delete lexer;

    return 1;
}