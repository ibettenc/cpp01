/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl_2.0.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:22:58 by ivan              #+#    #+#             */
/*   Updated: 2026/05/25 16:19:21 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#using namespace std;

std;

class Harl
{
    private :
        void debug();
        void info();
        void warning();
        void error();
        
    public :
        void complain(string level);
}