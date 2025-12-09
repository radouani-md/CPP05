#include "Form.hpp"

Form::Form(const std::string name, const int sGrade, const int eGrade) :name(name), is_signed(0), s_grade(sGrade),
e_grade(eGrade)
{
    
}
Form::Form() :name(""), is_signed(0), s_grade(0),e_grade(0) {}

Form::Form(const Form& obj): name(obj.name), is_signed(obj.is_signed),
s_grade(obj.s_grade), e_grade(obj.e_grade)
{
    *this = obj;
}

Form& Form::operator=(const Form& obj)
{
    if (this != &obj)
    {
        this->is_signed = obj.is_signed;
    }
    return (*this);
}

Form::~Form() throw(){}


const std::string   Form::getName() const { return (name); }
bool                Form::getIsSigned() const { return (is_signed); }
int           Form::getSGrade() const { return (s_grade); }
int           Form::getEGrade() const { return (e_grade); }

void    Form::setIsSigned(bool isSigned) { is_signed = isSigned; }

std::ostream& operator<<(std::ostream& output, const Form &obj)
{

}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}
const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

void    Form::beSigned(Bureaucrat &Bureau)
{
    int gValue = Bureau.getGrade();

    if (gValue >= 1 && gValue <= 150)
        setIsSigned(1);
}

std::ostream& operator<<(std::ostream& output, const Form &obj)
{
    if (obj.getIsSigned() == 1)
    {
        output << obj.getName() << " grade required to sign " 
        << obj.getSGrade() << " required to execute " << obj.getEGrade() <<  ", is signed " << std::endl;
    }
    else
    {
        output << obj.getName() << " grade required to sign " 
        << obj.getSGrade() << " required to execute " << obj.getEGrade() <<  ", is not signed " << std::endl;
    }
    return (output);
}
