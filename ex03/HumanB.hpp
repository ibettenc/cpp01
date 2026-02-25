/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:50:43 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 16:50:44 by ibettenc         ###   ########.fr       */
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
