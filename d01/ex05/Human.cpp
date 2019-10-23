/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:20:02 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/22 14:35:35 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
    return ;
}

Human::~Human(void) {
    return ;
}

Brain const &Human::getBrain(void) {
    return (this->_brain);
}

std::string Human::identify(void) const{
    return this->_brain.identify();
}