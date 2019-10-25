/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:28:35 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/24 19:51:15 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(const int val);
	Fixed(const float val);
	~Fixed(void);

	Fixed &operator=(Fixed const &rhs);

	int getRawBits(void) const;

	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

private:
	int _val;
	static const int _nFractionalBits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif