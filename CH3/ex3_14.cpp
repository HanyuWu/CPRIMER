#include <iostream>
#include <vector>
int main(){
    std::vector<int> vec;
    for(int temp; std::cin>>temp;vec.push_back(temp));
    for(auto &t: vec){
        std::cout<<t<<" ,";
    }
    std::cout<<std::endl;
    return 0;
}