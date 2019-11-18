/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:15:37 by bogoncha          #+#    #+#             */
/*   Updated: 2019/11/01 20:16:35 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <string>
# include <list>
# include <stack>


template <typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack<T>(void) {
		return ;
	}

	MutantStack(MutantStack const &src) {
		*this = src;
		return;
	}

	virtual ~MutantStack<T>(void) {
		return ;
	}

	MutantStack	&operator=(MutantStack const &) {
		return *this;
	}

	T top(void) {
		return _stack.front();
	}

	T size(void) {
		return _stack.size();
	}

	typedef std::list<int>::iterator iterator;

	iterator begin() {
		return _stack.begin();
	}

	iterator end() {
		return _stack.end();
	}

	void push(T value) {
		_stack.push_front(value);
	}
	
	void pop(void) {
		_stack.pop_front();
	}

private:
	std::list<T> _stack;
};

#endif
