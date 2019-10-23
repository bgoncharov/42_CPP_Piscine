/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:04:05 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 16:18:38 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <stdlib.h>

 ZombieEvent::ZombieEvent(void) {
     std::string names[] = {"Biters", "Cold", "Creepers", "Dead", "Floaters", 
	 						"Geeks", "Lamebrains", "Lurkers", "Walkers", "Stinkers"};
     this->_zombieType = "Default";
     for (size_t i = 0; i < 10; i++) {
         this->_name_pool[i] = names[i];
     }
    return ;
 }

ZombieEvent::~ZombieEvent(void) {
    return ;
}

void    ZombieEvent::setZombieType(std::string type) {
    this->_zombieType = type;
}

Zombie*  ZombieEvent::newZombie(std::string name) const{
    Zombie *res = new Zombie();
    res->set_type(this->_zombieType);
    res->set_name(name);
    return (res);
}

void    ZombieEvent::randomChump(void) const {
    Zombie  randin = Zombie();
    randin.set_type(this->_zombieType);
    randin.set_name(this->_name_pool[rand() % 10]);
    randin.announce();
}