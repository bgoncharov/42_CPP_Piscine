/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:31:40 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/26 22:13:05 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include <string>

#include "Enemy.hpp"

class SuperMutant : public Enemy {

public:
	SuperMutant(void);
	SuperMutant(SuperMutant const &src);

	virtual ~SuperMutant(void);

	SuperMutant	&operator=(SuperMutant const &rhs);

	void takeDamage(int damage);
};

#endif