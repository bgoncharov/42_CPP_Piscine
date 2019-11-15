/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:36:26 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/28 19:04:45 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

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
        Form(std::string name, int minGrade);
        Form(Form const &src);

        virtual ~Form(void);

        Form &operator=(Form const &rhs);

        const std::string getName(void) const;
        bool getSigned(void) const;
        int getMinGrade(void) const;

        void beSigned(Bureaucrat const &bureaucrat);

        static int inbound(int grade);
    
    protected:
        Form(void);

    private:
        const std::string _name;
        bool _signed;
        const int _minGrade;

};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif