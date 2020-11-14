#include "GenericEnemy1.h"
#include "Player.h"



int main()
{
	Player* player = new Player();
	player->ShowDetails();
	cout << endl;
	GenericEnemy1* Hilchurl = new GenericEnemy1();
	Hilchurl->ShowDetails();
}