#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat obj("boha", 20);
        ShrubberyCreationForm derived("Mohammed");
        obj.signForm(derived);
        derived.execute(obj);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}