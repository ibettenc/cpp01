/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:22:58 by ivan              #+#    #+#             */
/*   Updated: 2026/05/26 16:45:09 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Harl
{
    private :
        void debug();
        void info();
        void warning();
        void error();
        
    public :
        void complain(string level);
};
