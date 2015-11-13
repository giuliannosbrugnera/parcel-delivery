/* ================================================================== *
 
    University of Wisconsin-Whitewater

    Course: Intermediate C++
    Instructor Jiazhen Zhou

    Project 3

    File: Contact.cpp

    Description: Implementation file of Contact class

    Author: Giulianno Raphael Sbrugnera
 * ================================================================== */

#include <iostream>
#include "Contact.h"

using namespace std;

// ***************************************************
// Contact is the constructor for the Contact class. *
// ***************************************************
Contact::Contact( string name, string fullAddress, int zipCode ) {
	setName( name );
	setFullAddress( fullAddress );
	setZipCode( zipCode );
}

// ***********************************************
// getName returns the value in the name member. *
// ***********************************************
string Contact::getName() const {
	return this->name;
}

// *************************************************************
// getFullAddress returns the value in the fullAddress member. *
// *************************************************************
string Contact::getFullAddress() const {
	return this->fullAddress;
}

// *****************************************************
// getZipCode returns the value in the zipCode member. *
// *****************************************************
int Contact::getZipCode() const {
	return this->zipCode;
}

// *********************************************
// setName assigns a value to the name member. *
// *********************************************
void Contact::setName( string name ) {
	this->name = name;
}

// ***********************************************************
// setFullAddress assigns a value to the fullAddress member. *
// ***********************************************************
void Contact::setFullAddress( string fullAddress ) {
	this->fullAddress = fullAddress;
}

// ***************************************************
// setZipCode assigns a value to the zipCode member. *
// ***************************************************
void Contact::setZipCode( int zipCode ) {
	this->zipCode = zipCode;
}

// *************************************************************
// printInformation prints out the Contact object information. *
// *************************************************************
void Contact::printInformation() const {
	cout << "Name: " << getName() << endl;
	cout << "Full address: " << getFullAddress() << endl;
	cout << "ZIP code: " << getZipCode() << endl << endl;
}
