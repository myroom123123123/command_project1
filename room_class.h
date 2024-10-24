#ifndef ROOM
#define ROOM

#include "lib.h"

enum RoomType
{
	STANDART,
	SUPERIOR,
	DELUXE,
	NO_DATA	
};

class Room
{
private:
	RoomType _type;
	int _number;
	bool _isFree;
	int _price;

public:

	//constructors
	Room() {
		_type = NO_DATA;
		_number = 0;
		_isFree = true;
		_price = 0;
	}

	Room(RoomType type) :Room() {
		_type = type;
	}

	Room(RoomType type, int number) :Room(type) {
		_number = number;
	}

	Room(RoomType type, int number, bool isFree) :Room(type, number) {
		_isFree = isFree;
	}

	Room(RoomType type, int number, bool isFree, int price) :Room(type, number, isFree) {
		_price = price;
	}
	
	//getters
	RoomType getType() const{
		return _type;
	}

	int getNumber() const{
		return _number;
	}

	bool getIsFree() const{
		return _isFree;
	}

	int getPrice() const{
		return _price;
	}

	//setters
	void setType(RoomType type) {
		_type = type;
	}

	void setNumber(int number) {
		_number = number;
	}

	void setIsFree(bool isFree) {
		_isFree = isFree;
	}

	void setPrice(int price) {
		_price = price;
	}

	//methods
	void print() {
		cout << "Room number: " << _number << endl;
		cout << "Room type: ";
		switch (_type)
		{
		case STANDART:
			cout << "Standart" << endl;
			break;
		case SUPERIOR:
			cout << "Superior" << endl;
			break;
		case DELUXE:
			cout << "Deluxe" << endl;
			break;
		default:
			cout << "No data" << endl;
			break;
		}
		cout << "Room price: " << _price << endl;
		cout << "Room is free: ";
		if (_isFree)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}

	//operators
	bool operator==(const Room& other) const {
		return _type == other.getType() &&
			_number == other.getNumber() &&
			_isFree == other.getIsFree() &&
			_price == other.getPrice();
	}

	bool operator!=(const Room& other) const {
		return !(*this == other);
	}
};

#endif // !ROOM

