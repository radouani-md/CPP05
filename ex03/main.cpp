#include "Intern.hpp"
#include <ctime>

int main()
{
    std::srand(std::time(NULL));
    try
    {
        Intern obj;
        AForm *ff =  obj.makeForm("shrubbery creation",  "md");
        delete ff;  
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    
}