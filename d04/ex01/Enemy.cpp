/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:44:29 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/26 22:12:23 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {
	return ;
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type){
	return ;
}

Enemy::Enemy(Enemy const &src) {
	*this = src;
	return;
}

Enemy::~Enemy(void) {
	return ;
}

Enemy &Enemy::operator=(Enemy const &rhs) {
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();
	return *this;
}

int	Enemy::getHP(void) const {
	return this->_hp;
}
void Enemy::setHP(int hp) {
	this->_hp = hp;
}

std::string	Enemy::getType(void) const {
	return this->_type;
}
void Enemy::setType(std::string type) {
	this->_type = type;
}

void Enemy::takeDamage(int damage) {
	if (damage > 0) {
		if (this->_hp - damage < 0) {
			this->_hp = 0;
		} else {
			this->_hp -= damage;
		}
	}
}