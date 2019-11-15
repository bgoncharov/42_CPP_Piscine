/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:59:09 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/29 22:27:24 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);

	virtual ~PresidentialPardonForm(void);

	PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);
	
	virtual void	execute(Bureaucrat const & executor) const;
	
protected:
	PresidentialPardonForm(void);

private:
};

#endif