/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:26:21 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/24 19:30:07 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) 
{
    FragTrap *boris = new FragTrap("Boris");

    for (int i = 0; i < 4; i++)
        boris->takeDamage(35);
    for (int i = 0; i < 3; i++)
        boris->beRepaired(50);
    boris->meleeAttack("Eblan");
    boris->rangedAttack("Huilo");
    for (int i = 0; i< 6; i++)
        boris->vaulhunter_dot_exe("Scuko");
    delete boris;
    return (0);
}