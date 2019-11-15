/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:03:24 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/26 22:04:03 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_HPP
#define ASSAULT_TERMINATOR_HPP

#include <iostream>
#include <string>

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:
	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const &src);

	virtual ~AssaultTerminator(void);

	AssaultTerminator &operator=(AssaultTerminator const &);

	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;
	ISpaceMarine *clone(void) const;	
};

#endif