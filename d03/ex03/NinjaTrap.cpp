/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 11:56:13 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 15:31:51 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {
    return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1,
            name, 60, 5, 55, 11, 99, 2, 13, 0, "NINJ4-TP") {
            std::cout << "NinjaTrap constructor called" << std::endl;
            return ;
        };

NinjaTrap::NinjaTrap(NinjaTrap const &src) {
	std::cout << "NinjaTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

NinjaTrap::~NinjaTrap(void) {
    std::cout << "NinjaTrap destructor called" << std::endl;
    return ;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs) {
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

//Attacks
void NinjaTrap::ninjaShoebox(FragTrap const &ct) const {
    std::cout << this->_type << " " << this->_name << " throws his sable to  ";
    std::cout << ct.getType() << " " << ct.getName() << std::endl;
    return ;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &ct) const {
    std::cout << this->_type << " " << this->_name << " throws his sable to  ";
    std::cout << ct.getType() << " " << ct.getName() << std::endl;
    return ;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &ct) const {
    std::cout << this->_type << " " << this->_name << " throws his sable to  ";
    std::cout << ct.getType() << " " << ct.getName() << std::endl;
    return ;
}