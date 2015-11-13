/* ================================================================== *
 
    University of Wisconsin-Whitewater

    Course: Intermediate C++
    Instructor Jiazhen Zhou

    Project 3

    File: OvernightParcel.cpp

    Description: Implementation file of OvernightParcel class

    Author: Giulianno Raphael Sbrugnera
 * ================================================================== */

#include "OvernightParcel.h"

// *******************************************************************
// OvernightParcel is the constructor for the OvernightParcel class. *
// *******************************************************************
OvernightParcel::OvernightParcel( int number, Contact sender, Contact recipient, double fee, double weight, double costPerOunce, int trackingNumber, double standardWeight ) : Parcel( number, sender, recipient, fee, weight, costPerOunce ) {
	setNumber( number );
	setSender( sender );
	setRecipient( recipient );
	setFee( fee );
	setWeight( weight );
	setCostPerOunce( costPerOunce );
	setTrackingNumber( trackingNumber );
	setStandardWeight( standardWeight );
}

// *******************************************************************
// getTrackingNumber returns the value in the trackingNumber member. *
// *******************************************************************
int OvernightParcel::getTrackingNumber() const {
	return this->trackingNumber;
}

// *******************************************************************
// getStandardWeight returns the value in the standardWeight member. *
// *******************************************************************
double OvernightParcel::getStandardWeight() const {
	return this->standardWeight;
}

// *****************************************************************
// setTrackingNumber assigns a value to the trackingNumber member. *
// *****************************************************************
void OvernightParcel::setTrackingNumber( int trackingNumber ) {
	this->trackingNumber = trackingNumber;
}

// *****************************************************************
// setStandardWeight assigns a value to the standardWeight member. *
// *****************************************************************
void OvernightParcel::setStandardWeight( double standardWeight ) {
	this->standardWeight = standardWeight;
}

// ***********************************************
// calcCost calculates the cost of the delivery. *
// ***********************************************
double OvernightParcel::calcCost() const {
	// The cost is the basic fee if the weight is lower than the standard weight
	if ( getWeight() <= standardWeight ) {
		return getFee();
	}
	
	// Otherwise, the cost is the basic fee plus the costPerOunce times the additional weight
	return getFee() + ((getWeight() - standardWeight) * getCostPerOunce());
}
