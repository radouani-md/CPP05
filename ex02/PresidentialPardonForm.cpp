#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string t_arget) : AForm(t_arget, 25, 5)
{
    target = t_arget;
}
PresidentialPardonForm::PresidentialPardonForm() :AForm("", 25, 5)
{
    target = "";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj): AForm(obj) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    AForm::operator=(obj);
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    (void)executor;
    std::cout << "ss";
}