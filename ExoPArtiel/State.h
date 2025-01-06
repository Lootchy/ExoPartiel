#pragma once

class Gun;

class State {
protected:
	Gun* mGun;
public:
	State(Gun* gun)
	{
		mGun = gun;
	}
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void End() = 0;
	virtual ~State() = default;
};
