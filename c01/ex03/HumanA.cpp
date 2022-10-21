#include "HumanA.hpp"

HumanA::HumanA(void)
{
	this->name = "no_name";
}

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;


}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

// code ok
//HumanA::HumanA(std::string name, Weapon& weapon)
//{
//	this->name = name;
//	this->weapon = &weapon;
//}

//void	HumanA::attack(void)
//{
//	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
//}


// pour test c online 
//#include <iostream>

//using namespace std;

//void ft(int& nb)
//{
//    nb = nb + 1;
//    cout<<"fct - " << nb << endl;
    
//}

//int main()
//{
//    int test = 5;
//    ft(test);
//        cout<<"main - " << test << endl;

//    return 0;
//}
