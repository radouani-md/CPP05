#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
#include "Bureaucrat.hpp"

class Form
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
        Form(const std::string name, const int sGrade, const int eGrade);
        Form();
        Form(const Form& obj);
        Form& operator=(const Form& obj);
        virtual ~Form() throw();

        const std::string   getName() const;
        bool                getIsSigned() const;
        int           getSGrade() const;
        int           getEGrade() const;
        void                setIsSigned(bool isSigned);

        void    beSigned(Bureaucrat &Bureau);
};

std::ostream& operator<<(std::ostream& output, const Form &obj);


#endif
