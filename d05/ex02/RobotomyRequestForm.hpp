/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:58:30 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/29 20:58:59 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include <ctime>

class RobotomyRequestForm : public AForm {

public:
	/* Constructors */
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);

	/* Destructor */
	virtual ~RobotomyRequestForm(void);

	/* Operators */
	RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);

	/* Other */
	virtual void	execute(Bureaucrat const & executor) const;
	
protected:
	RobotomyRequestForm(void);

private:
};

#endif