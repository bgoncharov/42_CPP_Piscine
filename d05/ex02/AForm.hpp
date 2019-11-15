/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:01:06 by bogoncha          #+#    #+#             */
/*   Updated: 2019/11/15 09:05:58 by bogoncha         ###   ########.fr       */
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
	class GradeTooHighException : public std::exception {
	
	public:
		GradeTooHighException(void);
		GradeTooHighException(GradeTooHighException const &);
		virtual ~GradeTooHighException(void) throw();
		GradeTooHighException	&operator=(GradeTooHighException const &);
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
	class FormNotSignedException : public std::exception {
	
	public:
		FormNotSignedException(void);
		FormNotSignedException(FormNotSignedException const &);
		virtual ~FormNotSignedException(void) throw();
		FormNotSignedException	&operator=(FormNotSignedException const &);
		virtual const char *what(void) const throw();
	};
	AForm(std::string name, int minGrade, int minGradeExec, std::string target);
    AForm(AForm const &src);

    virtual ~AForm(void);

    AForm	&operator=(AForm const &rhs);

	const std::string	getName(void) const;
	bool getSigned(void) const;
	void setSigned(bool _signed);
	int	getMinGrade(void) const;
	int	getMinGradeExec(void) const;
	std::string	getTarget(void) const;
	void	setTarget(std::string target);

  	void beSigned(Bureaucrat const &bureaucrat);
	static int inbound(int grade);
	virtual void executable(int grade) const;
	virtual void execute(Bureaucrat const & executor) const = 0;

protected:
    AForm(void);

private:
    const std::string _name;
    bool _signed;
    const int _minGrade;
	const int _minGradeExec;
	std::string _target;
};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);


#endif