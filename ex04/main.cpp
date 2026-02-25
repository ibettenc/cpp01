/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:50:41 by ibettenc          #+#    #+#             */
/*   Updated: 2026/02/21 16:50:42 by ibettenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        char *filename = av[1];
        char *s1 = av[2];
        char *s2 = av[3];

        // lecture dun fichier
        ifstream monFichier(filename);

        // 1. Créer l'objet et ouvrir le fichier en écriture
        ofstream monFichier("newfile.txt");

        // 2. Vérifier si le fichier est bien ouvert
        if (monFichier.is_open()) {
            // 3. Écrire dedans
            monFichier << s1;
            monFichier << s2;
            
            // 4. Fermer le fichier
            monFichier.close();
            cout << "Fichier écrit avec succès." << std::endl;
        }
        else 
        {
            cerr << "Erreur : impossible d'ouvrir le fichier." << std::endl;
        }
    }
    return 0;
}