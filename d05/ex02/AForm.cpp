/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:00:44 by bogoncha          #+#    #+#             */
/*   Updated: 2019/11/15 09:04:47 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Default"), _minGrade(1), _minGradeExec(1) {
	return ;
}

AForm::AForm(std::string name, int minGrade, int minGradeExec, std::string target) : 
_name(name), _signed(false), _minGrade(AForm::inbound(minGrade)), 
_minGradeExec(AForm::inbound(minGradeExec)), _target(target) {
	return ;
}

AForm::AForm(AForm const &src) : _name(src.getName()), _minGrade(src.getMinGrade()), _minGradeExec(src.getMinGradeExec()) {
	*this = src;
	return ;
}

AForm::~AForm(void) {
	return ;
}

AForm &AForm::operator=(AForm const &rhs) {
	this->_signed = rhs.getSigned();
	this->_target = rhs.getTarget();
	return *this;
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs) {
	o << rhs.getName() << " with minimum grade required: " << rhs.getMinGrade();
	o << " is " << (rhs.getSigned() == true ? "signed" : "NOT signed");
	return o;
}

const std::string AForm::getName(void) const {
	return this->_name;
}

bool	AForm::getSigned(void) const {
	return this->_signed;
}
void	AForm::setSigned(bool _signed) {
	this->_signed = _signed;
}

int	AForm::getMinGrade(void) const {
	return this->_minGrade;
}

int	AForm::getMinGradeExec(void) const {
	return this->_minGradeExec;
}

std::string	AForm::getTarget(void) const {
	return this->_target;
}
void AForm::setTarget(std::string target) {
	this->_target = target;
}

void AForm::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() > this->_minGrade) {
		throw AForm::GradeTooLowException();
	}
	this->_signed = true;
}

void AForm::executable(int grade) const {
	if (this->_minGradeExec < grade) {
		throw AForm::GradeTooLowException();
	}
	if (this->_signed == false) {
		throw AForm::FormNotSignedException();
	}
}

int AForm::inbound(int grade) {
	if (grade < 1) {
		throw AForm::GradeTooHighException();
	} else if (grade > 150) {
		throw AForm::GradeTooLowException();
	}
	return (grade);
}


AForm::GradeTooLowException::GradeTooLowException(void) {
	return ;
}
AForm::GradeTooLowException::GradeTooLowException(AForm::GradeTooLowException const &) {
return ;
}

AForm::GradeTooLowException::~GradeTooLowException(void) throw() {
	return ;
}

AForm::GradeTooLowException	&AForm::GradeTooLowException::operator=(AForm::GradeTooLowException const &) {
	return *this;
}

const char *AForm::GradeTooLowException::what(void) const throw() {
	return "Grade is too low.";
}

AForm::GradeTooHighException::GradeTooHighException(void) {
	return ;
}
AForm::GradeTooHighException::GradeTooHighException(AForm::GradeTooHighException const &) {
return ;
}

AForm::GradeTooHighException::~GradeTooHighException(void) throw() {
	return ;
}

AForm::GradeTooHighException	&AForm::GradeTooHighException::operator=(AForm::GradeTooHighException const &) {
	return *this;
}

const char *AForm::GradeTooHighException::what(void) const throw() {
	return "Grade is too high.";
}


AForm::FormNotSignedException::FormNotSignedException(void) {
	return ;
}
AForm::FormNotSignedException::FormNotSignedException(AForm::FormNotSignedException const &) {
return ;
}

AForm::FormNotSignedException::~FormNotSignedException(void) throw() {
	return ;
}

AForm::FormNotSignedException	&AForm::FormNotSignedException::operator=(AForm::FormNotSignedException const &) {
	return *this;
}

const char *AForm::FormNotSignedException::what(void) const throw() {
	return "Form is not signed.";
}