#ifndef SERVICE
#define SERVICE

#include "lib.h"

class Service {
private:
	string _name;
	double _price;
public:
	//constructors
	Service() {
		_name = "";
		_price = 0;
	}
	Service(string name) :Service() {
		_name = name;
	}
	Service(string name, double price) :Service(name) {
		_price = price;
	}

	//getters
	string getName() const {
		return _name;
	}
	double getPrice() const {
		return _price;
	}
};

class Service_Manager {
private:
	vector<Service> _services;
public:
	//add service
	void addService(Service service) {
		_services.push_back(service);
	}
	//delete service
	void deleteService(int index) {
		_services.erase(_services.begin() + index);
	}
	//print service
	void printServices() {
		for (int i = 0; i < _services.size(); i++) {
			cout << i + 1 << ". " << _services[i].getName() << " - " << _services[i].getPrice() << endl;
		}
	}
	//check if service exists
	bool checkService(Service service) {
		for (int i = 0; i < _services.size(); i++) {
			if (_services[i].getName() == service.getName() && _services[i].getPrice() == service.getPrice()) {
				return true;
			}
		}
		return false;
	}
};
#endif // !SERVICE
