#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string t_arget) : AForm(t_arget, 72, 45)
{
    target = t_arget;
}
RobotomyRequestForm::RobotomyRequestForm() :AForm("", 72, 45)
{
    target = "";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj): AForm(obj) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    AForm::operator=(obj);
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::srand(std::time(NULL));

    if (!this->getIsSigned())
        throw std::runtime_error("Is not Signed");

    if (executor.getGrade() > this->getEGrade())
        throw AForm::GradeTooLowException();

    int fiftyFifti = rand();

    if (fiftyFifti % 11 <= 5)
        std::cout << target << " has been robotomized successfully " << std::endl;
    else
        std::cout << "the robotomy failed " << std::endl;
    return ;
}