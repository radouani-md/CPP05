#include "Intern.hpp"


Intern::Intern(){    }
Intern::Intern(Intern &obj){ (void)obj; }
Intern& Intern::operator=(const Intern& obj){ (void)obj; return *this;}
Intern::~Intern(){ }


AForm* Intern::makeRobotomy(std::string const & target)
{
    return (new RobotomyRequestForm(target));
}
AForm* Intern::makePresidential(std::string const & target)
{
    return (new PresidentialPardonForm(target));
}
AForm* Intern::makeShrubbery(std::string const & target)
{
    return (new ShrubberyCreationForm(target));
}

AForm*  Intern::makeForm(std::string formName, std::string formTarget)
{
    std::string arr[] = { "robotomy request", "presidential pardon", "shrubbery creation" };
    AForm* (Intern::*ptr[3])(std::string const &) = { &Intern::makeRobotomy, &Intern::makePresidential, &Intern::makeShrubbery };
    
    for (int i = 0; i < 3; i++)
    {
        if (formName == arr[i])
        {
            std::cout << "Intern Create " << formName << std::endl;
            return ((this->*ptr[i])(formTarget));
        }
    }
    std::cout << " Form Not Found" << std::endl;
    return (NULL);
}
