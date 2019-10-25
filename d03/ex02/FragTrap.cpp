/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 17:55:02 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 15:23:03 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1,
            name, 30, 20, 16, 132, 55, 88, 1, 5, "FR4G-TP") {
            std::cout << "FragTrap constructor called" << std::endl;
            return ;
        };

FragTrap::FragTrap(FragTrap const &src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
    this->_hitPoints = rhs.getHitPoints();
    this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
    this->_energyPoints = rhs.getEnergyPoints();
    this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
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

//Attacks

void FragTrap::vaulhunter_dot_exe(std::string const & target) {
    if (this->_energyPoints < 25) {
        std::cout << "Vaulthunter could not call any other attack because your energy point are less then 25.";
        std::cout << " Energy points: " << this->_energyPoints << std::endl;
    } else {
        void (FragTrap::*attacks[])(std::string const &target) const = {
            &FragTrap::coltAttack,
            &FragTrap::rockAttack,
            &FragTrap::gunAttack,
            &FragTrap::boboAttack,
            &FragTrap::ticklesAttack
        };
        this->_energyPoints -= 25;
        std::cout << "Calling random attack, energy points left: " << this->_energyPoints << std::endl;
        srand(clock());
        (this->*attacks[rand() % this->_nAttacks])(target);
    }
}

int const FragTrap::_nAttacks = 5;