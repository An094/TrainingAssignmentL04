#include "ClosedState.h"
#include "Door.h"
#include "LockedState.h"
#include "OpenedState.h"
#include<iostream>

ClosedState::ClosedState()
{
}

ClosedState::~ClosedState() {
}

void ClosedState::lock(Door* door)
{
	door->SetState(new LockedState());
	std::cout << "State change from Closed to Locked\n";
}
void ClosedState::open(Door* door)
{
	door->SetState(new OpenedState());
	std::cout << "State change from Closed to Opened\n";
}

