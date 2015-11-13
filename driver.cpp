/* ================================================================== *
 
    University of Wisconsin-Whitewater

    Course: Intermediate C++
    Instructor Jiazhen Zhou

    Project 3

    File: driver.cpp

    Description: This is the test program

    Author: Giulianno Raphael Sbrugnera
 * ================================================================== */

// Impporting libraries and header files
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.h"
#include "GroundParcel.h"
#include "OvernightParcel.h"

using namespace std;

#define GROUNDPARCEL    0
#define OVERNIGHTPARCEL 1

// Defining the function's prototypes 
Parcel * createParcel( int choice );
Contact createContact();
void print( Parcel * ptr, int choice );

int main() {

	// Create one OvernightParcel object and one GroundParcel object (pointers)
	Parcel *par1 = createParcel( GROUNDPARCEL );
	Parcel *par2 = createParcel( OVERNIGHTPARCEL );

	// Setting the floating point precision output to two digital numbers after the point
	cout << fixed << setprecision( 2 );

	// Output the data stored on the objects
	print( par1, GROUNDPARCEL );
	print( par2, OVERNIGHTPARCEL );

	// Return the memory pointed to by par1 and by par2
	delete par1;
	delete par2;

	// Finalize the program
	return 0;

}

// *********************************************************************************************************************************
// Function: create a Parcel object. The object is returned, being either a pointer to a GroundParcel or a OvernightParcel object. *
// *********************************************************************************************************************************
Parcel * createParcel( int choice ) {
	int number;
	double fee;
	double weight;
	double costPerOunce;
	int trackingNumber;
	double standardWeight;
	Contact sender, recipient;

	// Ask for information about each attribute
	cout << endl << endl;
	if ( choice == GROUNDPARCEL ) {
		cout << "-- Input information for the Ground Parcel --" << endl;
	}
	else {
		cout << "-- Input information for the Overnight Parcel --" << endl;
	}

	cout << "Please provide the following information about the sender:" << endl;
	sender = createContact();

	cout << "Please provide the following information about the recipient:" << endl;
	recipient = createContact();

	cout << "Please provide the remaining information:" << endl;
	cout << "> Parcel number: ";
	cin >> number;
	cout << "> Fee: ";
	cin >> fee;
	cout << "> Weight: ";
	cin >> weight;
	cout << "> Cost per ounce: ";
	cin >> costPerOunce;

	// Overnight Parcel has additional information to be provided
	if ( choice == OVERNIGHTPARCEL ) {
		cout << "> Tracking number: ";
		cin >> trackingNumber;
		cout << "> Standard weight: ";
		cin >> standardWeight;		
	}

	// Consumes the '\n' from either the input above
	cin.ignore();

	// Makes sure to return the right object type to the caller
	if ( choice == GROUNDPARCEL ) {
		return new GroundParcel( number, sender, recipient, fee, weight, costPerOunce );
	}
	
	return new OvernightParcel( number, sender, recipient, fee, weight, costPerOunce, trackingNumber, standardWeight );

}

// ************************************************************
// Function: create a Contact object. The object is returned. *
// ************************************************************
Contact createContact() {
	string name, fullAddress;
	int zipCode;

	cout << "  > Full name: ";
	getline( cin, name );
	cout << "  > Full address (including city and state): ";
	getline( cin, fullAddress );
	cout << "  > ZIP code: ";
	cin >> zipCode;

	// Consumes the '\n' from the input above
	cin.ignore();

	Contact contact( name, fullAddress, zipCode );

	return contact;
}

// ***************************************************************************************
// Function: print out the sender, receiver, and cost information given a parcel object. *
// ***************************************************************************************
void print( Parcel * ptr, int choice ) {
	cout << endl << endl;
	if ( choice == GROUNDPARCEL ) {
		cout << "-- Output information for the Ground Parcel --" << endl;
	}
	else {
		cout << "-- Output information for the Overnight Parcel --" << endl;
	}
	cout << "Sender" << endl; 
	ptr->getSender().printInformation();
	cout << "Recipient" << endl; 
	ptr->getRecipient().printInformation();
	cout << "Cost $" << ptr->calcCost() << endl;
}
