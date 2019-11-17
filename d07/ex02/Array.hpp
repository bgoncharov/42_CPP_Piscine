/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 18:47:36 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/31 18:48:22 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template<typename T>
class Array {
	public:
		Array<T>(void) : _arr(NULL), _len(0) {
			return ;
		}

		Array<T>(unsigned int n) : _len(n) {
			this->_arr = new T[n];
			return ;
		}

		Array<T>(Array const &src) {
			*this = src;
			return ;		
		}

		T &operator[](unsigned int n) const {
			if (n >= this->_len)
				throw std::exception();
			return this->_arr[n];
		}

		Array<T> &operator=(Array const &rhs) {
			this->_len = rhs.size();
			this->_arr = new T[this->_len];
			for (unsigned int i = 0; i < this->_len; i++) {
				this->_arr[i] = rhs[i];
			}
			return *this;
		}

		~Array<T>(void) {
			return ;
		}


		unsigned int size(void) const {
			return this->_len;
		}
		
	private:
		T *_arr;
		unsigned int _len;
};

#endif