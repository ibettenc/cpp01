/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:50:38 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 16:50:39 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string type) : type(type)
{
}

const string& Weapon::getType()
{
    return this->type;
}
void Weapon::setType(string type)
{
    this->type = type;
}
