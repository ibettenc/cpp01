/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:50:42 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 16:50:43 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon sword("sword");
    Weapon gun("gun");
    HumanA Bob("Bob", sword);
    HumanB Fanta("Fanta", gun);

    Bob.attack();
    Fanta.attack();

    return 0;
}
