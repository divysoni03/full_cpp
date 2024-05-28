// -> Problem Statement: Train Reservation System

// -> Overview:
// You are tasked with developing a basic train reservation system in C++ without using the Standard Template Library (STL). This system will manage train schedules, reservations, and passenger information for a small regional train service.

// -> Requirements:

// 1. Train Management:
//    - Train Information: Each train has a unique train number, a name, a source station, a destination station, and a fixed number of seats.
//    - Schedule Management: Maintain a schedule for each train that includes the departure time from the source station and the arrival time at the destination station.
//    - Train Listing: Provide functionality to list all trains, including their schedules and seat availability.

// 2. Reservation Management:
//    - Booking a Seat: Allow passengers to book seats on a specific train. Each reservation must include passenger details (name, age, and a unique reservation ID), the train number, and the seat number.
//    - Cancelling a Reservation: Provide functionality to cancel a reservation using the reservation ID.
//    - Viewing Reservations: Allow viewing of all reservations for a specific train or all trains.

// 3. Passenger Information Management:
//    - Passenger Details: Store and manage details of passengers including name, age, and the reservations they have made.
//    - View Passenger Information: Provide functionality to view all reservations made by a specific passenger.

// 4. Data Persistence:
//    - Saving Data: Ensure that all data (trains, schedules, reservations, and passenger information) can be saved to and loaded from files to persist across program restarts.

// -> Constraints:
// - No STL Usage: Implement all data structures and algorithms manually without using the Standard Template Library.
// - Basic Error Handling: Implement basic error handling for scenarios such as booking a seat on a non-existent train, booking a seat that is already reserved, cancelling a non-existent reservation, etc.

// -> Data Structures:
// - Custom Linked Lists: Use custom linked lists to manage trains, reservations, and passengers.
// - Custom Arrays: Implement fixed-size arrays for storing train seats and other fixed-capacity data structures.
// - File I/O: Use basic file input/output operations to save and load data.

// -> Example Scenarios:
// 1. Adding Trains:
//    - Admin adds a new train with the number "101", name "Express", source "City A", destination "City B", and 100 seats.
   
// 2. Making a Reservation:
//    - Passenger "John Doe" books a seat on train "101". The system assigns a unique reservation ID and reserves a seat.

// 3. Cancelling a Reservation:
//    - John Doe cancels his reservation using his unique reservation ID. The seat becomes available for other passengers.

// 4. Viewing Train Schedule:
//    - Admin or passenger views the schedule and seat availability for train "101".

// 5. Viewing Reservations:
//    - Admin views all reservations for train "101" or all reservations made by passenger "John Doe".

#include<iostream>
#include<string>
#include<>