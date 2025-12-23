#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat obj1("mohammed", 0);
        obj1.decrementGrade();
        std::cout << obj1 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Bureaucrat::" << e.what() << std::endl;
    }
}