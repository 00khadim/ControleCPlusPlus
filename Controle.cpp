// Controle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Boxeur.h";

using namespace std;
using namespace Combat;

int main()
{
	cout << "---> DEBUT" << endl << endl;
	Boxeur boxeur1("Box_1",75);
	cout << "Nom premier Boxeur : " << boxeur1.GetNom() <<" et il fait " << boxeur1.GetPoids() << " KG" << endl;
	cout << "Adresse du Box_1 : " << &boxeur1 << endl << endl;

	Boxeur* boxeur2;
	boxeur2 = new Boxeur("Box_2",78);
	cout << "Nom dexieme Boxeur : " << boxeur2->GetNom() << " et il fait " << boxeur2->GetPoids() << " KG" << endl;
	cout << "Adresse du Box_1 : " << &boxeur2 << endl;




}