/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:50:13 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 21:50:27 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const &src) {
	*this = src;
	return;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &rhs) {
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();
	return *this;
}

void SuperMutant::takeDamage(int damage) {
	if (damage - 3 < 0)
		return ;
	if (this->_hp - damage + 3 < 0) {
		this->_hp = 0;
	} else {
		this->_hp -= damage + 3;
	}
}