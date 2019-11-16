/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:19:10 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/30 20:28:09 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void) {
	return ;
}

B::B(B const &src) {
	*this = src;
	return ;
}

B::~B(void) {
	return ;
}

B &B::operator=(B const &) {
	return *this;
}