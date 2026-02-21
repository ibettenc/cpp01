/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 15:40:13 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 16:32:16 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(3, "Bob");
    
    for (int i = 0; i < 3; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}