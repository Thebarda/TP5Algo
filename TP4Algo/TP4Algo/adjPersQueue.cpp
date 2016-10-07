#include "main.h"


void ajoutQueue(FileAttente *file)
{
	void creerElem(maillon *maill);
	maillon *tmp, *tmp2;
	tmp = (*file).queue;
	tmp2 = (*file).tete;
	maillon *maill = new maillon();
	creerElem(maill);

	if ((*file).tete == NULL)
	{
		(*file).queue = maill;
		(*file).tete = maill;

	}
	else
	{
		(*tmp).suivant = maill;
		(*file).queue = maill;
	}

}

void creerElem(maillon *maill)
{
	Elt tmp = (Elt)malloc(sizeof(Elt));
	cout << "Nom : " << endl;
	cin >> tmp;
	(*maill).nom = tmp;
	(*maill).suivant = NULL;

}