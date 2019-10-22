/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:51:16 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 15:03:50 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color) {
    this->_name = name;
    this->_color = color;
    std::cout << "Pony " << this->_name << " which is " << this->_color << " created" << std::endl;
};

Pony::~Pony(void) {
    std::cout << "Pony " << this->_name << " dead" << std::endl;
    return ;
};