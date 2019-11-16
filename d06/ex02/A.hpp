/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:19:00 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/30 20:28:11 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
 #define A_HPP
 
 #include <iostream>
 #include <string>
 #include "Base.hpp"

 class A : public Base {
 
 public:
	 A(void);
	 A(A const &src);
 
	 virtual ~A(void);
	 A &operator=(A const &);
 };
 
 #endif