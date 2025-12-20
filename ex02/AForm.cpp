#include "AForm.hpp"

AForm::AForm(const std::string name, const int sGrade, const int eGrade): name(name), s_grade(sGrade), e_grade(eGrade)
{
    is_signed = 0;
    if ((s_grade > 150) || (e_grade > 150))
        throw AForm::GradeTooLowException();
    if ((s_grade < 1) || (e_grade < 1))
        throw AForm::GradeTooHighException();
}
AForm::AForm() :name(""), is_signed(0), s_grade(1),e_grade(1) {}

AForm::AForm(const AForm& obj): name(obj.name), is_signed(obj.is_signed),
s_grade(obj.s_grade), e_grade(obj.e_grade)
{
    *this = obj;
}

AForm& AForm::operator=(const AForm& obj)
{
    if (this != &obj)
    {
        this->is_signed = obj.is_signed;
    }
    return (*this);
}

AForm::~AForm() throw(){}


const std::string   AForm::getName() const { return (name); }
bool                AForm::getIsSigned() const { return (is_signed); }
int                 AForm::getSGrade() const { return (s_grade); }
int                 AForm::getEGrade() const { return (e_grade); }

void                AForm::setIsSigned(bool isSigned) { is_signed = isSigned; }

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}
const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

void    AForm::beSigned(Bureaucrat &Bureau)
{
    int gValue = Bureau.getGrade();
    if (gValue > s_grade)
        throw AForm::GradeTooLowException();
    is_signed = 1;
}

std::ostream& operator<<(std::ostream& output, const AForm &obj)
{
    if (obj.getIsSigned() == 1)
    {
        output << obj.getName() << " grade required to sign " 
        << obj.getSGrade() << " | required to execute " << obj.getEGrade() <<  ", is signed ";
    }
    else
    {
        output << obj.getName() << " grade required to sign " 
        << obj.getSGrade() << " | required to execute " << obj.getEGrade() <<  ", is not signed ";
    }
    return (output);
}
