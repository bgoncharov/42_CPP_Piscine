/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:47:59 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/29 21:10:10 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void) {
	Bureaucrat *highLevel = new Bureaucrat("Boris", 1);
	Bureaucrat *lowLevel = new Bureaucrat("Dima", 150);
	PresidentialPardonForm *pForm = new PresidentialPardonForm("Goga");
	RobotomyRequestForm *rForm = new RobotomyRequestForm("Vasial");
	ShrubberyCreationForm *shForm = new ShrubberyCreationForm("Dodo");

	lowLevel->executeAForm(*pForm);
	lowLevel->executeAForm(*rForm);
	lowLevel->executeAForm(*shForm);
	highLevel->executeAForm(*pForm);
	highLevel->executeAForm(*rForm);
	highLevel->executeAForm(*shForm);

	std::cout << std::endl;

	highLevel->signAForm(*pForm);
	highLevel->signAForm(*rForm);
	highLevel->signAForm(*shForm);

	std::cout << std::endl;
	
	lowLevel->executeAForm(*pForm);
	lowLevel->executeAForm(*rForm);
	lowLevel->executeAForm(*shForm);
	highLevel->executeAForm(*pForm);
	highLevel->executeAForm(*rForm);
	highLevel->executeAForm(*shForm);
	return (0);
}