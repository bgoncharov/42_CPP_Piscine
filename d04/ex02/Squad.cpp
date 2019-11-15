/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:04:52 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/26 22:11:01 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _count(0), _head(NULL) {
	return ;
}

Squad::Squad(Squad const &src) {
	*this = src;
	return;
}

Squad::~Squad(void) {
	t_node *next;
	t_node *curr;

	if (this->_count <= 0)
		return ;
	if (this->_count == 1) {
		delete this->_head->m;
		delete this->_head;
		this->_head = NULL;
		return ;
	}
	curr = this->_head;
	next = curr->next;
	for (int i = 0; i < this->_count; i++) {
		delete curr->m;
		delete curr;
		curr = next;
		if (next->next)
			next = next->next;
	}
	return ;
}

Squad &Squad::operator=(Squad const &rhs) {
	t_node	*run;

	this->_count = rhs.getCount();
	if (this->_count == 0)
	{
		this->_head = NULL;
		return *this;
	}
	this->_head = Squad::new_node(rhs.getUnit(0)->clone());
	run = this->_head;
	for (int i = 1; i < this->_count ; i++) {
		run->next = Squad::new_node(rhs.getUnit(i)->clone());
		run = run->next;
	}
	return *this;
}

int Squad::getCount(void) const {
	return this->_count;
}

ISpaceMarine *Squad::getUnit(int n) const {
	t_node *tmp;

	if (n >= this->_count || n < 0)
		return NULL;
	tmp = this->_head;
	for (int i = 0; i < n; i++) {
		tmp = tmp->next;
	}
	return tmp->m;
}


int Squad::push(ISpaceMarine *marine) {
	t_node *tmp;

	if (!this->_head) {
		this->_count = 1;
		this->_head = Squad::new_node(marine);
	} else {
		tmp = this->_head;
		while (tmp) {
			if (tmp->m == marine)
				return this->_count;
			tmp = tmp->next;
		}
		tmp = this->_head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = Squad::new_node(marine);
		this->_count += 1;
	}
	return this->_count;
}

t_node *Squad::new_node(ISpaceMarine *val) {
	t_node *node;
	
	node = new t_node;
	node->m = val;
	node->next = NULL;
	return node;
}