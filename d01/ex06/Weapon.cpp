/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:05:41 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 14:45:01 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) {
    this->_type = type;
}

Weapon::~Weapon(void) {
    return ;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string& Weapon::getType()
{
    return (this->_type);
}