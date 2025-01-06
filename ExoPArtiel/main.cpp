#include <iostream>
#include <list>
#include <vector>
#include <set>
#include "Tools.h"
#include "Gun.h"

int main() {
	std::list<int> intList = { 1, 2, 3, 4, 5 };
	std::vector<int> intVector = { 1, 2, 3, 4, 5 };
	std::set<int> intMap = { 1, 2, 3, 4, 5 };
	Gun gun;
	gun.TransitionTo(Gun::GunState::Shoot);

	/*Tools::EraseList(intList, 4);
	Tools::EraseVector(intVector, 10);

	Tools::AddList(intList, 1, 50);
	Tools::AddVector(intVector, 1, 50);
	Tools::AddVector(intVector, 1, 780);

	Tools::FindInVector(intVector, 4);

	Tools::DisplayList(intList);
	Tools::DisplayVector(intVector);*/
}