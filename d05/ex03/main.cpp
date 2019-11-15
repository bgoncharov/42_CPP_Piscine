/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:47:59 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/29 21:14:42 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"


int main(void) {
	AForm *a1, *a2, *a3;
	Intern *newGuy = new Intern();

	a1 = newGuy->makeForm("Unknown", "boris");
	a1 = newGuy->makeForm("presidential request", "Gosha");
	a2 = newGuy->makeForm("robotomy request", "Dimon");
	a3 = newGuy->makeForm("shrubbery request", "Denis");

	std::cout << *a1 << std::endl;
	std::cout << *a2 << std::endl;
	std::cout << *a3 << std::endl;
	return (0);
}