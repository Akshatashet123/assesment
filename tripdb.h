#ifndef TRIPDB_H_INCLUDED
#define TRIPDB_H_INCLUDED
#include"trip.h"
#include"flighttrip.h"

#include<iterator>
#include<list>
class FlightTripDb
{
    std::list<FlightTrip trips;

public:
    void addtrip(std::string source,std::string desti,std::string flinum,std::string flitype,double fair);
    void removeTrip(std::string);
    flighttrip* findTripById(std::string);
    int countall();
    double computeMaxFare();
    std::string computeMinTravelTime();
    flighttrip* countTripByOperator(std::string);
};

#endif // TRIPDB_H_INCLUDED
