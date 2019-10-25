/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:06:51 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 14:59:30 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
	return ;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1,
name, 60, 20, 55, 11, 99, 2, 13, 5, "SUP3R-TP"), NinjaTrap(), FragTrap() {
	std::cout << "SuperTrap constructor called" << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src) {
	std::cout << "SuperTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}
SuperTrap::~SuperTrap(void) {
	std::cout << "SuperTrap destructor called" << std::endl;
	return ;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs) {
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
	this->_level = rhs.getLevel();
	this->_name = rhs.getName();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getArmorDamageReduction();
	this->_coltAttackDamage = rhs.getColtAttackDamage();
	this->_rockAttackDamage = rhs.getRockAttackDamage();
	this->_gunAttackDamage = rhs.getGunAttackDamage();
	this->_boboAttackDamage = rhs.getBoboAttackDamage();
	this->_ticklesAttackDamage = rhs.getTicklesAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	this->_type = rhs.getType();
	return *this;
}

