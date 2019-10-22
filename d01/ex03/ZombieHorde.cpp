/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:30:08 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 17:57:40 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <stdlib.h>

ZombieHorde::ZombieHorde(int N) {
    Zombie *zombies = new Zombie[N];
    std::string names[] = {"BITERS", "COLD BODIES", "CREEPERS", "DEAD ONES",
							"FLOATERS", "GEEKS", "LAMEBRAINS", "LURKERS",
							"WALKERS", "STINKERS"};
    for (int i = 0; i < N; i++) {
        zombies[i].set_name(names[rand() % 10]);
        zombies[i].set_type("Default");
    }
    this->set_zombies(zombies);
    this->set_nb_zombies(N);
    return ;
}

ZombieHorde::~ZombieHorde(void) {
    delete [] this->_zombies;
    return ;
}

void ZombieHorde::announce(void) {
    Zombie *zombies;
    int nb;

    zombies = this->get_zombies();
    nb = this->get_nb_zombies();
    for (int i = 0; i < nb; i++) {
        zombies[i].announce();
    }
}

Zombie *ZombieHorde::get_zombies(void) const {
    return this->_zombies;
}

int ZombieHorde::get_nb_zombies(void) const {
    return this->_nb_zombies;
}

void ZombieHorde::set_zombies(Zombie *zombies) {
    this->_zombies = zombies;
}

void ZombieHorde::set_nb_zombies(int n) {
    this->_nb_zombies = n;
}