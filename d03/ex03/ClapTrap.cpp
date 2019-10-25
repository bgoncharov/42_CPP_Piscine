/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 11:03:41 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 15:28:34 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(int hitPoints, int maxHitPoints,
    int energyPoints, int maxEnergyPoints,
    int level, std::string name, int meleeAttackDamage,
    int rangedAttackDamage, int fartAttackDamage,
    int danceAttackDamage, int peanutButterAttackDamage,
    int bubblesAttackDamage, int ticklesAttackDamage,
    int armorDamageReduction,
    std::string type) : _hitPoints(hitPoints), _maxHitPoints(maxHitPoints),
        _energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints),
        _level(level), _name(name), _meleeAttackDamage(meleeAttackDamage),
        _rangedAttackDamage(rangedAttackDamage), _coltAttackDamage(fartAttackDamage), 
        _rockAttackDamage(danceAttackDamage), _gunAttackDamage(peanutButterAttackDamage),
        _boboAttackDamage(bubblesAttackDamage), _ticklesAttackDamage(ticklesAttackDamage),
        _armorDamageReduction(armorDamageReduction),
        _type(type) {
        std::cout << "ClapTrap constructor called" << std::endl;
        return ;
}

ClapTrap::ClapTrap(void) {
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap destructor called" << std::endl;
    return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
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
int ClapTrap::getHitPoints(void) const {
    return this->_hitPoints;
}

int ClapTrap::getMaxHitPoints(void) const {
	return this->_maxHitPoints;
}

int ClapTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

int ClapTrap::getMaxEnergyPoints(void) const {
	return this->_maxEnergyPoints;
}

int ClapTrap::getLevel(void) const {
	return this->_level;
}

std::string ClapTrap::getName(void) const {
	return this->_name;
}

int ClapTrap::getMeleeAttackDamage(void) const {
	return this->_meleeAttackDamage;
}

int ClapTrap::getRangedAttackDamage(void) const {
	return this->_rangedAttackDamage;
}

int ClapTrap::getArmorDamageReduction(void) const {
	return this->_armorDamageReduction;
}

int ClapTrap::getColtAttackDamage(void) const {
	return this->_coltAttackDamage;
}

int ClapTrap::getRockAttackDamage(void) const {
	return this->_rockAttackDamage;
}

int ClapTrap::getGunAttackDamage(void) const {
	return this->_gunAttackDamage;
}

int ClapTrap::getBoboAttackDamage(void) const {
	return this->_boboAttackDamage;
}

int ClapTrap::getTicklesAttackDamage(void) const {
	return this->_ticklesAttackDamage;
}

std::string ClapTrap::getType(void) const {
    return this->_type;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints - (int)amount + this->_armorDamageReduction < 0) {
        std::cout << this->_type << " " << this->_name << " recieved " << this->_hitPoints;
        std::cout << " of damaged. It's curent HP is 0. It's dead!" << std::endl;
        this->_hitPoints = 0;
    } else {
        this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
        std::cout << this->_type << " " << this->_name << " recieved " << amount;
		std::cout << " of damaged. It's current HP is " << this->_hitPoints << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints + (int)amount >= this->_maxHitPoints) {
        std::cout << this->_type << " " << this->_name << " healed itself ";
        std::cout << (this->_maxHitPoints - this->_hitPoints); 
		std::cout << " points. New HP: " << this->_maxHitPoints;
		std::cout <<  " Now it is fully healed. " << std::endl;
		this->_hitPoints = this->_maxHitPoints;
    } else {
        this->_hitPoints += amount;
        std::cout << this->_type << " " << this->_name << " healed itself ";
		std::cout << amount << " points. New HP: "<< this->_hitPoints << std::endl;
    }
}

//Attacks
void ClapTrap::rangedAttack(std::string const &target) const {
    std::cout << this->_type << " "  << this->_name << " ranged attacks " << target;
    std::cout << " causing " << this->_rangedAttackDamage << " points of damage !"; 
    std::cout << std::endl;
    return ;
}

void ClapTrap::meleeAttack(std::string const &target) const {
    std::cout << this->_type << " "  << this->_name << " melee attacks " << target;
    std::cout << " causing " << this->_meleeAttackDamage << " points of damage !"; 
    std::cout << std::endl;
    return ;
}

void ClapTrap::coltAttack(std::string const &target) const {
    std::cout << this->_type << " "  << this->_name << " colt attacks " << target;
    std::cout << " causing " << this->_coltAttackDamage << " points of damage !"; 
    std::cout << std::endl;
    return ;
}

void ClapTrap::rockAttack(std::string const &target) const {
    std::cout << this->_type << " "  << this->_name << " rock attacks " << target;
    std::cout << " causing " << this->_rockAttackDamage << " points of damage !"; 
    std::cout << std::endl;
    return ;
}

void ClapTrap::gunAttack(std::string const &target) const {
    std::cout << this->_type << " "  << this->_name << " gun attacks " << target;
    std::cout << " causing " << this->_gunAttackDamage << " points of damage !"; 
    std::cout << std::endl;
    return ;
}

void ClapTrap::boboAttack(std::string const &target) const {
    std::cout << this->_type << " "  << this->_name << " bobo attacks " << target;
    std::cout << " causing " << this->_boboAttackDamage << " points of damage !"; 
    std::cout << std::endl;
    return ;
}

void ClapTrap::ticklesAttack(std::string const &target) const {
    std::cout << this->_type << " "  << this->_name << " tickles attacks " << target;
    std::cout << " causing " << this->_ticklesAttackDamage << " points of damage !"; 
    std::cout << std::endl;
    return ;
}