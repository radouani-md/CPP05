#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string na_me, int gra_de) : name(na_me), grade(gra_de)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat() {}
Bureaucrat::Bureaucrat(const Bureaucrat &obj) { *this = obj; }
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if (this != &obj)
    {
        this->grade = obj.grade;
    }
    return (*this);
}


Bureaucrat::~Bureaucrat() throw(){}

void                 Bureaucrat::setGrade(int grade) {  this->grade = grade; }

const std::string   Bureaucrat::getName() const
{
    return (name);   
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void    Bureaucrat::incrementGrade()
{
    if (grade - 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade--;
}

void    Bureaucrat::decrementGrade()
{
     if (grade + 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade++;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat::Grade too low!";
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat::Grade too high!";
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat &obj)
{
    output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (output);
}
