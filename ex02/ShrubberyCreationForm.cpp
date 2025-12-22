#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string t_arget) : AForm(t_arget, 145, 137)
{
    target = t_arget + "_shrubbery";
}
ShrubberyCreationForm::ShrubberyCreationForm() :AForm("", 145, 137)
{
    target += "_shrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj): AForm(obj) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    AForm::operator=(obj);
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
        throw std::runtime_error("Is not Signed");
    if (executor.getGrade() > this->getEGrade())
        throw AForm::GradeTooLowException();
    std::ofstream file;

    file.open(target.c_str());
    if (!file.is_open())
        throw std::runtime_error("Failed to Open the file") ;
    file <<
        "              &&& &&  & &&\n"
        "          && &\\/&\\|& ()|/ @, &&\n"
        "          &\\/(/&/&||/& /_/)_&/_&\n"
        "       &() &\\/&|()|/&\\/ '%\" & ()\n"
        "      &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
        "    &&   && & &| &| /& & % ()& /&&\n"
        "      ()&_---()&\\&\\|&&-&&--%---()~\n"
        "          &&     \\|||\n"
        "                  |||\n"
        "                  |||\n"
        "                  |||\n"
        "            , -=-~  .-^- _\n "
        ;
    file.close();
}