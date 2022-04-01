#include "function-4-1.h"
int room_count; // current count of people in the room
int capacity; // maximum capacity of the room

RoomCounter::RoomCounter(int cap) {
	capacity = cap;
	room_count = 0;
} // initialises capacity to cap and room_count to zero
void RoomCounter::enter() {
	if (room_count < capacity) {
		room_count++;
	}
}  // person tries to enter the room increments room_count by one if room_count < capacity
void RoomCounter::exit() {
	if (room_count > 0) {
		room_count--;
	}
}   // person exits room - decrements room_count by one if room has more than zero people.
int RoomCounter::get_count() {
	return room_count;
} // returns the current count of people in the room. 