/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:47:56 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/28 19:05:46 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat {

    public:
        class GradeTooHighException : public std::exception {
            public:
                GradeTooHighException(void);
                GradeTooHighException(GradeTooHighException const &);

                virtual ~GradeTooHighException(void) throw();

                GradeTooHighException &operator=(GradeTooHighException const &);
                virtual const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                GradeTooLowException(void);
                GradeTooLowException(GradeTooLowException const &);

                virtual ~GradeTooLowException(void) throw();

                GradeTooLowException &operator=(GradeTooLowException const &);       

                virtual const char *what(void) const throw(); 
        };
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &src);

        virtual ~Bureaucrat(void);

        Bureaucrat &operator=(Bureaucrat const &rhs);

        const std::string getName(void) const;
        int getGrade(void) const;
        void setGrade(int grade);

        void incrementGrade(int incr);
        void decrementGrade(int decr);
        void signForm(Form &form);

    protected:
        Bureaucrat(void);

    private:
        std::string const _name;
        int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif