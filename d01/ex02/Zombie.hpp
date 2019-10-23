/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:26:56 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 16:15:54 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);

		std::string get_name(void) const; 
		std::string get_type(void) const;

		void set_name(std::string name);
		void set_type(std::string type);
		void announce(void) const;
	
	private:
		std::string _name;
		std::string _type;
};

# endif