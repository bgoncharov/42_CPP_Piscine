/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:06:47 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/26 22:08:05 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	*this = src;
	return;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &) {
	return *this;
}

void TacticalMarine::battleCry(void) const {
	std::cout << "For the holy PLOT !" << std::endl;
}
void TacticalMarine::rangedAttack(void) const {
	std::cout << "* attacks with bolter *" << std::endl;
}
void TacticalMarine::meleeAttack(void) const {
	std::cout << "* attacks with chainsword *" << std::endl;
}

ISpaceMarine *TacticalMarine::clone(void) const {
	ISpaceMarine *tmp = new TacticalMarine();
	return tmp;
}