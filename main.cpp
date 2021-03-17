#include"Door.h"
int main() {
	Door* door = new Door();
	door->close();
	door->open();
	door->close();
	door->lock();
	door->unlock();
}