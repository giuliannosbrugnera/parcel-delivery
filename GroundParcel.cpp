/* ================================================================== *
 
    University of Wisconsin-Whitewater

    Course: Intermediate C++
    Instructor Jiazhen Zhou

    Project 3

    File: GroundParcel.cpp

    Description: Implementation file of GroundParcel class

    Author: Giulianno Raphael Sbrugnera
 * ================================================================== */

#include "GroundParcel.h"

// *********************************************************************************************************
// GroundParcel is the constructor for the GroundParcel class. It makes use of base member initialization. *
// *********************************************************************************************************
GroundParcel::GroundParcel( int number, Contact sender, Contact recipient, double fee, double weight, double costPerOunce ) : Parcel( number, sender, recipient, fee, weight, costPerOunce ) {
	setNumber( number );
	setSender( sender );
	setRecipient( recipient );
	setFee( fee );
	setWeight( weight );
	setCostPerOunce( costPerOunce );
}

// ***********************************************
// calcCost calculates the cost of the delivery. *
// ***********************************************
double GroundParcel::calcCost() const {
	return getFee() + (getWeight() * getCostPerOunce());
}
