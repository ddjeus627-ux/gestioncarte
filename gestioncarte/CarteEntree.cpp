#include "CarteEntree.h"

int CarteEntree::getUnites()
{
	return unites;
	
	
}

void CarteEntree::debiterUnites(int n)
{
	unites = unites - n;
}
	
