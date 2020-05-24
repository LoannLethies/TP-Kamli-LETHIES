#include "controler_filtre.h"

void Controler_filtre::filtre(int choice)
{
	if (choice == 1)
		filtre_median();
	if (choice == 2)
		filtre_gaussien();
	if (choice == 3)
		gradient();
	if (choice == 4)
		dilatation();
	if (choice == 5)
		erosion();
	if (choice == 6)
		detecteur_contour();
	if (choice == 7)
		seuillage();
	if (choice == 8)
		segmentation();
}
