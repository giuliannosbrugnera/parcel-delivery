/* ================================================================== *
 
    University of Wisconsin-Whitewater

    Course: Intermediate C++
    Instructor Jiazhen Zhou

    Project 3

    File: Parcel.h

    Description: Specification file for the Parcel class

    Author: Giulianno Raphael Sbrugnera
 * ================================================================== */

#ifndef PARCEL_H
#define PARCEL_H

#include "Contact.h"

// Represents a Parcel. It is the base class of the hierarchy
class Parcel {

	private:
		// Data members
		int number;
		Contact sender;
		Contact recipient;
		double fee;
		double weight;
		double costPerOunce;

	public:
		// Constructor
		Parcel( int number, Contact sender, Contact recipient, double fee, double weight, double costPerOunce );

		// Getters
		int getNumber() const;
		Contact getSender() const;
		Contact getRecipient() const;
		double getFee() const;
		double getWeight() const;
		double getCostPerOunce() const;

		// Setters
		void setNumber( int number );
		void setSender( Contact sender );
		void setRecipient( Contact recipient );
		void setFee( double fee );
		void setWeight( double weight );
		void setCostPerOunce( double costPerOunce );

		// Member function
		virtual double calcCost() const;
	
};

#endif
