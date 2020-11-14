#pragma once
#include <iostream>
using namespace std;

class MobTemplate
{
public:
	void TemplateMethod() const 
	{
		this->MobMobility();
		this->MobEquipment();
		this->MobInventory();
		this->MobBehavior();
		this->MobHability();
		this->ShowDetails();
	}

protected:
	void MobMobility() const
	{
		cout << "I can move in diferent directions" << endl;
	}

	virtual void ShowDetails() const = 0;
	virtual void MobEquipment() const = 0;
	virtual void MobInventory() const {};
	virtual void MobBehavior() const {}
	virtual void MobHability() const {}


};