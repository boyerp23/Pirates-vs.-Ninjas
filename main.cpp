/*File Creator: Paul Boyer
contact: pauboyer@uat.edu
CSC275 wk 1*/

#include <iostream>
#include <string>
#include "Character.h"
#include "GameStructure.h"
#include "gameLoop.h" //did not work as planned

using namespace std;

int main()
{
	cout << "\t\t\t Welcome to Pirates VS. Ninjas \n\n";
	cout << "In this epic battle will stealth or brute force win? Which side will you choose the pirates or the ninjas?\n";
	cout << "Only one side can be victorious and you must choose.\n\n";
	system ("pause");
	gameLoop();
	
	return 0;
}
