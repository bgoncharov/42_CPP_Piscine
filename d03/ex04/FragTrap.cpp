/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:06:51 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 15:00:01 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "Fragtrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100,100, 100, 100, 1,
name, 30, 20, 16, 132, 55, 88, 1, 5, "FR4G-TP") {
		std::cout << "Fragtrap constructor called" << std::endl;
		return ;
	};

FragTrap::FragTrap(FragTrap const &src) {
	std::cout << "Fragtrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "Fragtrap destructor called" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
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

void FragTrap::vaulthunter_dot_exe(std::string const & target){
	if (this->_energyPoints < 25) {
		std::cout << "Vaulthunter could not call any other attack because your energy points are less than 25.";
		std::cout << " Energy points: " << this->_energyPoints << std::endl;
	} else {
		void (ClapTrap::*attacks[])(std::string const &target) const = {
			&ClapTrap::coltAttack,
			&ClapTrap::rockAttack,
			&ClapTrap::gunAttack,
			&ClapTrap::boboAttack,
			&ClapTrap::ticklesAttack
		};
		this->_energyPoints -= 25;
		std::cout << "Calling random attack, energy points left: " << this->_energyPoints << std::endl;
		srand(clock());
		(this->*attacks[rand() % this->_nAttacks])(target);
	}
}

int const FragTrap::_nAttacks = 5;
