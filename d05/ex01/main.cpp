/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:47:59 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/28 19:04:27 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	Bureaucrat *highLevel = new Bureaucrat("Boris", 1);
	Bureaucrat *lowLevel = new Bureaucrat("Scuko", 150);
	Form *lowLevelForm = new Form("low Level Form", 150);
	Form *highLevelForm = new Form("high level form", 1);
	Form *imposibleForm;

	try {
		imposibleForm = new Form("Imposible form", -4);
	} catch (Form::GradeTooHighException &e) {
		std::cout << "Could not create Form because: " << e.what() << std::endl;
	}
	std::cout << *highLevel << std::endl;
	std::cout << *lowLevel << std::endl;
	std::cout << *highLevelForm << std::endl;
	std::cout << *lowLevelForm << std::endl;
	
	try {
		lowLevel->signForm(*highLevelForm);
	} catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		highLevelForm->beSigned(*lowLevel);
	} catch (Form::GradeTooLowException &e) {
		std::cout << *lowLevel << " could not sign high level form because" << e.what() << std::endl;
	}

	std::cout << *highLevel << std::endl;
	std::cout << *lowLevel << std::endl;
	std::cout << *highLevelForm << std::endl;
	std::cout << *lowLevelForm << std::endl;

	try {
		lowLevel->signForm(*lowLevelForm);
		highLevel->signForm(*highLevelForm);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << *highLevel << std::endl;
	std::cout << *lowLevel << std::endl;
	std::cout << *highLevelForm << std::endl;
	std::cout << *lowLevelForm << std::endl;
	
	return (0);
}