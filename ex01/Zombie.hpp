/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 13:25:48 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 16:34:29 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <memory>
using namespace std;

class Zombie
{
    private:
        string name;

    public:
        Zombie();
        ~Zombie();
        void announce();
        void setName(string n);
        string get_name();
};

Zombie* zombieHorde(int N, string name);


#endif