#include <iostream>
#include "utils/DocumentManager.h"

using namespace std;

int main (int argc, char *argv[]){

    string path;

    if(argc == 2) {
        path = argv[1];
        cout << "Received path: " << path << endl;
    }

    else{
        path = "~/Gutenberg/txt";
        cout << "No path received, setting default path: " << path << endl;
    }

    DocumentManager documentManager = DocumentManager(path);
    cout << documentManager.getPath() << endl;

    return 1;
}

