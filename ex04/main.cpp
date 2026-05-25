/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 16:43:40 by ivan              #+#    #+#             */
/*   Updated: 2026/05/24 16:43:40 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// find() : trouve une position x
// erase() : supprime le caractere a la position x
// insert() : ecrit un caractere a la position x
// lenght() : longueur d'une string

// npos : no position -> valeur que find() return quand trouve pas ce qu'on cherche

// Remplacer toutes les caracteres de s1 par s2 dans content
static void replaceAll(string& content, const string& s1, const string& s2)
{
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length(); // avancer apres le mot inséré pour éviter boucle infinie
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>" << endl;
        return 1;
    }

    string filename = av[1];
    string s1       = av[2];
    string s2       = av[3];

    // Vérif : s1 doit pas etre vide
    if (s1.empty())
    {
        cerr << "Erreur : s1 ne peut pas être vide" << endl;
        return 1;
    }

    // Lecture du fichier source + verif si on arrive a l'ouvrir
    ifstream inFile(filename.c_str());
    if (!inFile.is_open())
    {
        cerr << "Erreur : impossible d'ouvrir le fichier '" << filename << "'." << endl;
        return 1;
    }

    // Lire tout le contenu d'un coup
    string content;
    string line;
    while (getline(inFile, line))
    content += line + "\n";
    inFile.close();

    // Remplacement
    replaceAll(content, s1, s2);

    // Écriture dans filename.replace + verif d'ouverture
    string outName = filename + ".replace";
    ofstream outFile(outName.c_str());
    if (!outFile.is_open())
    {
        cerr << "Erreur : impossible de créer '" << outName << "'." << endl;
        return 1;
    }
    outFile << content;
    outFile.close();

    cout << "Fichier créé : " << outName << endl;
    return 0;
}