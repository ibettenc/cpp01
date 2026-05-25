/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:37:57 by ibettenc          #+#    #+#             */
/*   Updated: 2026/05/16 13:49:59 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "HI THIS IS BRAIN";
    string *stringPTR = &s;
    string &stringREF = s;

    // je print leur adresse
    cout << &s << endl;
    cout << stringPTR << endl;
    cout << &stringREF << endl;

    cout << endl;

    // je print ce que leur adresse contient
    cout << s << endl;
    cout << *stringPTR << endl;
    cout << stringREF << endl;
    
    return 0;
}