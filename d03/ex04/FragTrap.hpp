/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:06:51 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 14:58:44 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	virtual ~FragTrap(void);

	FragTrap &operator=(FragTrap const &rhs);
	
	void vaulthunter_dot_exe(std::string const & target);
	

protected:
	FragTrap(void);
	
	static int const _nAttacks;

};

#endif