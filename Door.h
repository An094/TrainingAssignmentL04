#ifndef DOOR_H_
#define DOOR_H_

class DoorState;

class Door {
public:
	Door();
	virtual ~Door();

	void unlock();
	void lock();
	void close();
	void open();

	void SetState(DoorState* state);

private:
	DoorState* m_pState;
};

#endif /* MUSICPLAYER_H_ */
