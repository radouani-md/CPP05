#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat obj1("mohammed", 0);
        obj1.decrementGrade();
        std::cout << obj1 << std::endl;
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cout << "Bureaucrat::" << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cout << "Bureaucrat::" << e.what() << std::endl;
    }
   
}