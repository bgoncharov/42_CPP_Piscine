/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:05:57 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/26 22:10:05 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include <string>

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

typedef struct s_node {
	ISpaceMarine *m;
	struct s_node *next;
} t_node;

class Squad : public ISquad {
public:
	Squad(void);
	Squad(Squad const &src);

	virtual ~Squad(void);

	Squad &operator=(Squad const &rhs);

	int getCount(void) const;
	ISpaceMarine *getUnit(int n) const;

	int push(ISpaceMarine *marine);

protected:
	static t_node *new_node(ISpaceMarine *val);

	int _count;
	t_node *_head;

};

#endif