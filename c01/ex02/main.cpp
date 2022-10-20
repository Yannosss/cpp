#include <string>
#include<iostream>


#include <cstdio>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	std::cout << std::endl;

	std::cout << "string address: " << &string << std::endl;
	std::cout << "address store in stringPTR: " << stringPTR << std::endl;
	std::cout << "address store in stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "string value: " << string << std::endl;
	std::cout << "value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF: " << stringREF << std::endl;
}
