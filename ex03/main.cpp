/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:50:42 by ibettenc          #+#    #+#             */
/*   Updated: 2026/05/24 16:33:51 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB fanta("Fanta");
        fanta.attack();
        fanta.setWeapon(club);
        fanta.attack();
        club.setType("some other type of club");
        fanta.attack();
    }
    return 0;
}
