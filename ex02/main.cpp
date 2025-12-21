#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int main()
{
    std::srand(std::time(NULL));
    try
    {
        Bureaucrat obj("boha", 25);
        PresidentialPardonForm derived("Mohammed");
        obj.signForm(derived);
        obj.executeForm(derived);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    
}