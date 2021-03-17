#ifndef OPENEDSTATE_H_
#define OPENEDSTATE_H_

#include "DoorState.h"

class Door;

class OpenedState : public DoorState {
public:
	OpenedState();
	virtual ~OpenedState();

	virtual void close(Door* door);
};

#endif /* PAUSEDSTATE_H_ */
