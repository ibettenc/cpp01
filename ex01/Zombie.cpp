/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 13:23:22 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 16:06:58 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "";
}

void Zombie::setName(string n)
{
    name = n;
}

string Zombie::get_name()
{
    return name;
}

void Zombie::announce()
{
    cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::~Zombie()
{
    cout << get_name() << " has been deleted" << endl;
}
