#include "Boxeur.h"
#include <iostream>
#define TRACE


using namespace std;
using namespace Combat;


Combat::Boxeur::Boxeur(string nom, double poids)
{
	this->nom = nom;
	this->poids = poids;
#ifdef TRACE
	cout << "Boxeur (" << this->nom << ") de " << this << endl;
#endif


}

//Constructeur
Combat::Boxeur::Boxeur()
{


}
// destructeur
Combat::Boxeur::~Boxeur()
{
#ifdef TRACE
	cout << "Destruction de (" << this->nom << ") a " << this << endl;
#endif
}
