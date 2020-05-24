#ifndef CONTROLER_H
# define CONTROLER_H
#include <iostream>
#include "model_filtre.h"

class Controler_filtre : public Model_filtre
{
public:
	void filtre(int choice);
};
#endif