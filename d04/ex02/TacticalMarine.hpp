/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:07:00 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/26 22:07:39 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP
#define TACTICAL_MARINE_HPP

#include <iostream>
#include <string>

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:
	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &src);

	virtual ~TacticalMarine(void);

	TacticalMarine &operator=(TacticalMarine const &);

	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;
	ISpaceMarine *clone(void) const;
};

#endif