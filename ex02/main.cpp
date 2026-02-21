/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:37:57 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 16:47:35 by ibettenc         ###   ########.fr       */
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

    cout << &s << endl;
    cout << stringPTR << endl;
    cout << &stringREF << endl;

    cout << endl;

    cout << s << endl;
    cout << *stringPTR << endl;
    cout << stringREF << endl;
    
    return 0;
}