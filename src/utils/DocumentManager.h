#ifndef HPC_PROJECT_DOCUMENTMANAGER_H
#define HPC_PROJECT_DOCUMENTMANAGER_H

using namespace std;

class DocumentManager {

private:
    string path;

public:
    DocumentManager(string str);
    string getPath();
    void getFiles();
};

#endif //HPC_PROJECT_DOCUMENTMANAGER_H
