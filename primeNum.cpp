#include <iostream>

int main(){

	int n = 0;
	int act = 0;
	
	std::cout << "Please input a number" << std::endl;
	std::cin >> n;
	
	if (n<=1){
		act = 1;
	}

	for (int i = 2; i < n; i++){
		
		if(n % i == 0){
			act = 1;
		}
	}
	act = 0;

	if(act==0){
		std::cout << "Yes it is a Prime" << std::endl;
	}
	else{
		std::cout << "No it is not a Prime" << std::endl;
	}
	return 0;
}
