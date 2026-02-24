/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:50:47 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 16:50:48 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string n, Weapon& w) : name (n), weapon(w)
{
}

void HumanA::attack()
{
    cout << name << " attacks with their " << weapon.getType() << endl;
}
