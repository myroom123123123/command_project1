#ifndef RESERVATION_MANAGMENT
#define RESERVATION_MANAGMENT

#include "reservation_class.h"
class Reservation_Manager
{
private:
	vector<Reservation> _reservations;
	int _reservationCount;
public:
	//constructors
	Reservation_Manager() {
		_reservations = {};
		_reservationCount = 0;
	}

	//method to get reservation and reservations
	Reservation getReservation(int index) const{
		return _reservations[index];
	}

	vector<Reservation> getReservations() const{
		return _reservations;
	}

	//operators
	bool operator==(const Reservation_Manager reservationManager) const{
		if (_reservations.size() != reservationManager.getReservations().size()) {
			return false;
		}
		for (int i = 0; i < _reservations.size(); i++) {
			if (_reservations[i] != reservationManager.getReservation(i)) {
				return false;
			}
		}
		return true;
	}
	bool operator!=(Reservation_Manager reservationManager) {
		return !(*this == reservationManager);
	}


	//methods
	bool checkReservation(const Reservation& reservation) const {
		for (int i = 0; i < _reservations.size(); i++) {
			if (_reservations[i] == reservation) {
				return true;
			}
		}
		return false;
	}

	void addReservation(Reservation reservation) {
		try
		{
			bool check = checkReservation(reservation);
			if (check) {
				throw invalid_argument("Reservation already exists");
			}
		}
		catch (const exception& e)
		{
			cout << e.what() << endl;
		}
		_reservationCount++;
		reservation.setIdReservation(_reservationCount);
		_reservations.push_back(reservation);
		
		
	}

	void removeReservation(Reservation reservation) {
		for (int i = 0; i < _reservations.size(); i++) {
			if (_reservations[i] == reservation) {
				_reservations.erase(_reservations.begin() + i);
			}
		}
	}

	void deleteReservation(int index) {
		_reservations.erase(_reservations.begin() + index);
	}


	

	void setReservations(vector<Reservation> reservations) {
		_reservations = reservations;
	}

	void setReservation(int index, Reservation reservation) {
		reservation.setIdReservation(index + 1);
		_reservations[index] = reservation;

	}

	void printReservations() {
		for (int i = 0; i < _reservations.size(); i++) {
			cout << "Reservation " << i + 1 << ": " << endl;
			_reservations[i].print();
			cout << endl;
		}
	}

};


#endif // !RESERVATION_MANAGMENT

