/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 13:25:48 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 14:36:31 by ibettenc         ###   ########.fr       */
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
        Zombie(string n);
        ~Zombie();
        void announce();
        string get_name();
};

void randomChump(string name);
Zombie *newZombie(string name);

#endif