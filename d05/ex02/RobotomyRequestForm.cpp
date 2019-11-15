/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:58:51 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/29 20:58:53 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* Constructors */
RobotomyRequestForm::RobotomyRequestForm(void) : AForm() {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
AForm("Robotomy Request Form", 72, 45, target) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) :
AForm(src.getName(), src.getMinGrade(), src.getMinGradeExec(), src.getTarget()) {
	*this = src;
	return ;
}

/* Destructor */
RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

/* Operator */
RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	this->setSigned(rhs.getSigned());
	this->setTarget(rhs.getTarget());
	return *this;
}

/* Other */
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	this->executable(executor.getGrade());
	srand(clock());
	system("afplay Drill.mp3 &");
	std::cout << "* Drilling noise....*" << std::endl;
	std::cout << this->getTarget() << (rand() % 2 == 1 ? " has been robotomized successfully" : " failed to be robotomized") << std::endl;
}