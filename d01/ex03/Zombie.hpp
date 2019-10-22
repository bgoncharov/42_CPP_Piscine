/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:15:59 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 17:16:02 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

	public:
		Zombie(void);
		~Zombie(void);

		std::string get_name(void) const;
		std::string get_type(void) const;
		void set_name(std::string);
		void set_type(std::string);
		void announce(void) const;

	private:
		std::string _name;
		std::string _type;
};

#endif