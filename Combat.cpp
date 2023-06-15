#include "Combat.h"
#include <iostream>
#define TRACE




//Constructeur
Combat::Combats::Combats(string niveau)
{
	this->niveau = niveau;

#ifdef TRACE
	cout << "Niveau :  (" << this->niveau << ") de " << this << endl;
#endif
}
//Constructeur  par default
Combat::Combats::~Combats()
{

#ifdef TRACE
	cout << "Destruction de niveau " << this->niveau << this << endl;
#endif
}
