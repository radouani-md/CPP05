#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    try
    {
        Bureaucrat obj1("mohammed", 5);
        Form obj2("Bahmaz", 10, 1);
        obj2.beSigned(obj1);
        obj1.signForm(obj2);
        std::cout << obj2 << std::endl;
        std::cout << obj1 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
   
}