/* ================================================================== *
 
    University of Wisconsin-Whitewater

    Course: Intermediate C++
    Instructor Jiazhen Zhou

    Project 3

    File: Contact.h

    Description: Specification file for the Contact class

    Author: Giulianno Raphael Sbrugnera
 * ================================================================== */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

// Represent a contact, either sender or recipient
class Contact {

	private:
		// Data members
		std::string name;
		std::string fullAddress;
		int zipCode;

	public:
		// Constructor with default parameters
		Contact( std::string name = "", std::string fullAddress = "", int zipCode = 0 );

		// Getters
		std::string getName() const;
		std::string getFullAddress() const;
		int getZipCode() const;

		// Setters
		void setName( std::string name );
		void setFullAddress( std::string fullAddress );
		void setZipCode( int zipCode );

		// Member function
		void printInformation() const;

};

#endif
