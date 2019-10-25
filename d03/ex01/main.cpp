/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:26:21 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 10:06:49 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) 
{
    std::cout << "FragTrap tests:" << std::endl;

    FragTrap *boris = new FragTrap("Boris");

    for (int i = 0; i < 4; i++)
        boris->takeDamage(35);
    for (int i = 0; i < 3; i++)
        boris->beRepaired(50);
    boris->meleeAttack("Eblan");
    boris->rangedAttack("Huilo");
    for (int i = 0; i< 6; i++)
        boris->vaulhunter_dot_exe("Puko");
    delete boris;

    std::cout << std::endl;
    std::cout << "========================" << std::endl;
    std::cout << std::endl;

    std::cout << "ScavTrap tests:" << std::endl;

    ScavTrap *gustavo = new ScavTrap("Gustavo");
    for (int i = 0; i < 4; i++)
        gustavo->takeDamage(35);
    for (int i = 0; i < 3; i++)
        gustavo->beRepaired(50);
    gustavo->meleeAttack("Scuko");
    gustavo->rangedAttack("Alesha");
    gustavo->coltAttack("Egor");
    gustavo->rockAttack("Petia");
    gustavo->gunAttack("Gosha");
    gustavo->boboAttack("Kolia");
    gustavo->ticklesAttack("Ebobo");
    for (int i = 0; i < 6; i++)
        gustavo->challengeNewcomer();
    delete gustavo;

    return (0);
}