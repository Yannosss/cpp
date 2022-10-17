#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string msg;
	int msglen;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		msg = argv[i];
		msglen = msg.length();
		for(int j = 0; j < msglen; j++)
		{
			std::cout << (char)std::toupper(msg[j]);
		}	
	}
	std::cout << '\n';
	return (0);
}
