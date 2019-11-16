/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:20:31 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/30 20:27:54 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void) {
	return ;
}

C::C(C const &src) {
	*this = src;
	return ;
}

C::~C(void) {
	return ;
}

C &C::operator=(C const &) {
	return *this;
}