/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 09:19:29 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 15:41:19 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1,
            name, 20, 15, 3, 45, 14, 6, 23, 3, "SCRAV") {
            std::cout << "ScavTrap constructor called" << std::endl;
            return ;
        };

ScavTrap::ScavTrap(ScavTrap const &src) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
    this->_hitPoints = rhs.getHitPoints();
    this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
    this->_energyPoints = rhs.getEnergyPoints();
    this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
    this->_level = rhs.getLevel();
    this->_name = rhs.getName();
    this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
    this->_rangedAttackDamage = rhs.getRangedAttackDamage();
    this->_coltAttackDamage = rhs.getColtAttackDamage();
    this->_rockAttackDamage = rhs.getRockAttackDamage();
    this->_gunAttackDamage = rhs.getGunAttackDamage();
    this->_boboAttackDamage = rhs.getBoboAttackDamage();
    this->_ticklesAttackDamage = rhs.getTicklesAttackDamage();
    this->_armorDamageReduction = rhs.getArmorDamageReduction();
    this->_type = rhs.getType();
    return *this;
}

void ScavTrap::challengeNewcomer(void) const {
    srand(clock());
    std::cout << this->_challenges[rand() % this->_nChallenges] << std::endl;
}

std::string const ScavTrap::_challenges[] = {
    "Die or die!", "What's up bro?", "Yo man!",
    "I'm you father!", "Come with me!", "Today!",
    "Never do it again!", "Asta la vista!"
};

int const ScavTrap::_nChallenges = 8;