/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:42:58 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 21:43:45 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	return ;
}

Character::Character(std::string const & name) :
_ap(40), _weapon(NULL), _name(name) {
	return ;
}

Character::Character(Character const &src) {
	*this = src;
	return;
}

Character::~Character(void) {
	return ;
}

Character &Character::operator=(Character const &rhs) {
	this->_ap = rhs.getAP();
	this->_weapon = rhs.getWeapon();
	this->_name = rhs.getName();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Character const &rhs) {
	if (rhs.getWeapon()) {
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a ";
		o << rhs.getWeapon()->getName() << std::endl;
	} else {
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed";
		o << std::endl;
	}
	return o;
}

int	Character::getAP(void) const {
	return this->_ap;
}
void Character::setAP(int ap) {
	this->_ap = ap;
}

AWeapon	*Character::getWeapon(void) const {
	return this->_weapon;
}
void Character::setWeapon(AWeapon *weapon) {
	this->_weapon = weapon;
}

std::string	Character::getName(void) const {
	return this->_name;
}
void Character::setName(std::string name) {
	this->_name = name;
}

void Character::recoverAP(void) {
	if (this->_ap + 10 > 40)
		this->_ap = 40;
	else
		this->_ap += 10;
}

void Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
}
void Character::attack(Enemy *enemy) {
	if (!this->_weapon || !enemy ||
		this->_ap - this->_weapon->getAPCost() < 0)
		return ;
	this->_ap -= this->_weapon->getAPCost();
	std::cout << this->_name << " attacks " << enemy->getType();
	std::cout << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}