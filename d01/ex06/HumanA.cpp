/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:38:57 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 14:42:05 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
    this->_name = name;
}

HumanA::~HumanA(void)
{
    return ;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " atack with " << _weapon.getType() << std::endl;
}