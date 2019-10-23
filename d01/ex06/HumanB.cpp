/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:22:16 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 14:42:31 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

HumanB::~HumanB(void)
{
    return ;
}

void HumanB::setWeapon(Weapon & weapon)
{
    _weapon = &weapon;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attack with " << _weapon->getType() << std::endl;
}