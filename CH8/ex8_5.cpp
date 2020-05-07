#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using std::vector; using std::string; using std::ifstream; using std::cout; using std::endl;

void ReadFile(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs)
    {
        string buf;
        while (ifs >> buf)
            vec.push_back(buf);
    }
}

int main()
{
    vector<string> vec;
    ReadFile("./ex8_4.txt", vec);
    for (const auto &str : vec)
        cout << str << endl;
    return 0;
}