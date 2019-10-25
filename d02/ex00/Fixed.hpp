/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:28:01 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 10:21:51 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed & operator=(Fixed const & rhs);
	private:
		int _fixed;
		static const int fract = 8;
};

#endif