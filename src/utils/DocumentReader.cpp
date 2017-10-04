#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

template<typename Out>

void split(const string &s, char delim, Out result) {
    stringstream ss;
    ss.str(s);
    string item;
    while (getline(ss, item, delim)) {
        *(result++) = item;
    }
}

vector<string> split(const string &s, char delim) {
    vector<string> elems;
    split(s, delim, back_inserter(elems));
    return elems;
}

vector<int> getDocument(int x) {

    ifstream dataset;
    vector<int> document(2886);
    string line;
    dataset.open ("../assets/re0.mat");

    if (dataset.is_open()) {
        int i = 0;
        while (getline(dataset, line)) {
            if(i == x){
                cout << "la linea es:" << line << endl;
                vector<string> data = split(line,' ');
                for(int i=1; i<data.size(); i++){
                    int index = stoi(data[i]);
                    document[index] = stoi(data[i+1]);
                    i++;
                }
                return document;
            }
            else{
                i++;
            }
        }
    }

    dataset.close();
    return document;
}

int main (){
    vector<int> out = getDocument(6);
}