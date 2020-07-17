#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main(){
    std::vector<std::string> vec;
    for (std::string line; getline(std::cin,line); vec.push_back(line));
    for(auto &word : vec){
        for (auto &s: word){
            if (std::isalpha(s)){
                s = toupper(s);
            }
        }
        std::cout<<word<<" ";
    }
    std::cout<<std::endl;
    return 0;
}