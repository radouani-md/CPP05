#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int range;
    public:
        const std::string   getName();
        int                 getGrade();
        void                incrementRange();
        void                decrementRange();
};

#endif


