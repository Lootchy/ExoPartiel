#pragma once
#include "State.h"

class Gun;

class ShootState : public State {

public:
    ShootState(Gun* gun) : State(gun) {}
    void Start() override;
    void Update() override;
    void End() override;
};

