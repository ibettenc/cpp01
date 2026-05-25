/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 15:40:13 by ibettenc          #+#    #+#             */
/*   Updated: 2026/05/16 13:46:05 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int j = 3;
    
    Zombie *horde = zombieHorde(j, "Bob");
    
    for (int i = 0; i < j; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}