/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:55:21 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/30 17:11:55 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ctime>


struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void	*serialize(void) {
	int i;
	char *data = new char[21];
	char posi[] = {"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	srand(clock());
	i = -1;
	while (++i < 20)
		data[i] = posi[rand() % 62];

	//Testing
	i = -1;
	while (++i < 8)
		std::cout << data[i];
	std::cout << *(reinterpret_cast<int*>(&data[8]));
	i = 11;
	while (++i < 20)
		std::cout << data[i];
	std::cout << std::endl;
	return (reinterpret_cast<void*>(data));
}

Data *deserialize(void *raw) {
	char *data = reinterpret_cast<char*>(raw);
	Data *res = new Data;
	int i = -1;

	while (++i < 8)
		res->s1 += data[i];
	res->n = *(reinterpret_cast<int*>(&data[8]));
	i = 11;
	while (++i < 20)
		res->s2 += data[i];
	return res;
}

int main(void) {
	void *s;
	Data *d;
	
	s = serialize();
	d = deserialize(s);
	std::cout << d->s1 << d->n << d->s2 << std::endl;
}