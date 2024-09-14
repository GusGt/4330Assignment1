#include <iostream>
#include <vector>

int main(){

	std::cout << "Input two numbers" << std::endl;
	int a;
	int b;
	
	std::cin >> a;
	std::cin >> b;

	int sum = a + b;
	int avg = sum/2;
	std::cout << "Average is " << avg << std::endl;
	
	return 0;
} 
