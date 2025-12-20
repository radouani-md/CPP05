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
    if (getGrade() + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        setGrade(getGrade() + 1);
}

void    Bureaucrat::decrementGrade()
{
     if (getGrade() - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        setGrade(getGrade() - 1);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

void                Bureaucrat::signForm(AForm &obj)
{
   try
    {
        obj.beSigned(*this);
        std::cout << this->name << " signed " << obj.getName() << std::endl;
    }
    catch (const std::exception& e)
    {
         std::cout << this->name << " couldn’t sign "
                  << obj.getName() << " because " << e.what() << std::endl;
    }
    
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat &obj)
{
    output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (output);
}
