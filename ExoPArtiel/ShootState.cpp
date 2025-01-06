#include "ShootState.h"
#include "Gun.h"
#include <iostream>


void ShootState::Start() {
	std::cout << "Initialize on Shoot" << std::endl;
}

void ShootState::Update() {
	std::cout << "Update on Shoot" << std::endl;
}

void ShootState::End() {
	std::cout << "End of Shoot" << std::endl;
}