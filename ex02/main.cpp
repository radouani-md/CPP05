#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat obj("boha", 1);
        PresidentialPardonForm derived("Mohammed");
        ShrubberyCreationForm derived2("/a/Makefile");

        // obj.sign
        obj.signForm(derived);
        obj.executeForm(derived);

         obj.signForm(derived2);
        obj.executeForm(derived2);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}