/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:05:08 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/30 20:27:42 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base *generate(void) {
	int random;

	srand(clock());
	random = rand() % 3;

	if (random == 0) {
		std::cout << "Created class: A" << std::endl;
		return (new A());
	} else if (random == 1) {
		std::cout << "Created class: B" << std::endl;
		return (new B());
	} else {
		std::cout << "Created class: C" << std::endl;
		return (new C());
	}
}

void identify_from_pointer(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p) {
	try {
		A &a = dynamic_cast<A&>(p);
		a = a;
		std::cout << "A" << std::endl;
	} catch (std::exception &) {}
	try {
		B &b = dynamic_cast<B&>(p);
		b = b;
		std::cout << "B" << std::endl;
	} catch (std::exception &) {}
	try {
		C &c = dynamic_cast<C&>(p);
		c = c;
		std::cout << "C" << std::endl;
	} catch (std::exception &) {}
}

int main(void) {
	Base *p = generate();
	Base &r = *p;

	std::cout << "Answer from pointer: ";
	identify_from_pointer(p);
	std::cout << "Answer from reference: ";
	identify_from_reference(r);

	return (0);
}