/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 09:19:22 by bogoncha          #+#    #+#             */
/*   Updated: 2019/11/01 10:51:12 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm> 
#include <iostream> 
#include <vector>

template<typename T>
typename T::iterator	easyfind(T &cont, int val) {
	return (std::find(cont.begin(), cont.end(), val));
}