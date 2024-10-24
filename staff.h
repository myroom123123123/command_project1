#ifndef STAFF
#define STAFF

#include "lib.h"


class Staff {
private:
	string _name;
	string _surname;
	string _position;
public:
	//constructors
	Staff() {
		_name = "";
		_surname = "";
		_position = "";
	}
	Staff(string name) :Staff() {
		_name = name;
	}
	Staff(string name, string surname) :Staff(name) {
		_surname = surname;
	}
	Staff(string name, string surname, string position) :Staff(name, surname) {
		_position = position;
	}

	//getters
	string getName() const {
		return _name;
	}
	string getSurname() const {
		return _surname;
	}
	string getPosition() const {
		return _position;
	}
};

//Реалізація методів для управління персоналом
class Staff_Manager {
private:
	vector<Staff> _staff;
public:
	//додавання персоналу
	void addStaff(Staff staff) {
		_staff.push_back(staff);
	}
	//видалення персоналу
	void deleteStaff(int index) {
		_staff.erase(_staff.begin() + index);
	}
	//перевірка чи персонал існує
	bool checkStaff(Staff staff) {
		for (int i = 0; i < _staff.size(); i++) {
			if (_staff[i].getName() == staff.getName() && _staff[i].getSurname() == staff.getSurname() && _staff[i].getPosition() == staff.getPosition()) {
				return true;
			}
		}
		return false;
	}
	//виведення персоналу
	void printStaff() {
		for (int i = 0; i < _staff.size(); i++) {
			cout << "Staff " << i + 1 << ":" << endl;
			cout << "Name: " << _staff[i].getName() << endl;
			cout << "Surname: " << _staff[i].getSurname() << endl;
			cout << "Position: " << _staff[i].getPosition() << endl;
			cout << endl;
		}
	}
};
#endif // !STAFF