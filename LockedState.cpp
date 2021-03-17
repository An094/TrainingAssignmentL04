#include "LockedState.h"
#include "Door.h"
#include "OpenedState.h"
#include<iostream>
LockedState::LockedState()
{
}

LockedState::~LockedState() {
}

void LockedState::unlock(Door* door)
{
	door->SetState(new OpenedState());
	std::cout << "State change from Locked to Closed\n";
}

