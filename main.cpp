#include "domain.h"
#include "hotelmanagment.h"

int main()
{
	//creating a room
	Room room1(SUPERIOR, 1, false, 100);
	//creating a guest
	Guest guest1("John", "Doe", 1);

	//creating a reservation
	Reservation reservation1({ guest1 }, room1, Date(1, 1, 2021), Date(5, 1, 2021));

	//creating a reservation manager
	Reservation_Manager reservationManager;

	//adding a reservation to the reservation manager
	reservationManager.addReservation(reservation1);

	//printing the reservation manager
	cout << "Printing the reservation manager 1:" << endl;
	reservationManager.printReservations();

	//creating a room
		
	Room room2(DELUXE, 2, false, 200);
	//creating a guest

	Guest guest2("Jane", "Doe", 2);
	//creating a reservation
	Reservation reservation2({ guest2 }, room2, Date(1, 1, 2021), Date(5, 1, 2021));
	//adding a reservation to the reservation manager
	reservationManager.addReservation(reservation2);

	//printing the reservation manager
	cout << "Printing the reservation manager 2:" << endl;
	reservationManager.printReservations();

	//creating a room
	Room room3(STANDART, 3, false, 50);
	//creating a guest
	Guest guest3("John", "Smith", 3);
	//creating a reservation
	Reservation reservation3({ guest3 }, room3, Date(1, 1, 2021), Date(5, 1, 2021));
	//adding a reservation to the reservation manager
	reservationManager.addReservation(reservation3);

	//printing the reservation manager
	cout << "Printing the reservation manager 3:" << endl;
	reservationManager.printReservations();

	//deleting a reservation from the reservation manager
	reservationManager.deleteReservation(1);
	//printing the reservation manager
	cout << "Printing the reservation manager 4 (delete reservation 2):" << endl;
	reservationManager.printReservations();

	//checking if a reservation exists in the reservation manager
	
	cout << "Reservation 1 in reservations: " << reservationManager.checkReservation(reservation1) << endl;// returns 1

	//checking if a reservation exists in the reservation manager
	cout << "Reservation 2 in reservations: " << reservationManager.checkReservation(reservation2) << endl;// returns 0

	//creating a staff manager
	Staff_Manager staffManager;

	//creating a staff
	Staff staff1("Mick", "Smith", "Manager");
	Staff staff2("Bob", "Jones", "Receptionist");
	Staff staff3("John", "Cooper", "Director");
	Staff staff4("Mary", "Andrews", "Cleaner");
	Staff staff5("Fred", "Martin", "Cook");
	//adding a staff to the staff manager
	staffManager.addStaff(staff1);
	staffManager.addStaff(staff2);
	staffManager.addStaff(staff3);
	staffManager.addStaff(staff4);
	staffManager.addStaff(staff5);
	cout << "Printing the staff manager 1:" << endl;
	staffManager.printStaff();
	cout << "Staff 1 in staff: " << staffManager.checkStaff(staff1) << endl;
	cout << "Staff 2 in staff: " << staffManager.checkStaff(staff2) << endl;
	cout << "Staff 3 in staff: " << staffManager.checkStaff(staff3) << endl;
	cout << "Staff 4 in staff: " << staffManager.checkStaff(staff4) << endl;
	cout << "Staff 5 in staff: " << staffManager.checkStaff(staff5) << endl;

	//deleting a staff from the staff manager
	staffManager.deleteStaff(1);
	cout << "Printing the staff manager 2 (delete staff 2):" << endl;
	staffManager.printStaff();
	cout << "Staff 1 in staff: " << staffManager.checkStaff(staff1) << endl;
	cout << "Staff 2 in staff: " << staffManager.checkStaff(staff2) << endl;
	cout << "Staff 3 in staff: " << staffManager.checkStaff(staff3) << endl;
	cout << "Staff 4 in staff: " << staffManager.checkStaff(staff4) << endl;
	cout << "Staff 5 in staff: " << staffManager.checkStaff(staff5) << endl;

	//creating a service
	Service service1("Room service", 50);
	Service service2("Breakfast", 20);
	Service service3("Lunch", 30);
	Service service4("Dinner", 40);
	Service service5("Laundry", 10);
	Service service6("Cleaning", 15);
	Service service7("Parking", 5);
	Service service8("Wi-Fi", 5);
	Service service9("Pool", 10);
	Service service10("Gym", 10);
	//creating a service manager
	Service_Manager serviceManager;
	//adding a service to the service manager
	serviceManager.addService(service1);
	serviceManager.addService(service2);
	serviceManager.addService(service3);
	serviceManager.addService(service4);
	serviceManager.addService(service5);
	serviceManager.addService(service6);
	serviceManager.addService(service7);
	serviceManager.addService(service8);
	serviceManager.addService(service9);
	serviceManager.addService(service10);
	//printing the service manager
	cout << "Printing the service manager 1:" << endl;
	serviceManager.printServices();
	cout << "Service 1 in services: " << serviceManager.checkService(service1) << endl;
	cout << "Service 2 in services: " << serviceManager.checkService(service2) << endl;
	cout << "Service 3 in services: " << serviceManager.checkService(service3) << endl;
	cout << "Service 4 in services: " << serviceManager.checkService(service4) << endl;
	cout << "Service 5 in services: " << serviceManager.checkService(service5) << endl;
	cout << "Service 6 in services: " << serviceManager.checkService(service6) << endl;
	cout << "Service 7 in services: " << serviceManager.checkService(service7) << endl;
	cout << "Service 8 in services: " << serviceManager.checkService(service8) << endl;
	cout << "Service 9 in services: " << serviceManager.checkService(service9) << endl;
	cout << "Service 10 in services: " << serviceManager.checkService(service10) << endl;
	//deleting a service from the service manager
	serviceManager.deleteService(1);
	cout << "Printing the service manager 2 (delete service 2):" << endl;
	serviceManager.printServices();
	cout << "Service 1 in services: " << serviceManager.checkService(service1) << endl;
	cout << "Service 2 in services: " << serviceManager.checkService(service2) << endl;
	cout << "Service 3 in services: " << serviceManager.checkService(service3) << endl;
	cout << "Service 4 in services: " << serviceManager.checkService(service4) << endl;
	cout << "Service 5 in services: " << serviceManager.checkService(service5) << endl;
	cout << "Service 6 in services: " << serviceManager.checkService(service6) << endl;
	cout << "Service 7 in services: " << serviceManager.checkService(service7) << endl;
	cout << "Service 8 in services: " << serviceManager.checkService(service8) << endl;
	cout << "Service 9 in services: " << serviceManager.checkService(service9) << endl;
	cout << "Service 10 in services: " << serviceManager.checkService(service10) << endl;

	//creating a hotel manager
	HotelManager hotelManager;
	//adding a room to the hotel manager
	hotelManager.addRoom(room1);
	hotelManager.addRoom(room2);
	hotelManager.addRoom(room3);
	//printing the hotel manager
	cout << "Printing the hotel manager 1:" << endl;
	hotelManager.printRooms();
	cout << "Room 1 in rooms: " << hotelManager.checkRoom(room1) << endl;
	cout << "Room 2 in rooms: " << hotelManager.checkRoom(room2) << endl;
	cout << "Room 3 in rooms: " << hotelManager.checkRoom(room3) << endl;
	//deleting a room from the hotel manager
	hotelManager.deleteRoom(1);
	cout << "Printing the hotel manager 2 (delete room 2):" << endl;
	hotelManager.printRooms();
	cout << "Room 1 in rooms: " << hotelManager.checkRoom(room1) << endl;
	cout << "Room 2 in rooms: " << hotelManager.checkRoom(room2) << endl;
	cout << "Room 3 in rooms: " << hotelManager.checkRoom(room3) << endl;

	//adding a guest to the hotel manager
	hotelManager.addGuest(guest1);
	hotelManager.addGuest(guest2);
	hotelManager.addGuest(guest3);
	//printing the hotel manager
	cout << "Printing the hotel manager 3:" << endl;
	hotelManager.printGuests();
	cout << "Guest 1 in guests: " << hotelManager.checkGuest(guest1) << endl;
	cout << "Guest 2 in guests: " << hotelManager.checkGuest(guest2) << endl;
	cout << "Guest 3 in guests: " << hotelManager.checkGuest(guest3) << endl;
	//deleting a guest from the hotel manager
	hotelManager.deleteGuest(1);
	cout << "Printing the hotel manager 4 (delete guest 2):" << endl;
	hotelManager.printGuests();
	cout << "Guest 1 in guests: " << hotelManager.checkGuest(guest1) << endl;
	cout << "Guest 2 in guests: " << hotelManager.checkGuest(guest2) << endl;
	cout << "Guest 3 in guests: " << hotelManager.checkGuest(guest3) << endl;

	//adding a reservation to the hotel manager
	hotelManager.addReservation(reservation1);
	hotelManager.addReservation(reservation2);
	hotelManager.addReservation(reservation3);
	//printing the hotel manager
	cout << "Printing the hotel manager 5:" << endl;
	hotelManager.printReservations();
	cout << "Reservation 1 in reservations: " << hotelManager.checkReservation(reservation1) << endl;
	cout << "Reservation 2 in reservations: " << hotelManager.checkReservation(reservation2) << endl;
	cout << "Reservation 3 in reservations: " << hotelManager.checkReservation(reservation3) << endl;
	//deleting a reservation from the hotel manager
	hotelManager.deleteReservation(1);
	cout << "Printing the hotel manager 6 (delete reservation 2):" << endl;
	hotelManager.printReservations();
	cout << "Reservation 1 in reservations: " << hotelManager.checkReservation(reservation1) << endl;
	cout << "Reservation 2 in reservations: " << hotelManager.checkReservation(reservation2) << endl;
	cout << "Reservation 3 in reservations: " << hotelManager.checkReservation(reservation3) << endl;

	//adding a staff to the hotel manager
	hotelManager.addStaff(staff1);
	hotelManager.addStaff(staff2);
	hotelManager.addStaff(staff3);
	hotelManager.addStaff(staff4);
	hotelManager.addStaff(staff5);
	//printing the hotel manager
	cout << "Printing the hotel manager 3:" << endl;
	hotelManager.printStaff();
	cout << "Staff 1 in staff: " << hotelManager.checkStaff(staff1) << endl;
	cout << "Staff 2 in staff: " << hotelManager.checkStaff(staff2) << endl;
	cout << "Staff 3 in staff: " << hotelManager.checkStaff(staff3) << endl;
	cout << "Staff 4 in staff: " << hotelManager.checkStaff(staff4) << endl;
	cout << "Staff 5 in staff: " << hotelManager.checkStaff(staff5) << endl;
	//deleting a staff from the hotel manager
	hotelManager.deleteStaff(1);
	cout << "Printing the hotel manager 4 (delete staff 2):" << endl;
	hotelManager.printStaff();
	cout << "Staff 1 in staff: " << hotelManager.checkStaff(staff1) << endl;
	cout << "Staff 2 in staff: " << hotelManager.checkStaff(staff2) << endl;
	cout << "Staff 3 in staff: " << hotelManager.checkStaff(staff3) << endl;
	cout << "Staff 4 in staff: " << hotelManager.checkStaff(staff4) << endl;
	cout << "Staff 5 in staff: " << hotelManager.checkStaff(staff5) << endl;

	//adding a service to the hotel manager
	hotelManager.addService(service1);
	hotelManager.addService(service2);
	hotelManager.addService(service3);
	hotelManager.addService(service4);
	hotelManager.addService(service5);
	hotelManager.addService(service6);
	hotelManager.addService(service7);
	hotelManager.addService(service8);
	hotelManager.addService(service9);
	hotelManager.addService(service10);
	//printing the hotel manager
	cout << "Printing the hotel manager 5:" << endl;
	hotelManager.printServices();
	cout << "Service 1 in services: " << hotelManager.checkService(service1) << endl;
	cout << "Service 2 in services: " << hotelManager.checkService(service2) << endl;
	cout << "Service 3 in services: " << hotelManager.checkService(service3) << endl;
	cout << "Service 4 in services: " << hotelManager.checkService(service4) << endl;
	cout << "Service 5 in services: " << hotelManager.checkService(service5) << endl;
	cout << "Service 6 in services: " << hotelManager.checkService(service6) << endl;
	cout << "Service 7 in services: " << hotelManager.checkService(service7) << endl;
	cout << "Service 8 in services: " << hotelManager.checkService(service8) << endl;
	cout << "Service 9 in services: " << hotelManager.checkService(service9) << endl;
	cout << "Service 10 in services: " << hotelManager.checkService(service10) << endl;
	//deleting a service from the hotel manager
	hotelManager.deleteService(1);
	cout << "Printing the hotel manager 6 (delete service 2):" << endl;
	hotelManager.printServices();
	cout << "Service 1 in services: " << hotelManager.checkService(service1) << endl;
	cout << "Service 2 in services: " << hotelManager.checkService(service2) << endl;
	cout << "Service 3 in services: " << hotelManager.checkService(service3) << endl;
	cout << "Service 4 in services: " << hotelManager.checkService(service4) << endl;
	cout << "Service 5 in services: " << hotelManager.checkService(service5) << endl;
	cout << "Service 6 in services: " << hotelManager.checkService(service6) << endl;
	cout << "Service 7 in services: " << hotelManager.checkService(service7) << endl;
	cout << "Service 8 in services: " << hotelManager.checkService(service8) << endl;
	cout << "Service 9 in services: " << hotelManager.checkService(service9) << endl;
	cout << "Service 10 in services: " << hotelManager.checkService(service10) << endl;

	//printing the menu
	printMenu();
	//choosing a menu item
	int choice = chooseMenu();
	//checking the choice
	switch (choice) {
	case 1: {
		//printing the rooms
		hotelManager.printRooms();
		break;
	}
	case 2: {
		//printing the guests
		hotelManager.printGuests();
		break;
	}
	case 3: {
		//printing the reservations
		hotelManager.printReservations();
		break;
	}
	case 4: {
		//printing the staff
		hotelManager.printStaff();
		break;
	}
	case 5: {
		//printing the services
		hotelManager.printServices();
		break;
	}
	case 6: {
		//exiting the program
		return 0;
	}
	default: {
		//printing an error message
		cout << "Invalid choice" << endl;
		break;
	}
	}

	return 0;
}