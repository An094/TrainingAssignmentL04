#ifndef CLOSEDSTATE_H_
#define CLOSEDSTATE_H_

#include "DoorState.h"

class Door;

class ClosedState : public DoorState {
public:
	ClosedState();
	virtual ~ClosedState();

	virtual void lock(Door* door);
	virtual void open(Door* door);
};

#endif /* PAUSEDSTATE_H_ */
