/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:32:50 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 21:33:07 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include <string>

#include "Enemy.hpp"

class RadScorpion : public Enemy {

public:
	RadScorpion(void);
	RadScorpion(RadScorpion const &src);

	virtual ~RadScorpion(void);

	RadScorpion	&operator=(RadScorpion const &rhs);


};

#endif