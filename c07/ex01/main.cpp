#include <iostream>
#include <string>
#include "iter.hpp"

int main()
{
	size_t size = 4;
	int tab_int[] = {0, 1, 2, 3};
	std::string tab_str[] = {"str1", "str2", "str3", "str4"};

	// test print / int_tab
	iter(tab_int, size, &print_param);

	// test print / string_tab
	iter(tab_str, size, &print_param);

	// test sum / int_tab
	iter(tab_int, size, &sum);

	// test sum / string_tab
	iter(tab_str, size, &sum);

	// test print / int_tab
	iter(tab_int, size, &print_param);

	// test print / string_tab
	iter(tab_str, size, &print_param);
}
