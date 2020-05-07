#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;


int main(){
    Sales_item _item, _otheritem;
    if(cin >>_item){
        uint _count{0};
        _count++;
        while(cin >> _otheritem){
            if(_item.isbn() == _otheritem.isbn()){
                _count++;
            }
            else{
                _item = _otheritem;
                _count = 0;
            }
        }
        cout << _count << " " << _item.isbn() << endl;
        return 0;
    }
    else{
        std::cerr << "Input error" << endl;
        return -1;
    }
}