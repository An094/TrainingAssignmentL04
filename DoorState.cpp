#include "DoorState.h"
#include <iostream>

DoorState::DoorState()
{

}

DoorState::~DoorState() {
}

void DoorState::unlock(Door* door)
{
	std::cout << "Unlock in DoorState";
}

void DoorState::lock(Door* door)
{
	std::cout << "Lock in DoorState";
}

void DoorState::open(Door* door)
{
	std::cout << "Open in DoorState";
}

void DoorState::close(Door* door)
{
	std::cout << "Close in DoorState";
}