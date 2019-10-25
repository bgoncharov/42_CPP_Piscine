/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:06:51 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 14:59:41 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap{

public:
	SuperTrap(SuperTrap const &src);
	SuperTrap(std::string name);
	~SuperTrap(void);

	SuperTrap &operator=(SuperTrap const &rhs);

private:
	SuperTrap(void);
	
};

#endif