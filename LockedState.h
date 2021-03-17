#ifndef LOCKEDSTATE_H_
#define LOCKEDSTATE_H_

#include "DoorState.h"

class Door;

class LockedState : public DoorState {
public:
	LockedState();
	virtual ~LockedState();

	virtual void unlock(Door* door);
};

#endif /* PAUSEDSTATE_H_ */
