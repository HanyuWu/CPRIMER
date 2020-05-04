#include "Sales_item.h"
#include <iostream>

int main(){
	Sales_item _total, _item;
	if(std::cin>>_total){
		while(std::cin>>_item){
			_total += _item;
		}
		std::cout<<_total<<std::endl;
	}
	else{
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}