#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

void ReadFile(const string &fileName, vector<string> &vec) {
  ifstream ifs(fileName);
  if (ifs) {
    string buf;
    while (std::getline(ifs, buf)) {
      vec.push_back(buf);
    }
  }
}

int main() {
  vector<string> vec;
  ReadFile("./ex8_4.txt", vec);
  for (const auto &str : vec) {
    cout << str << endl;
  }
  cout << vec[0].size() << endl;
  string c = "Hello world!";
  cout << c.size() << endl;
  return 0;
}