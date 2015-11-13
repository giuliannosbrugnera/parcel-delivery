# *****************************************************
# Makefile for executable

# *****************************************************
# Parameters to control Makefile operation

CXX = g++
CXXFLAGS = -c
LDFLAGS = -Wall
OBJS = Contact.o Parcel.o GroundParcel.o OvernightParcel.o driver.o
RM = rm -f

# ****************************************************
# Entries to bring the executable up to date

all: output

output: $(OBJS)
	$(CXX) $(LDFLAGS) -o output $(OBJS)

Contact.o:	Contact.cpp	Contact.h
	$(CXX) $(CXXFLAGS) Contact.cpp

Parcel.o: Parcel.cpp Parcel.h
	$(CXX) $(CXXFLAGS) Parcel.cpp

GroundParcel.o: GroundParcel.cpp GroundParcel.h
	$(CXX) $(CXXFLAGS) GroundParcel.cpp

OvernightParcel.o: OvernightParcel.cpp OvernightParcel.h
	$(CXX) $(CXXFLAGS) OvernightParcel.cpp	

driver.o: driver.cpp
	$(CXX) $(CXXFLAGS) driver.cpp

clean:
	$(RM) $(OBJS)

uninstall:
	$(RM) output
