#pragma once
#include <string>
using namespace std;
namespace Combat {
	class Boxeur
	{
	private:
		string nom;
		double poids;
	public:
		string GetNom() { return nom; }
		double GetPoids() { return poids; }
		void SetPoids(double NewPoids) {this->poids = NewPoids; }
		
		// Mon constructeur qui prende deux parametre initialisé
		Boxeur(string nom, double poids);
		Boxeur();
		//le destructeur
		~Boxeur();
	};
}