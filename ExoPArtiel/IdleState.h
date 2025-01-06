#pragma once
#include "State.h"

class Gun;

class IdleState : public State {

public:
    IdleState(Gun* gun) : State(gun) {}
    void Start() override;
    void Update() override;
    void End() override;
};
