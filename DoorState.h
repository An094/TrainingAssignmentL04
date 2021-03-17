#ifndef DOORSTATE_H_
#define DOORSTATE_H_

class Door;

class DoorState {
public:
	DoorState();
	virtual ~DoorState();

	virtual void unlock(Door* player);
	virtual void lock(Door* player);
	virtual void open(Door* player);
	virtual void close(Door* player);

};

#endif /* MUSICPLAYERSTATE_H_ */
