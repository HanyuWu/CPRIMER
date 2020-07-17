#include <iostream>
#include <vector>
#include <cctype> 
#include <string>

int main(){
    std::vector<std::string> vec;
    std::string temp;
    while(std::cin>>temp){
        vec.push_back(temp);
    }
    for (auto &str : vec) for (auto &c : str) c = toupper(c);
    for (std::string::size_type i = 0; i != vec.size(); ++i)
    {
        if (i != 0 && i % 8 == 0) std::cout << std::endl;
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
    
}
