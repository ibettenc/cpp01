/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:22:56 by ivan              #+#    #+#             */
/*   Updated: 2026/05/26 16:48:20 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

///////////////// UTILISATION D'UN POINTEUR SUR FONCTION ///////////////////
// void direBonjour() 
// {
//     cout << "bonjour" << endl;
// }

// int main()
// {
//     void (*ptr)() = &direBonjour;  // ptr pointe vers direBonjour
//     ptr();                          // appelle direBonjour
// }
//-------------------------------------------------------------------
/////////////////// UTILISATION D'UNE FONCTION DE CLASSE ///////////////////
// class Harl 
// {
//     public:
//         void debug() { cout << "debug..." << endl; }
// };

// int main()
// {
//     Harl h;
//     h.debug();  // normal
// }
//-------------------------------------------------------------------
////////// UTILISATION D'UN POINTEUR SUR UNE FONCTION DE CLASSE /////////////

void Harl::debug()
{
    cout << "[ DEBUG ]" << endl;
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << endl;
}

void Harl::info(void)
{
    cout << "[ INFO ]" << endl;
    cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void Harl::warning(void)
{
    cout << "[ WARNING ]" << endl;
    cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << endl;
}

void Harl::error(void)
{
    cout << "[ ERROR ]" << endl;
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level) 
{
    // Tableau des niveaux
    string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    // Tableau des pointeurs vers fonctions membres (même ordre !)
    void (Harl::*functions[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };

    // Chercher le niveau et appeler la bonne fonction
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return ;
        }
    }    
    // Si niveau inconnu :
    cout << "[ Unknown level ]" << endl;
}
