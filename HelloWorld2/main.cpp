#include <iostream>
#include <string> 
using namespace std; 

int main(){
	string name; 
	int age; 
	std::cout << "what is your name?" << endl; 
	std::cin >> name; 

	std::cout << "what is your age" << endl; 
	std::cin >> age; 

	std::cout << "Hello my name is: " << name << "\nMy age is: "<< age << endl; 

	return 0; 

}