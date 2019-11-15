/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:01:06 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/29 21:01:14 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm {

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
		/* Override */
		virtual const char *what(void) const throw();
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
		/* Override */
		virtual const char *what(void) const throw();
	};
	class FormNotSignedException : public std::exception {
	
	public:
		/* Constructors */
		FormNotSignedException(void);
		FormNotSignedException(FormNotSignedException const &);
		/* Destructor */
		virtual ~FormNotSignedException(void) throw();
		/* Operators */
		FormNotSignedException	&operator=(FormNotSignedException const &);
		/* Override */
		virtual const char *what(void) const throw();
	};
    /* Constructors */
	AForm(std::string name, int minGrade, int minGradeExec, std::string target);
    AForm(AForm const &src);

    /* Destructor */
    virtual ~AForm(void);

    /* Operators */
    AForm	&operator=(AForm const &rhs);

    /* Getters and setters */
	const std::string	getName(void) const;
	bool	getSigned(void) const;
	void	setSigned(bool _signed);
	int	getMinGrade(void) const;
	int	getMinGradeExec(void) const;
	std::string	getTarget(void) const;
	void	setTarget(std::string target);

    /* Other */
	void	beSigned(Bureaucrat const &bureaucrat);
	static int inbound(int grade);
	virtual void	executable(int grade) const;
	virtual void	execute(Bureaucrat const & executor) const = 0;

protected:
    AForm(void);

private:
    const std::string   _name;
    bool                _signed;
    const int			_minGrade;
	const int			_minGradeExec;
	std::string 		_target;
};

std::ostream	&operator<<(std::ostream &o, AForm const &rhs);


#endif