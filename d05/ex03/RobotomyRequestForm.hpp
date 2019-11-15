/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:58:30 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/29 22:27:02 by bogoncha         ###   ########.fr       */
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
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);

	virtual ~RobotomyRequestForm(void);

	RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);

	virtual void	execute(Bureaucrat const & executor) const;
	
protected:
	RobotomyRequestForm(void);

private:
};

#endif