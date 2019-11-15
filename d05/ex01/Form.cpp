/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:36:30 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/28 19:15:12 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _minGrade(1) {
	return ;
}

Form::Form(std::string name, int minGrade) : 
_name(name), _signed(false), _minGrade(Form::inbound(minGrade)) {
	return ;
}

Form::Form(Form const &src) : _name(src.getName()), _minGrade(src.getMinGrade()) {
	*this = src;
	return ;
}

Form::~Form(void) {
	return ;
}

Form &Form::operator=(Form const &rhs) {
	this->_signed = rhs.getSigned();
	return *this;
}

const std::string Form::getName(void) const {
	return this->_name;
}

bool Form::getSigned(void) const {
	return this->_signed;
}

int	Form::getMinGrade(void) const {
	return this->_minGrade;
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() > this->_minGrade) {
		throw Form::GradeTooLowException();
	}
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {
	o << rhs.getName() << " with minimum grade required: " << rhs.getMinGrade();
	o << " is " << (rhs.getSigned() == true ? "signed" : "NOT signed");
	return o;
}

int		Form::inbound(int grade) {
	if (grade < 1) {
		throw Form::GradeTooHighException();
	} else if (grade > 150) {
		throw Form::GradeTooLowException();
	}
	return (grade);
}

Form::GradeTooLowException::GradeTooLowException(void) {
	return ;
}
Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const &) {
return ;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {
	return ;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(Form::GradeTooLowException const &) {
	return *this;
}

const char *Form::GradeTooLowException::what(void) const throw() {
	return "Grade is too low.";
}

Form::GradeTooHighException::GradeTooHighException(void) {
	return ;
}
Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const &) {
return ;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {
	return ;
}

Form::GradeTooHighException	&Form::GradeTooHighException::operator=(Form::GradeTooHighException const &) {
	return *this;
}

const char *Form::GradeTooHighException::what(void) const throw() {
	return "Grade is too high.";
}