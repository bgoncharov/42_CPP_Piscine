/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:05:38 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/30 20:28:15 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void) {
	return ;
}

A::A(A const &src) {
	*this = src;
	return ;
}

A::~A(void) {
	return ;
}

A &A::operator=(A const &) {
	return *this;
}