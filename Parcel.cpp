/* ================================================================== *
 
    University of Wisconsin-Whitewater

    Course: Intermediate C++
    Instructor Jiazhen Zhou

    Project 3

    File: Parcel.cpp

    Description: Implementation file of Parcel class

    Author: Giulianno Raphael Sbrugnera
 * ================================================================== */

#include <iostream>
#include "Parcel.h"

using namespace std;

// *************************************************
// Parcel is the constructor for the Parcel class. *
// *************************************************
Parcel::Parcel( int number, Contact sender, Contact recipient, double fee, double weight, double costPerOunce ) {
	setNumber( number );
	setSender( sender );
	setRecipient( recipient );
	setFee( fee );
	setWeight( weight );
	setCostPerOunce( costPerOunce );
}

// ***************************************************
// getNumber returns the value in the number member. *
// ***************************************************
int Parcel::getNumber() const {
	return this->number;
}

// ***************************************************
// getSender returns the value in the sender member. *
// ***************************************************
Contact Parcel::getSender() const {
	return this->sender;
}

// *********************************************************
// getRecipient returns the value in the recipient member. *
// *********************************************************
Contact Parcel::getRecipient() const {
	return this->recipient;
}

// *********************************************
// getFee returns the value in the fee member. *
// *********************************************
double Parcel::getFee() const {
	return this->fee;
}

// ***************************************************
// getWeight returns the value in the weight member. *
// ***************************************************
double Parcel::getWeight() const {
	return this->weight;
}

// ***************************************************************
// getCostPerOunce returns the value in the costPerOunce member. *
// ***************************************************************
double Parcel::getCostPerOunce() const {
	return this->costPerOunce;
}

// *************************************************
// setNumber assigns a value to the number member. *
// *************************************************
void Parcel::setNumber( int number ) {
	this->number = number;
}

// *************************************************
// setSender assigns a value to the sender member. *
// *************************************************
void Parcel::setSender( Contact sender ) {
	this->sender = sender;
}

// *******************************************************
// setRecipient assigns a value to the recipient member. *
// *******************************************************
void Parcel::setRecipient( Contact recipient ) {
	this->recipient = recipient;
}

// *******************************************
// setFee assigns a value to the fee member. *
// *******************************************
void Parcel::setFee( double fee ) {
	if ( fee >= 0 ) {
		this->fee = fee;
	}
	else {
		cout << "WARNING: Fee must be a positive value. It was stored 0 instead of a negative value." << endl;
		this->fee = 0;
	}
}

// *************************************************
// setWeight assigns a value to the weight member. *
// *************************************************
void Parcel::setWeight( double weight ) {
	if ( weight >= 0 ) {
		this->weight = weight;
	}
	else {
		cout << "WARNING: Weight must be a positive value. It was stored 0 instead of a negative value." << endl;
		this->weight = 0;
	}
}

// *************************************************************
// setCostPerOunce assigns a value to the costPerOunce member. *
// *************************************************************
void Parcel::setCostPerOunce( double costPerOunce ) {
	if ( costPerOunce >= 0 ) {
		this->costPerOunce = costPerOunce;
	}
	else {
		cout << "WARNING: Cost per ounce must be a positive value. It was stored 0 instead of a negative value." << endl;
		this->costPerOunce = 0;
	}
}

// ********************************************************
// calcCost just return a 0 value in this implementation. *
// ********************************************************
double Parcel::calcCost() const {
	return 0;
}
