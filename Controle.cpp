// Controle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Boxeur.h";
#include "Combat.h";
#include <Windows.h>



using namespace std;
using namespace Combat;

int main()
{
	//  Permet l'affichage tout les caractere
	SetConsoleOutputCP(CP_UTF8);
	cout << "---> DEBUT" << endl << endl;

	Combats combat1("1/8");
	cout << "LE PRIEMER COMBAT : " << combat1.GetNiveau() << endl << endl;


	Boxeur boxeur1("Box_1",75);
	cout << "Nom premier Boxeur : " << boxeur1.GetNom() <<" et il fait " << boxeur1.GetPoids() << " KG" << endl;
	cout << "Adresse du Box_1 : " << &boxeur1 << endl << endl;

	Boxeur* boxeur2;
	boxeur2 = new Boxeur("Box_2",78);
	cout << "Nom dexieme Boxeur : " << boxeur2->GetNom() << " et il fait " << boxeur2->GetPoids() << " KG" << endl;
	cout << "Adresse du Box_2 : " << &boxeur2 << endl;



	Combats combat_1("Combat1_N1_/8");
	cout << "Le combat est au niveau " << combat_1.GetNiveau() << endl;


	// Association entre combat_1 et boxeur_1
	combat_1.setCoinBleu(&boxeur1);
	cout << "Le coin bleu est occupé par	 " << combat_1.getCoinBleu()->GetNom() << endl;


	// Association entre combat_1 et boxeur_2
	combat_1.setCoinRouge(boxeur2);
	cout << "Coin rouge occupé par		" << combat_1.getCoinRouge()->GetNom() << endl;
	
	
	delete boxeur2;

	cout << "---> FIN" << endl << endl;
	


}