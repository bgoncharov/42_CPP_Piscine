/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:57:52 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/29 21:02:40 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

public:
	/* Constructors */
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);

	/* Destructor */
	virtual ~ShrubberyCreationForm(void);

	/* Operators */
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

	/* Other */
	virtual void	execute(Bureaucrat const & executor) const;
	
protected:
	ShrubberyCreationForm(void);

private:
	static std::string	_trees;
};

#endif