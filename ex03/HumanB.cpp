/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:50:45 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 16:50:46 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string n) : name(n)
{
}

void HumanB::setWeapon(Weapon& w)
{
    weapon = &w;
}


void HumanB::attack()
{
    cout << name << " attacks with their " << weapon->getType() << endl;
}

