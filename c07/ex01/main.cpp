#include <iostream>
#include <string>
#include "iter.hpp"

// main sujet
class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
  Awesome tab2[5];

  iter( tab, 5, print<int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}

// main perso
//int main()
//{
//	size_t size = 4;
//	int tab_int[] = {0, 1, 2, 3};
//	std::string tab_str[] = {"str1", "str2", "str3", "str4"};

//	// test print / int_tab
//	iter(tab_int, size, &print_param);

//	// test print / string_tab
//	iter(tab_str, size, &print_param);

//}
