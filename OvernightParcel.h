/* ================================================================== *
 
    University of Wisconsin-Whitewater

    Course: Intermediate C++
    Instructor Jiazhen Zhou

    Project 3

    File: OvernightParcel.h

    Description: Specification file for the OvernightParcel class

    Author: Giulianno Raphael Sbrugnera
 * ================================================================== */

#ifndef OVERNIGHTPARCEL_H
#define OVERNIGHTPARCEL_H

#include "Parcel.h"

// Represents a OvernightParcel
class OvernightParcel : public Parcel {

	private:
        int trackingNumber;
        double standardWeight;

	public:
		// Constructor
		OvernightParcel( int number, Contact sender, Contact recipient, double fee, double weight, double costPerOunce, int trackingNumber, double standardWeight );

        // Getters
        int getTrackingNumber() const;
        double getStandardWeight() const;

        // Setters
        void setTrackingNumber( int trackingNumber );
        void setStandardWeight( double standardWeight );

        // Member function, redefined
		virtual double calcCost() const;

};

#endif
