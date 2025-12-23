#include "Intern.hpp"
#include <ctime>

int main()
{
    try
    {
        Intern obj;
        AForm *ff =  obj.makeForm("srubbery creation",  "md");
        delete ff;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}

