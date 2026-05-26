/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:27:01 by ivan              #+#    #+#             */
/*   Updated: 2026/05/26 17:14:33 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    cout << "=== Niveaux valides ===" << endl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    
    cout << "=== Niveaux invalides ===" << endl;
    harl.complain("");              // string vide
    harl.complain("debug");        // minuscules
    harl.complain("Debug");        // mixed case
    harl.complain("  DEBUG");      // espace avant
    harl.complain("DEBUG  ");      // espace après
    harl.complain("DEBG");         // typo
    harl.complain("CRITICAL");     // niveau qui n'existe pas
    harl.complain("1234");         // chiffres
    harl.complain("!@#$");         // caractères spéciaux

    return 0;
}