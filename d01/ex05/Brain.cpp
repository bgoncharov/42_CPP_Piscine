/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:59:36 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/22 14:39:45 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void) {
    return ;
}

Brain::~Brain(void) {
    return ;
}

std::string Brain::identify(void) const
{
    std::stringstream addr;
    std::string res;

    addr << this;
    res = addr.str();

    for (int i = 2; i < (int)res.length(); i++) {
        res[i] = std::toupper(res[i]);
    }
    return (res);
}