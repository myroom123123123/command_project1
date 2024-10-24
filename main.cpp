#include "domain.h"

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



	return 0;
}