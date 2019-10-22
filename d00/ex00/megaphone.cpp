/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:51:14 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/20 16:02:31 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int lght;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    
    for (int i = 1; i < argc; i++)
    {
        lght = strlen(argv[i]);
        for (int z = 0; z < lght; z++)
            argv[i][z] = toupper(argv[i][z]);
        std::cout << argv[i];
    }
    std::cout << std::endl;
    return (0);
}