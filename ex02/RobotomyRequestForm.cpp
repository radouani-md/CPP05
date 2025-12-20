#include "RobotomyRequestForm.hpp"

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
    (void)executor;
    std::cout << "ss";
}