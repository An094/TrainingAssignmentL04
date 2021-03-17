#include "OpenedState.h"
#include "Door.h"
#include "ClosedState.h"
#include<iostream>
OpenedState::OpenedState()
{
}

OpenedState::~OpenedState() {
}

void OpenedState::close(Door* door)
{
	door->SetState(new ClosedState());
	std::cout << "State change from Opened to Closed\n";
}

