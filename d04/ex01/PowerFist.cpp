/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:48:44 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 21:49:47 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {
	return ;
}

PowerFist::PowerFist(PowerFist const &src) {
	*this = src;
	return;
}

PowerFist::~PowerFist(void) {
	return ;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
	this->_name = rhs.getName();
	this->_APCost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return *this;
}

void PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}