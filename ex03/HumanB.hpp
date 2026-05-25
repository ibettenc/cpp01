/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:50:43 by ibettenc          #+#    #+#             */
/*   Updated: 2026/05/24 16:29:45 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon* weapon;
        string name;

    public:
        void attack();
        HumanB(string name);
        void setWeapon(Weapon& w);
};
