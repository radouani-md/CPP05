#ifndef __AFORM_HPP__
#define __AFORM_HPP__

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool              is_signed;
        const int         s_grade;
        const int         e_grade;
    public:
        class GradeTooLowException : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        AForm(const std::string name, const int sGrade, const int eGrade);
        AForm();
        AForm(const AForm& obj);
        AForm& operator=(const AForm& obj);
        virtual ~AForm() throw();

        const std::string   getName() const;
        bool                getIsSigned() const;
        int                 getSGrade() const;
        int                 getEGrade() const;
        void                setIsSigned(bool isSigned);

        void    beSigned(Bureaucrat &Bureau);
        virtual void execute(Bureaucrat const & executor) const = 0;

};

std::ostream& operator<<(std::ostream& output, const AForm &obj);


#endif
