#pragma once
#include <string>
#include<iostream>
#include "Boxeur.h"
using namespace std;


namespace Combat
{
	class Combats
	{
	private:
		string niveau;
		Boxeur* coinBleu;
		Boxeur* coinRouge;
	public:
		// Mon constructeur, qui est initialise mon atribue � partir du parametre 
		Combats(string niveau);
		//le destructeur
		~Combats();
		//Methode pour recuperer le niveau 
		string GetNiveau() { return niveau; }
		//Pointeur sur le boxeur 
		Boxeur* getCoinBleu() { return coinBleu; }

		void setCoinBleu(Boxeur* NowCoinBleu)
		{
			coinBleu = NowCoinBleu;



			if (NowCoinBleu != coinRouge) {
				coinBleu = NowCoinBleu;
			}
			else {
				cout << "Ce boxeur est d�j� dans un combat, coin rouge" << endl;
			}
		}
		// Pointeur sur le boxeur
		Boxeur* getCoinRouge() { return coinRouge; }



		void setCoinRouge(Boxeur* nowCoinRouge)
		{
			coinRouge = nowCoinRouge;



			if (nowCoinRouge != coinBleu) {
				coinRouge = nowCoinRouge;
			}
			else {
				cout << "Ce boxeur combat d�j�!" << endl;
			}
			 // M�thode pour designer le vainqueur
            Boxeur* DesignerVainqueur(string couleurCoin);

            Boxeur* GetVainqueur();
		}
	};
}

	

