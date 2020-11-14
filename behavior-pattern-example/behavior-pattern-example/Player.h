#pragma once
#include "MobTemplate.h"
class Player : public MobTemplate
{
public:
	void MobEquipment() const override
	{
		cout << "Player equiped with a legendary sword and a shield to fight evil" << endl;
	}

	void MobInventory() const override
	{
		cout << "Apples: x86 - Healing Potions:  x5 - Something else = ???" << endl;
	}


	void MobHability() const override
	{
		cout << " Special Hability: End Game \n Description: Ends the f game ..... ???? \n";
	}

	void ShowDetails() const override
	{
		cout << "This Mob is the Player" << endl;
		MobMobility();
		MobEquipment();
		MobHability();
	}
};

