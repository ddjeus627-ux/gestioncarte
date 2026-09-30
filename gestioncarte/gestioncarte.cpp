// gestioncarte.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "CarteEntree.h"
#include <string>

int main()
{
	CarteEntree carte;
	std::string reponse;
	int nombre = 0;
	std::cout << "Gestion de la carte d'entrees\n";
	std::cout << "la carte contient : " << carte.getUnites() << std::endl;
	std::cout << "voulez vous utiliser l'unite ? (oui/non) ; " << std::endl;
	std::cin >> reponse;
	if (reponse == "oui")
	{
		std::cout << "combien d'unites voulez-vous utiliser ? ";
		std::cin >> nombre;
		carte.debiterUnites(nombre);

	}
	std::cout << "La carte contient :" << carte.getUnites() << std::endl;
}