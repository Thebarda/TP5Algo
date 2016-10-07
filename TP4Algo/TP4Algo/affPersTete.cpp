#include "main.h"

Elt affPersTete(FileAttente * file) {
	if ((*file).tete != NULL) {
		return (*(*file).tete).nom;
	}
	else {
		Elt erreur = "erreur";
		return erreur;
	}
}
