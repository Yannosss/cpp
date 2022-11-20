#include "ShrubberyCreationForm.hpp"

// Constructeur / destructeurs
ShrubberyCreationForm::ShrubberyCreationForm(void):
Form("default_name", SHRUB_MIN_GRADE_TO_SIGN, SHRUB_MIN_GRADE_TO_EXEC, "default_target")
{
	std::cout << "Constructor Default ShrubberyCreationForm called"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target): 
Form(name, SHRUB_MIN_GRADE_TO_SIGN, SHRUB_MIN_GRADE_TO_EXEC, target)
{
	std::cout << "Constructor name/grade ShrubberyCreationForm called"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src): Form(src.get_name(), 
src.get_min_grade_to_sign(), src.get_min_grade_to_exec(), src.get_target())
{
	std::cout << "Constructor Bycopy ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	std::cout << "Operator= ShrubberyCreationForm called" << std::endl;
	this->set_form_signed(src.get_form_signed());
	return (*this);
}

static void print_tree(std::ofstream &file)
{
file << " __________________________________________________________________________________________ " << std::endl;
file << "|                                                                                          |" << std::endl;
file << "|                                                                                          |" << std::endl;
file << "|                 * *                           * *                           * *          |" << std::endl;
file << "|           *    *  *                     *    *  *                     *    *  *          |" << std::endl;
file << "|      *  *    *     *  *            *  *    *     *  *            *  *    *     *  *      |" << std::endl;
file << "|     *     *    *  *    *          *     *    *  *    *          *     *    *  *    *     |" << std::endl;
file << "| * *   *    *    *    *   *    * *   *    *    *    *   *    * *   *    *    *    *   *   |" << std::endl;
file << "| *     *  *    * * .#  *   *   *     *  *    * * .#  *   *   *     *  *    * * .#  *   *  |" << std::endl;
file << "| *   *     * #.  .# *   *      *   *     * #.  .# *   *      *   *     * #.  .# *   *     |" << std::endl;
file << "|   *     #.  #: #  * *    *      *     #.  #: #  * *    *      *     #.  #: #  * *    *   |" << std::endl;
file << "|  *   * * #. ##        *        *   * * #. ##        *        *   * * #. ##        *      |" << std::endl;
file << "|    *       ###                   *       ###                   *       ###               |" << std::endl;
file << "|              ##                            ##                            ##              |" << std::endl;
file << "|              ##.                           ##.                           ##.             |" << std::endl;
file << "|              .##:                          .##:                          .##:            |" << std::endl;
file << "|              :###                          :###                          :###            |" << std::endl;
file << "|              ;###                          ;###                          ;###            |" << std::endl;
file << "|            ,####.                        ,####.                        ,####.            |" << std::endl;
file << "|__________________________________________________________________________________________|" << std::endl;
}
// Fonctions
void	ShrubberyCreationForm::execute_childform() const
{
	std::ofstream file_out;
	file_out.open((this->get_target() + "_shrubbery").c_str());
	if (!file_out.is_open())
	{
		std::cout << "Error: file can't be open" << std::endl;
		return;
	}
	print_tree(file_out);
	file_out.close();
}

