#include "IdleState.h"
#include "Gun.h"
#include <iostream>


void IdleState::Start() {
	std::cout << "Initialize on Idle" << std::endl;
}

void IdleState::Update() {
	std::cout << "Update on Idle" << std::endl;
}

void IdleState::End() {
	std::cout << "End of Idle" << std::endl;
}