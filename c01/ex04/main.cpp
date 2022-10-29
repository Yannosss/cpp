#include <iostream>
#include <string>
#include <fstream>

std::string ft_get_file_in_string(std::ifstream& file)
{
	std::string str;
	std::string buf;

	while (std::getline(file, buf))
	{
		str = str + buf + "\n";
	}
	return (str);
}

void ft_sed(std::string& str, std::string to_search, std::string replaced_by)
{
	int pos;

	pos = 0;
	while (1)
	{
		pos = str.find(to_search, pos);
		if (pos == -1)
			break;
		str.erase(pos, to_search.length());
		str.insert(pos, replaced_by);
		pos = pos + replaced_by.length();
	}

}

int	main(int argc, char **argv)
{
	// ##### check program input ######
	if (argc != 4)
	{
		std::cout << "Error: wrong number of argument, 3 are required <filename> <to_search> <replaced_by>" << std::endl;
		return 1;
	}
	std::string file_name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1 == "")
	{
		std::cout << "Error: second parameter <to_search> cannot be empty" << std::endl;
		return 1;
	}
	// protection pas forcement utile
	//if (s2 == "")
	//{
	//	std::cout << "Third parameter <replaced_by> is empty, nothing is done" << std::endl;
	//	return 1;
	//}

	// ##### read file #####
	// il manque une protection pour check que c'est pas un dossier
	std::ifstream file_in;
	file_in.open(file_name.c_str());
	if (!file_in.is_open())
	{
		std::cout << "Error: file can't be open" << std::endl;
		return 1;
	}
	std::string work_string = ft_get_file_in_string(file_in);
	file_in.close();

	// ##### replace in string #####
	ft_sed(work_string, s1, s2);

	// ##### rewrite file #####
	std::ofstream file_out;
	file_out.open((file_name + ".replace").c_str());
	if (!file_out.is_open())
	{
		std::cout << "Error: file can't be open" << std::endl;
		return 1;
	}
	file_out << work_string;
	file_out.close();
	
	return 0;
}

