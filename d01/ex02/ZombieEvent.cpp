/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:04:05 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 16:54:03 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <stdlib.h>

ZombieEvent::ZombieEvent(void) {
	std::string names[] = {"BITERS", "COLD BODIES", "CREEPERS", "DEAD ONES",
							"FLOATERS", "GEEKS", "LAMEBRAINS", "LURKERS",
							"WALKERS", "STINKERS"};
	this->_zombieType = "Zombich";
	for (int i = 0; i < 10; i++){
		this->_names_pool[i] = names[i];
	}
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}

void ZombieEvent::setZombieType(std::string type) {
	this->_zombieType = type;
}

Zombie* ZombieEvent::newZombie(std::string name) const {
	Zombie *res = new Zombie();
	res->set_type(this->_zombieType);
	res->set_name(name);
	return (res);
}

void ZombieEvent::randomChump(void) const {
	Zombie randz = Zombie();
	randz.set_type(this->_zombieType);
	randz.set_name(this->_names_pool[rand() % 10]);
	randz.announce();
}