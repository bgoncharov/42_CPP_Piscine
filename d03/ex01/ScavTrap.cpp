/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 09:19:29 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 12:09:33 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    return ;
}

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
        _energyPoints(50), _maxEnergyPoints(100),
        _level(1), _name(name), _meleeAttackDamage(20),
        _rangedAttackDamage(15), _coltAttackDamage(3),
        _rockAttackDamage(45), _gunAttackDamage(14),
        _boboAttackDamage(6), _ticklesAttackDamage(23),
        _armorDamageReduction(3) {
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
    return *this;
}

//Getters and Setters madafaka
int ScavTrap::getHitPoints(void) const {
    return this->_hitPoints;
}

int ScavTrap::getMaxHitPoints(void) const {
	return this->_maxHitPoints;
}

int ScavTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

int ScavTrap::getMaxEnergyPoints(void) const {
	return this->_maxEnergyPoints;
}

int ScavTrap::getLevel(void) const {
	return this->_level;
}

std::string ScavTrap::getName(void) const {
	return this->_name;
}

int ScavTrap::getMeleeAttackDamage(void) const {
	return this->_meleeAttackDamage;
}

int ScavTrap::getRangedAttackDamage(void) const {
	return this->_rangedAttackDamage;
}

int ScavTrap::getArmorDamageReduction(void) const {
	return this->_armorDamageReduction;
}

int ScavTrap::getColtAttackDamage(void) const {
	return this->_coltAttackDamage;
}

int ScavTrap::getRockAttackDamage(void) const {
	return this->_rockAttackDamage;
}

int ScavTrap::getGunAttackDamage(void) const {
	return this->_gunAttackDamage;
}

int ScavTrap::getBoboAttackDamage(void) const {
	return this->_boboAttackDamage;
}

int ScavTrap::getTicklesAttackDamage(void) const {
	return this->_ticklesAttackDamage;
}

void ScavTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints - (int)amount + this->_armorDamageReduction < 0) {
        std::cout << "SCRAV " << this->_name << " recieved " << this->_hitPoints;
        std::cout << " of damaged. It's curent HP is 0. It's dead!" << std::endl;
        this->_hitPoints = 0;
    } else {
        this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
        std::cout << "SCRAV " << this->_name << " recieved " << amount;
		std::cout << " of damaged. It's current HP is " << this->_hitPoints << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints + (int)amount >= this->_maxHitPoints) {
        std::cout << "SCRAV " << this->_name << " healed itself ";
        std::cout << (this->_maxHitPoints - this->_hitPoints); 
		std::cout << " points. New HP: " << this->_maxHitPoints;
		std::cout <<  " Now it is fully healed. " << std::endl;
		this->_hitPoints = this->_maxHitPoints;
    } else {
        this->_hitPoints += amount;
        std::cout << "SCRAV " << this->_name << " healed itself ";
		std::cout << amount << " points. New HP: "<< this->_hitPoints << std::endl;
    }
}

void ScavTrap::challengeNewcomer(void) const {
    srand(clock());
    std::cout << this->_challenges[rand() % this->_nChallenges] << std::endl;
}

//Attacks

void ScavTrap::rangedAttack(std::string const &target) const {
    std::cout << "SCRAV " << this->_name << " ranged attacks " << target;
    std::cout << " causing " << this->_rangedAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void ScavTrap::meleeAttack(std::string const &target) const {
    std::cout << "SCRAV " << this->_name << " melee attacks " << target;
    std::cout << " causing " << this->_meleeAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void ScavTrap::coltAttack(std::string const &target) const {
    std::cout << "SCRAV " << this->_name << " colt attacks " << target;
    std::cout << " causing " << this->_coltAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void ScavTrap::rockAttack(std::string const &target) const {
    std::cout << "SCRAV " << this->_name << " rock attacks " << target;
    std::cout << " causing " << this->_rockAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void ScavTrap::gunAttack(std::string const &target) const {
    std::cout << "SCRAV " << this->_name << " gun attacks " << target;
    std::cout << " causing " << this->_gunAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void ScavTrap::boboAttack(std::string const &target) const {
    std::cout << "SCRAV " << this->_name << " bobo attacks " << target;
    std::cout << " causing " << this->_boboAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void ScavTrap::ticklesAttack(std::string const &target) const {
    std::cout << "SCRAV " << this->_name << " tickles attacks " << target;
    std::cout << " causing " << this->_ticklesAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

std::string const ScavTrap::_challenges[] = {
    "Die or die!", "What's up bro?", "Yo man!",
    "I'm you father!", "Come with me!", "Today!",
    "Never do it again!", "Asta la vista!"
};

int const ScavTrap::_nChallenges = 8;