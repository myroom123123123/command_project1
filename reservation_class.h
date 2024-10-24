#ifndef RESERVATION
#define RESERVATION

#include "guest_class.h"
#include "room_class.h"

struct Date {//struct that contains date information
private:
	int _day;
	int _month;
	int _year;
public:
	//constructors
	Date() {
		_day = 1;
		_month = 1;
		_year = 2000;
	}
	Date(int day, int month, int year): Date(){
		try
		{
			if (day <= 0 || month <= 0 || year <= 0) {
				throw exception("Invalid date");
			}

			else {
				_day = day;
				_month = month;
				_year = year;
			}
		}
		catch (const exception& e)
		{
			cout << e.what() << endl;
		}
		
	}

	//getters
	int getDay() const{
		return _day;
	}
	int getMonth() const{
		return _month;
	}
	int getYear() const{
		return _year;
	}

	//operators
	bool operator>(Date date) {
		if (_year > date.getYear()) {
			return true;
		}
		else if (_year == date.getYear()) {
			if (_month > date.getMonth()) {
				return true;
			}
			else if (_month == date.getMonth()) {
				if (_day > date.getDay()) {
					return true;
				}
			}
		}
		return false;
	}

	bool operator==(const Date& date) const {
		return _day == date._day &&
			_month == date._month &&
			_year == date._year;
	}

	bool operator!=(const Date& date) const {
		return !(*this == date);
	}

	//method
	void print() const{// if-else for format 01.01.1900
		if (_day < 10) {
			cout << "0" << _day << ".";
		}
		else {
			cout << _day << ".";
		}

		if (_month < 10) {
			cout << "0" << _month << ".";
		}
		else {
			cout << _month << ".";
		}

		cout << _year << endl;
	}
};

class Reservation {
private:
	vector<Guest> _guests;
	Room _room;
	Date _checkIn;
	Date _checkOut;
	int _id_reservation;
public:
	//constructors
	Reservation() {
		_id_reservation = 0;
	}
	Reservation(vector<Guest> guests) :Reservation() {
		_guests = guests;
	}
	Reservation(vector<Guest> guests, Room room) :Reservation(guests) {
		_room = room;
	}
	Reservation(vector<Guest> guests, Room room, Date checkIn) :Reservation(guests, room) {
		_checkIn = checkIn;
	}
	Reservation(vector<Guest> guests, Room room, Date checkIn, Date checkOut) :Reservation(guests, room, checkIn) {
		try
		{
			if (checkIn > checkOut) {//check if check in date is after check out date
				throw exception("Invalid check out date");
			}
			else {
				_checkOut = checkOut;
			}
		}
		catch (const exception& e)
		{
			cout << e.what() << endl;
		}
		
	}

	//getters
	vector<Guest> getGuests() {
		return _guests;
	}
	Room getRoom() {
		return _room;
	}
	Date getCheckIn() {
		return _checkIn;
	}
	Date getCheckOut() {
		return _checkOut;
	}
	int getIdReservation() {
		return _id_reservation;
	}

	//setters
	void setGuests(vector<Guest> guests) {
		_guests = guests;
	}
	void setRoom(Room room) {
		_room = room;
	}
	void setCheckIn(Date checkIn) {
		_checkIn = checkIn;
	}
	void setCheckOut(Date checkOut) {
		_checkOut = checkOut;
	}
	void setIdReservation(int id_reservation) {
		_id_reservation = id_reservation;
	}

	//methods
	void print() {
		cout << "Reservation ID: " << _id_reservation << endl;
		cout << "Guests: " << endl;
		for (int i = 0; i < _guests.size(); i++) {
			cout << "Guest " << i + 1 << ": " << _guests[i].getName() << " " << _guests[i].getSurname() << endl;
		}
		cout << "Room number: " << _room.getNumber() << endl;

		cout << "Room type: ";
		switch (_room.getType())
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

		cout << "Check in date: ";
		_checkIn.print();

		cout << "Check out date: ";
		_checkOut.print();
	}

	//operators

	bool operator==(const Reservation& other) const {\
		return _guests == other._guests &&
		_room == other._room &&
		_checkIn == other._checkIn &&
		_checkOut == other._checkOut;
	}

	bool operator!=(const Reservation& other) const {
		return !(*this == other);
	}
};
#endif // !RESERVATION

