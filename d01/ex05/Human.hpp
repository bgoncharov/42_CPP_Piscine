/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:20:13 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/22 14:34:43 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human {

	public:
		Human(void);
		~Human(void);
		Brain const &getBrain (void);
		std::string identify(void) const;
	
	private:
		Brain const _brain;
};

#endif