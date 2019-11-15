/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 20:46:54 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/26 22:11:54 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon {

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &src);

	virtual ~AWeapon(void);

	AWeapon	&operator=(AWeapon const &rhs);

	std::string virtual getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;

	virtual void attack(void) const = 0;

protected:
	AWeapon(void);
	std::string	_name;
	int _APCost;
	int _damage;

};

#endif