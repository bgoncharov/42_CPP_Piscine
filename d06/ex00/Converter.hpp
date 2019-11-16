/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:37:32 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/30 16:39:05 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <string>

class Converter {

	public:
		Converter(std::string str);
		Converter(Converter const &src);

		virtual ~Converter(void);

		Converter &operator=(Converter const &rhs);

		std::string	getStr(void) const;
		void printConversions(void) const;

	protected:
		Converter(void);

	private:
		std::string _str;
};

#endif
