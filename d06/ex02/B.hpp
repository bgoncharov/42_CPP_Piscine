/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:19:22 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/30 20:28:05 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP

#include <iostream>
#include <string>
#include "Base.hpp"

class B : public Base{

public:
	B(void);
	B(B const &src);

	virtual ~B(void);

	B &operator=(B const &);	
};

#endif