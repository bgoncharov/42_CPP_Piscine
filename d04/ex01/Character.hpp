/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:33:39 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/26 22:12:15 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

public:
	Character(std::string const & name);
	Character(Character const &src);


	virtual ~Character(void);

	Character &operator=(Character const &rhs);

	int	getAP(void) const;
	void setAP(int ap);
	AWeapon	*getWeapon(void) const;
	void setWeapon(AWeapon *weapon);
	std::string	getName(void) const;
	void setName(std::string name);

	void recoverAP(void);
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

protected:
	Character(void);
	int _ap;
	AWeapon *_weapon;
	std::string _name;
};

std::ostream &operator<<(std::ostream &o, Character const &rhs);

#endif