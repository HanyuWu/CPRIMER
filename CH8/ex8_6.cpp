#include "Sales_item.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using std::vector; using std::string; using std::ifstream; using std::cout; using std::endl;


void ReadFile(const string &fileName, vector<Sales_item> & books){
    ifstream ifs(fileName);
    Sales_item temp;
    while(ifs>>temp){
        books.push_back(temp);
    }
}

int main(){
    vector<Sales_item> vec;
    ReadFile("./add_item.txt", vec);
    for (const auto &str : vec)
        cout << str << endl;
    return 0;
}