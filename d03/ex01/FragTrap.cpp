/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 17:55:02 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 12:09:26 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    return ;
}

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
        _energyPoints(100), _maxEnergyPoints(100),
        _level(1), _name(name), _meleeAttackDamage(30),
        _rangedAttackDamage(20), _coltAttackDamage(50),
        _rockAttackDamage(15), _gunAttackDamage(40),
        _boboAttackDamage(90), _ticklesAttackDamage(99),
        _armorDamageReduction(5) {
            std::cout << "FragTrap constructor called" << std::endl;
            return ;
        };

FragTrap::FragTrap(FragTrap const &src) {
	std::cout << "Fragtrap copy constructor called" << std::endl;
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
int FragTrap::getHitPoints(void) const {
    return this->_hitPoints;
}

int FragTrap::getMaxHitPoints(void) const {
	return this->_maxHitPoints;
}

int FragTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

int FragTrap::getMaxEnergyPoints(void) const {
	return this->_maxEnergyPoints;
}

int FragTrap::getLevel(void) const {
	return this->_level;
}

std::string FragTrap::getName(void) const {
	return this->_name;
}

int FragTrap::getMeleeAttackDamage(void) const {
	return this->_meleeAttackDamage;
}

int FragTrap::getRangedAttackDamage(void) const {
	return this->_rangedAttackDamage;
}

int FragTrap::getArmorDamageReduction(void) const {
	return this->_armorDamageReduction;
}

int FragTrap::getColtAttackDamage(void) const {
	return this->_coltAttackDamage;
}

int FragTrap::getRockAttackDamage(void) const {
	return this->_rockAttackDamage;
}

int FragTrap::getGunAttackDamage(void) const {
	return this->_gunAttackDamage;
}

int FragTrap::getBoboAttackDamage(void) const {
	return this->_boboAttackDamage;
}

int FragTrap::getTicklesAttackDamage(void) const {
	return this->_ticklesAttackDamage;
}

void FragTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints - (int)amount + this->_armorDamageReduction < 0) {
        std::cout << "FR4G-TP " << this->_name << " recieved " << this->_hitPoints;
        std::cout << " of damaged. It's curent HP is 0. It's dead!" << std::endl;
        this->_hitPoints = 0;
    } else {
        this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
        std::cout << "FR4G-TP " << this->_name << " recieved " << amount;
		std::cout << " of damaged. It's current HP is " << this->_hitPoints << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints + (int)amount >= this->_maxHitPoints) {
        std::cout << "FR4G-TP " << this->_name << " healed itself ";
        std::cout << (this->_maxHitPoints - this->_hitPoints); 
		std::cout << " points. New HP: " << this->_maxHitPoints;
		std::cout <<  " Now it is fully healed. " << std::endl;
		this->_hitPoints = this->_maxHitPoints;
    } else {
        this->_hitPoints += amount;
        std::cout << "FR4G-TP " << this->_name << " healed itself ";
		std::cout << amount << " points. New HP: "<< this->_hitPoints << std::endl;
    }
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

void FragTrap::rangedAttack(std::string const &target) const {
    std::cout << "FR4G-TP " << this->_name << " ranged attacks " << target;
    std::cout << " causing " << this->_rangedAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void FragTrap::meleeAttack(std::string const &target) const {
    std::cout << "FR4G-TP " << this->_name << " melee attacks " << target;
    std::cout << " causing " << this->_meleeAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void FragTrap::coltAttack(std::string const &target) const {
    std::cout << "FR4G-TP " << this->_name << " colt attacks " << target;
    std::cout << " causing " << this->_coltAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void FragTrap::rockAttack(std::string const &target) const {
    std::cout << "FR4G-TP " << this->_name << " rock attacks " << target;
    std::cout << " causing " << this->_rockAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void FragTrap::gunAttack(std::string const &target) const {
    std::cout << "FR4G-TP " << this->_name << " gun attacks " << target;
    std::cout << " causing " << this->_gunAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void FragTrap::boboAttack(std::string const &target) const {
    std::cout << "FR4G-TP " << this->_name << " bobo attacks " << target;
    std::cout << " causing " << this->_boboAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

void FragTrap::ticklesAttack(std::string const &target) const {
    std::cout << "FR4G-TP " << this->_name << " tickles attacks " << target;
    std::cout << " causing " << this->_ticklesAttackDamage << " points of damage!";
    std::cout << std::endl;
    return ;
}

int const FragTrap::_nAttacks = 5;