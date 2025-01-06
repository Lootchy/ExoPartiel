#pragma once
#include "State.h"

class Gun {
public:
	enum class GunState {
		Idle,
		Shoot,
		Reload,
		StateCount
	};

	static const int STATE_COUNT = (int)GunState::StateCount;

private:
	State* mStates[STATE_COUNT]; 
	State* mCurrentState = nullptr;
	GunState mGunState = GunState::Idle;

	int mTransition[STATE_COUNT][STATE_COUNT] = {
		// Idle, Shoot, Reload
		{0, 1, 1}, // Idle
		{1, 0, 1}, // Shoot
		{1, 1, 0}  // Reload
	};

public:
	bool TransitionTo(GunState to);
	Gun();
};
