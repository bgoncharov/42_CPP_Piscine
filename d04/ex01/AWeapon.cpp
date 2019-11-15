/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:40:45 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 21:42:42 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) {
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
_name(name), _APCost(apcost), _damage(damage) {
	return ;
}

AWeapon::AWeapon(AWeapon const &src) {
	*this = src;
	return;
}

AWeapon::~AWeapon(void) {
	return ;
}

AWeapon	&AWeapon::operator=(AWeapon const &rhs) {
	this->_APCost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	this->_name = rhs.getName();
	return *this;
}

std::string AWeapon::getName(void) const {
	return this->_name;
}
int AWeapon::getAPCost(void) const {
	return this->_APCost;
}
int AWeapon::getDamage(void) const {
	return this->_damage;
}