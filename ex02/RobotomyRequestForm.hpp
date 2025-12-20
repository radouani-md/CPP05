#ifndef __ROBOTOMYREQUESTFORM_HPP__

# define __ROBOTOMYREQUESTFORM_HPP__


#include "AForm.hpp"
#include <fstream>


class RobotomyRequestForm : public AForm
{
    private:
        std::string target;

    public:
        RobotomyRequestForm(std::string t_arget);
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
        ~RobotomyRequestForm() throw(){}

        void    execute(Bureaucrat const & executor) const ;
};

#endif