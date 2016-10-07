#include "main.h"

int calculerLongueurFile(FileAttente * file) {
	maillon * tete = (*file).tete;
	if (tete != NULL) {
		int nbElem = 0;
		maillon * current = (*file).tete;
		while ((*current).suivant != NULL) {
			nbElem++;
			current = (*current).suivant;
		}
		return nbElem+1;
	}
	else {
		return 0;
	}
}