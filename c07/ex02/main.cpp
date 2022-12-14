#include <iostream>
#include "Array.hpp" // remplacement <> par ""
# include <cstdlib> // ajout

// main sujet 
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// main perso
//int main()
//{
//	try
//	{
//		Array<int> a(3);
//		std::cout << "-- check initialisation" << std::endl;
//		a.get_element()[1] = 2;
//		std::cout << "check a: " << a[0] << std::endl;
//		std::cout << "check a: " << a[1] << std::endl;
//		std::cout << "check a: " << a[2] << std::endl;

//		std::cout << "--------" << std::endl;
//		std::cout << "-- check copy operator =" << std::endl;
//		Array<int> b = a;
//		std::cout << "check b: " << b[0] << std::endl;
//		std::cout << "check b: " << b[1] << std::endl;
//		std::cout << "check b: " << b[2] << std::endl;

//		std::cout << "--------" << std::endl;
//		std::cout << "-- check modification copy" << std::endl;
//		b.get_element()[0] = 7;
//		b.get_element()[1] = 8;
//		b.get_element()[2] = 9;
//		std::cout << "check a: " << a[0] << std::endl;
//		std::cout << "check a: " << a[1] << std::endl;
//		std::cout << "check a: " << a[2] << std::endl;
//		std::cout << "check b: " << b[0] << std::endl;
//		std::cout << "check b: " << b[1] << std::endl;
//		std::cout << "check b: " << b[2] << std::endl;

//		std::cout << "--------"<< std::endl;
//		std::cout << "-- check recopy" << std::endl;
//		Array<int> c(b);
//		std::cout << "check c: " << c[0] << std::endl;
//		std::cout << "check c: " << c[1] << std::endl;
//		std::cout << "check c: " << c[2] << std::endl;
//		std::cout << "--------" << std::endl;
//		std::cout << "-- check modification copy" << std::endl;
//		c.get_element()[0] = 10;
//		c.get_element()[1] = 11;
//		c.get_element()[2] = 12;
//		std::cout << "check b: " << b[0] << std::endl;
//		std::cout << "check b: " << b[1] << std::endl;
//		std::cout << "check b: " << b[2] << std::endl;
//		std::cout << "check c: " << c[0] << std::endl;
//		std::cout << "check c: " << c[1] << std::endl;
//		std::cout << "check c: " << c[2] << std::endl;
		
//		std::cout << "-- check sizes" << std::endl;
//		std::cout << "size a: " << a.size() << std::endl;
//		std::cout << "size a: " << b.size() << std::endl;
//		std::cout << "size a: " << c.size() << std::endl;

//		std::cout << "--------" << std::endl;
//		std::cout << "-- check access [] outof range (exception)" << std::endl;
//		std::cout << a[3] << std::endl;

//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//}
