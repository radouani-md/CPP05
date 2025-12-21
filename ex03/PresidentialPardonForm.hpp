#ifndef __PRESIDENTIALPARDONFORM_HPP__

# define __PRESIDENTIALPARDONFORM_HPP__


#include "AForm.hpp"
#include <fstream>


class PresidentialPardonForm : public AForm
{
    private:
        std::string target;

    public:
        PresidentialPardonForm(std::string t_arget);
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
        ~PresidentialPardonForm() throw(){}

        void    execute(Bureaucrat const & executor) const ;
};

#endif