/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:44:24 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 15:51:47 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return ;
}

Zombie::~Zombie(void)
{
    return ;
}

std::string Zombie::get_name(void) const
{
    return this->_name;
}

std::string Zombie::get_type(void) const
{
    return this->_type;
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

void Zombie::set_type(std::string type)
{
    this->_name = type;
}

void Zombie::announce(void) const {
    std::cout << "<" << this->get_name() << " (" << this->get_type() << ")> Braiiiiiiinnnssss..." << std::endl;
}