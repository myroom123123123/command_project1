#ifndef GUEST
#define GUEST

#include "lib.h"

struct ContactInfo {//struct that contains contact information of a guest
private:
	string _phone;
	string _email;
	string _address;
public:
	//constructors
	ContactInfo() {
		_phone = "";
		_email = "";
		_address = "";
	}
	ContactInfo(string phone) :ContactInfo() {
		_phone = phone;
	}
	ContactInfo(string phone, string email) :ContactInfo(phone) {
		_email = email;
	}

	ContactInfo(string phone, string email, string address) :ContactInfo(phone, email) {
		_address = address;
	}

	//getters
	string getPhone() const{
		return _phone;
	}
	string getEmail() const{
		return _email;
	}
	string getAddress() const{
		return _address;
	}
};

class Guest
{
private:
	string _name;
	string _surname;
	int _id;
	ContactInfo _contactInfo;
public:
	//constructors
	Guest() {
		_name = "";
		_surname = "";
		_id = 0;
	}
	Guest(string name) :Guest() {
		_name = name;
	}
	Guest(string name, string surname) :Guest(name) {
		_surname = surname;
	}
	Guest(string name, string surname, int id) :Guest(name, surname) {
		_id = id;
	}
	Guest(string name, string surname, int id, ContactInfo contactInfo) :Guest(name, surname, id) {
		_contactInfo = contactInfo;
	}

	//getters
	string getName() const{
		return _name;
	}
	string getSurname() const{
		return _surname;
	}
	int getId() const{
		return _id;
	}
	ContactInfo getContactInfo() const{
		return _contactInfo;
	}

	//setters
	void setName(string name) {
		_name = name;
	}

	void setSurname(string surname) {
		_surname = surname;
	}

	void setId(int id) {
		_id = id;
	}

	void setContactInfo(ContactInfo contactInfo) {
		_contactInfo = contactInfo;
	}

	void setContactInfo() {
		string phone;
		string email;
		string address;
		cout << "Enter phone: ";
		cin >> phone;
		cout << "Enter email: ";
		cin >> email;
		cout << "Enter address: ";
		cin >> address;
		_contactInfo = ContactInfo(phone, email, address);
	}

	//methods
	void print() {
		cout << "Name: " << _name << endl;
		cout << "Surname: " << _surname << endl;
		cout << "ID: " << _id << endl;
		cout << "Phone: " << _contactInfo.getPhone() << endl;
		cout << "Email: " << _contactInfo.getEmail() << endl;
		cout << "Address: " << _contactInfo.getAddress() << endl;
	}

	//operators

	bool operator==(const Guest guest) const{
		if (_name != guest.getName() || _surname != guest.getSurname() || _id != guest.getId() || _contactInfo.getPhone() != guest.getContactInfo().getPhone() || _contactInfo.getEmail() != guest.getContactInfo().getEmail() || _contactInfo.getAddress() != guest.getContactInfo().getAddress()) {
			return false;
		}
		return true;
	}

	bool operator!=(const Guest guest) const{
		return !(*this == guest);
	}
};
#endif // !GUEST

