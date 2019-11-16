/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:19:35 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/30 20:28:01 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void) {
	return ;
}

Base::Base(Base const &src) {
	*this = src;
	return ;
}

Base::~Base(void) {
	return ;
}

Base &Base::operator=(Base const &) {
	
	return *this;
}