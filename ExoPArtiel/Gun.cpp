#include <iostream>
#include "Gun.h"
#include "IdleState.h"
#include "ShootState.h"

Gun::Gun() {
	mStates[(int)GunState::Idle] = new IdleState(this);
	mStates[(int)GunState::Shoot] = new ShootState(this);

	mGunState = GunState::Idle;
	mCurrentState = mStates[(int)mGunState];
	mCurrentState->Start();
}



bool Gun::TransitionTo(GunState to) {
	if (mTransition[(int)mGunState][(int)to] == 0) {
		std::cout << "Error: Transition not allowed" << std::endl;
		return false;
	}
	mCurrentState->End();
	mGunState = to;
	mCurrentState = mStates[(int)mGunState];
	mCurrentState->Start(); 
	return true;
}
