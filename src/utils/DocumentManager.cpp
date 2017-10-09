#include <string>
#include <iostream>
#include <filesystem>
#include "DocumentManager.h"

using namespace std;

DocumentManager::DocumentManager(string str){
    path = str;
}

string DocumentManager::getPath(){
    return path;
}

void DocumentManager::getFiles() {
    for (auto & p : directory_iterator(path))
        cout << p << endl;
}