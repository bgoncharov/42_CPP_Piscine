/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:47:23 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/29 22:33:54 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Constructors */
Bureaucrat::Bureaucrat(void) {
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	}
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()) {
	*this = src;
	return ;
}

/* Destructor */
Bureaucrat::~Bureaucrat(void) {
	return ;
}

/* Operator */
Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->_grade = rhs.getGrade();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

/* Getters and Setters */
const std::string	Bureaucrat::getName(void) const {
	return this->_name;
}

int	Bureaucrat::getGrade(void) const {
	return this->_grade;
}
void	Bureaucrat::setGrade(int grade) {
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	}
	this->_grade = grade;
}

/* Functions */

void	Bureaucrat::incrementGrade(int increment) {
	if (increment < 0)
		return ;
	this->setGrade(this->_grade - increment);
}

void	Bureaucrat::decrementGrade(int decrement) {
	if (decrement < 0)
		return ;
	this->setGrade(this->_grade + decrement);
}

void	Bureaucrat::signAForm(AForm &form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << this->_name << " cannot sign " << form.getName();
		std::cout << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeAForm(AForm const &form) {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << "There was an error executing <" << form.getName() << "> because " << e.what() << std::endl;
	}
}


/* Exceptions */

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const &) {
	return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {
	return ;
}

Bureaucrat::GradeTooHighException	&Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &) {
	return *this;
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw() {
	return "The grade that is going to be set is to high!";
}

/* Constructors */
Bureaucrat::GradeTooLowException::GradeTooLowException(void) {
	return ;
}
Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const &) {
return ;
}
/* Destructor */
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
	return ;
}
/* Operator */
Bureaucrat::GradeTooLowException	&Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &) {
	return *this;
}
const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return "The grade that is going to be set is to low!";
}