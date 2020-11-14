#pragma once
#include "MobTemplate.h"
class GenericEnemy1 : public MobTemplate
{
public:
	void MobEquipment() const override
	{
		cout << "A wood maze and nothing else :c" << endl;
	}

	void MobBehavior() const override
	{
		cout << "Mob: GenericEnemy1 is driven by generic AI " << endl;
	}

	void ShowDetails() const override
	{
		cout << "This Mob is the genericenemy1" << endl;
		MobMobility();
		MobEquipment();
		MobBehavior();
	}

};

