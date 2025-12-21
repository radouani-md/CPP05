#ifndef __SHRUBBERYCREATIONFORM_HPP__

# define __SHRUBBERYCREATIONFORM_HPP__


#include "AForm.hpp"
#include <fstream>


class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;

    public:
        ShrubberyCreationForm(std::string t_arget);
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
        ~ShrubberyCreationForm() throw(){}

        void    execute(Bureaucrat const & executor) const ;
};

#endif