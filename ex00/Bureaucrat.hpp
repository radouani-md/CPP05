#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat 
{
    private:
        const std::string name;
        int grade;
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
        Bureaucrat(std::string na_me, int gra_de);
        Bureaucrat();
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        virtual ~Bureaucrat() throw();

        const std::string   getName() const;
        int                 getGrade() const;
        void                 setGrade(int grade);
        void                incrementGrade();
        void                decrementGrade();
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat &obj);

#endif

