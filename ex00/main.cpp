/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 13:23:33 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 14:48:43 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    randomChump("Bob");
    
    Zombie *heap_zombie = newZombie("Fanta");
    heap_zombie->announce();
    delete heap_zombie;
    
    
    return 0;
}