#include "Door.h"

#include "LockedState.h"
#include "OpenedState.h"
#include "ClosedState.h"

#include <iostream>

Door::Door()
	: m_pState(new OpenedState()) {

}

Door::~Door() {
	delete m_pState;
}

void Door::unlock() {
	m_pState->unlock(this);
}

void Door::lock() {
	m_pState->lock(this);
}

void Door::open() {
	m_pState->open(this);
}
void Door::close() {
	m_pState->close(this);
}
void Door::SetState(DoorState* state)
{
	m_pState = state;
}
