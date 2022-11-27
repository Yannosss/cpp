#include <iostream>
#include <stdint.h>

typedef struct s_data
{
	int variable_1;
	double variable_2; 
} Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data my_data;
	my_data.variable_1 = 42;
	my_data.variable_2 = 1.2;

	Data* ptr_my_data = &my_data;

	uintptr_t conversion_to_uintptr = serialize(ptr_my_data);
	Data* reconversion_to_ptr_my_data = deserialize(conversion_to_uintptr);

	std::cout << "my_data variables 1 and 2:   " << my_data.variable_1 << " - " << my_data.variable_2 << std::endl; 
	std::cout << "ptr_my_data:                 " << ptr_my_data << std::endl; 
	std::cout << "conversion_to_uintptr:       " << conversion_to_uintptr << std::endl; 
	std::cout << "reconversion_to_ptr_my_data: " << reconversion_to_ptr_my_data << std::endl; 
	std::cout << "my_data variables 1 and 2:   " << my_data.variable_1 << " - " << my_data.variable_2 << std::endl; 
}
