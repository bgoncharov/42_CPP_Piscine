/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:13:10 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/29 22:27:53 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	return ;
}

Intern::Intern(Intern const &) {
	return ;
}

Intern::~Intern(void) {
	return ;
}

Intern	&Intern::operator=(Intern const &) {
	return *this;
}

AForm	*Intern::makeForm(std::string form, std::string target) {
	if (!form.compare("presidential request"))
		return (new PresidentialPardonForm(target));
	if (!form.compare("robotomy request"))
		return (new RobotomyRequestForm(target));
	if (!form.compare("shrubbery request"))
		return (new ShrubberyCreationForm(target));
	std::cout << "Error: The type of form you requested is not part of our forms." << std::endl;
	return (NULL);
}