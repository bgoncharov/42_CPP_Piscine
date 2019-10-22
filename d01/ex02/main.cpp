/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:54:21 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 17:05:46 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent *event = new ZombieEvent();
    Zombie      *zombie1;
    Zombie      *zombie2;

    event->setZombieType("Runner");
    zombie1 = event->newZombie("Felix");
    zombie2 = event->newZombie("Karl");

    zombie1->announce();
    delete zombie1;
    event->randomChump();
    zombie2->announce();
    zombie2->set_name("Gustav");
    zombie2->set_type("Killer");
    zombie2->announce();
    delete zombie2;

    //system("leaks -q zombie");
}