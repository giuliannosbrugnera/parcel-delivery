/* ================================================================== *
 
    University of Wisconsin-Whitewater

    Course: Intermediate C++
    Instructor Jiazhen Zhou

    Project 3

    File: GroundParcel.h

    Description: Specification file for the GroundParcel class

    Author: Giulianno Raphael Sbrugnera
 * ================================================================== */

#ifndef GROUNDPARCEL_H
#define GROUNDPARCEL_H

#include "Parcel.h"

// Represents a GroundParcel
class GroundParcel : public Parcel {

	public:
		// Constructor
		GroundParcel( int number, Contact sender, Contact recipient, double fee, double weight, double costPerOunce );

		// Member function, redefined
		virtual double calcCost() const;

};

#endif
