/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:47:56 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/29 21:06:19 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

public:
	/* Exceptions */
	class GradeTooHighException : public std::exception {
	public:
		/* Constructors */
		GradeTooHighException(void);
		GradeTooHighException(GradeTooHighException const &);
	
		/* Destructor */
		virtual ~GradeTooHighException(void) throw();
	
		/* Operators */
		GradeTooHighException	&operator=(GradeTooHighException const &);
		/* Overrides */
		virtual const char	*what(void) const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		/* Constructors */
		GradeTooLowException(void);
		GradeTooLowException(GradeTooLowException const &);
	
		/* Destructor */
		virtual ~GradeTooLowException(void) throw();
	
		/* Operators */
		GradeTooLowException	&operator=(GradeTooLowException const &);
		/* Overrides */
		virtual const char	*what(void) const throw();
	};
	/* Constructors */
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);

	/* Destructor */
	virtual ~Bureaucrat(void);

	/* Operators */
	Bureaucrat	&operator=(Bureaucrat const &rhs);

	/* Getters and setters */
	const std::string	getName(void) const;
	int	getGrade(void) const;
	void	setGrade(int grade);

	/* Functions */
	void	incrementGrade(int increment);
	void	decrementGrade(int decrement);
	void	signAForm(AForm &form);
	void	executeAForm(AForm const &form);

protected:
	Bureaucrat(void);

private:
	std::string const	_name;
	int					_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif