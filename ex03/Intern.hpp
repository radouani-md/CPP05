#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern 
{
    public :
        Intern();
        Intern(Intern &obj);
        Intern& operator=(const Intern& obj);
        ~Intern();

        AForm*  makeForm(std::string formName, std::string formTarget);

        AForm* makeRobotomy(std::string const & target);
        AForm* makePresidential(std::string const & target);
        AForm* makeShrubbery(std::string const & target);
};



#endif