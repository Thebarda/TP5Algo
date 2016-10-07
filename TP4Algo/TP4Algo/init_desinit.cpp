#include "main.h"

void init(FileAttente * file) {
	(*file).queue = NULL;
	(*file).tete = NULL;
}

void desinit(FileAttente * file) {
	delete (*file).tete;
	delete (*file).queue;
	(*file).queue = NULL;
	(*file).tete = NULL;
}