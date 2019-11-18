/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 11:11:54 by bogoncha          #+#    #+#             */
/*   Updated: 2019/11/01 11:48:43 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <exception>

class Span {

public:
	class OffLimit : public std::exception {
	
	public:
		/* Constructors */
		OffLimit(void);
		OffLimit(OffLimit const &);
		/* Destructor */
		virtual ~OffLimit(void) throw();
		/* Operators */
		OffLimit	&operator=(OffLimit const &);
		/* Override */
		virtual const char *what(void) const throw();
	};

	class NotEnoughEntries : public std::exception {
	
	public:
		/* Constructors */
		NotEnoughEntries(void);
		NotEnoughEntries(NotEnoughEntries const &);
		/* Destructor */
		virtual ~NotEnoughEntries(void) throw();
		/* Operators */
		NotEnoughEntries	&operator=(NotEnoughEntries const &);
		/* Override */
		virtual const char *what(void) const throw();
	};
	
	/* Constructors */
	Span(Span const &src);
	Span(unsigned int n);

	/* Destructor */
	virtual ~Span(void);

	/* Operators */
	Span	&operator=(Span const &rhs);

	/* Getters and setters */
	std::vector<int>	getArr(void) const;
	void	setArr(std::vector<int> arr);
	unsigned int	getN(void) const;
	void	setN(unsigned int n);

	/* Other */
	void	addNumber(int val);
	int		shortestSpan(void);
	int		longestSpan(void);

protected:
	Span(void);

private:
	std::vector<int>	_arr;
	unsigned int		_n;
};

#endif