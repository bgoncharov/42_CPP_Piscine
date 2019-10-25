/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 10:06:07 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/24 12:01:26 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
    
    public:
        Fixed(void);
        Fixed (int value);
        Fixed(float value);
        Fixed(Fixed const & src);
        ~Fixed(void);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        Fixed &operator=(Fixed const & rhs);
        bool operator<(Fixed const & rhs);
		bool operator>(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);

        Fixed operator+(Fixed const & rhs);
        Fixed operator-(Fixed const & rhs);
        Fixed operator*(Fixed const & rhs);
        Fixed operator/(Fixed const & rhs);

        Fixed &operator++();
        Fixed operator++(int value);
        Fixed &operator--();
        Fixed operator--(int value);

        static Fixed const &min(const Fixed &a, const Fixed &b);
        static Fixed const &max(const Fixed &a, const Fixed &b);
    
    private:
        int _fixed;
        static const int _bits;
};
std::ostream &operator << (std::ostream &os, const Fixed &rhs);

#endif