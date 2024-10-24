#ifndef HOTELMANAGMENT
#define HOTELMANAGMENT

#include "lib.h"
#include "domain.h"

class HotelManager {
private:
	vector<Room> _rooms;
	vector<Guest> _guests;
	vector<Reservation> _reservations;
	Staff_Manager _staffManager;
	Service_Manager _serviceManager;
public:
	//constructors
	HotelManager() {
		_rooms = {};
		_guests = {};
		_reservations = {};
	}

	//methods for rooms
	void addRoom(Room room) {
		_rooms.push_back(room);
	}
	void deleteRoom(int index) {
		_rooms.erase(_rooms.begin() + index);
	}
	void printRooms() {
		for (int i = 0; i < _rooms.size(); i++) {
			cout << i + 1 << ". " << _rooms[i].getNumber() << " - " << _rooms[i].getType() << " - " << _rooms[i].getPrice() << endl;
		}
	}
	bool checkRoom(Room room) {
		for (int i = 0; i < _rooms.size(); i++) {
			if (_rooms[i].getNumber() == room.getNumber() && _rooms[i].getType() == room.getType() && _rooms[i].getPrice() == room.getPrice()) {
				return true;
			}
		}
		return false;
	}

	//methods for guests
	void addGuest(Guest guest) {
		_guests.push_back(guest);
	}
	void deleteGuest(int index) {
		_guests.erase(_guests.begin() + index);
	}
	void printGuests() {
		for (int i = 0; i < _guests.size(); i++) {
			cout << i + 1 << ". " << _guests[i].getName() << " " << _guests[i].getSurname() << endl;
		}
	}
	bool checkGuest(Guest guest) {
		for (int i = 0; i < _guests.size(); i++) {
			if (_guests[i].getName() == guest.getName() && _guests[i].getSurname() == guest.getSurname()) {
				return true;
			}
		}
		return false;
	}

	//methods for reservations
	void addReservation(Reservation reservation) {
		_reservations.push_back(reservation);
	}
	void deleteReservation(int index) {
		_reservations.erase(_reservations.begin() + index);
	}
	void printReservations() {
		for (int i = 0; i < _reservations.size(); i++) {
			cout << "Reservation " << i + 1 << ":" << endl;
			cout << "Guests:" << endl;
			for (int j = 0; j < _reservations[i].getGuests().size(); j++) {
				cout << _reservations[i].getGuests()[j].getName() << " " << _reservations[i].getGuests()[j].getSurname() << endl;
			}
			cout << "Room: " << _reservations[i].getRoom().getNumber() << " - " << _reservations[i].getRoom().getType() << " - " << _reservations[i].getRoom().getPrice() << endl;
			cout << "Check in: ";
			_reservations[i].getCheckIn().print();
			cout << "Check out: ";
			_reservations[i].getCheckOut().print();
		}
	}
	bool checkReservation(Reservation reservation) {
		for (int i = 0; i < _reservations.size(); i++) {
			if (_reservations[i].getGuests() == reservation.getGuests() && _reservations[i].getRoom() == reservation.getRoom() && _reservations[i].getCheckIn() == reservation.getCheckIn() && _reservations[i].getCheckOut() == reservation.getCheckOut()) {
				return true;
			}
		}
		return false;
	}
	//methods for staff
	void addStaff(Staff staff) {
		_staffManager.addStaff(staff);
	}
	void deleteStaff(int index) {
		_staffManager.deleteStaff(index);
	}
	void printStaff() {
		_staffManager.printStaff();
	}
	bool checkStaff(Staff staff) {
		return _staffManager.checkStaff(staff);
	}
	//methods for services
	void addService(Service service) {
		_serviceManager.addService(service);
	}
	void deleteService(int index) {
		_serviceManager.deleteService(index);
	}
	void printServices() {
		_serviceManager.printServices();
	}
	bool checkService(Service service) {
		return _serviceManager.checkService(service);
	}
};

//function for printing menu
void printMenu() {
	cout << "1. Rooms" << endl;
	cout << "2. Guests" << endl;
	cout << "3. Reservations" << endl;
	cout << "4. Staff" << endl;
	cout << "5. Services" << endl;
	cout << "6. Exit" << endl;
}

//function for printing sub menu
int chooseMenu() {
	int choice;
	cout << "Choose a menu item: ";
	cin >> choice;
	return choice;
}

//function for printing sub menu
int chooseSubMenu() {
	int choice;
	cout << "1. Add" << endl;
	cout << "2. Delete" << endl;
	cout << "3. Print" << endl;
	cout << "4. Check" << endl;
	cout << "Choose a sub menu item: ";
	cin >> choice;
	return choice;
}
#endif // !HOTELMANAGMENT