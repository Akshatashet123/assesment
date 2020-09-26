#ifndef FLIGHTTRIP_H_INCLUDED
#define FLIGHTTRIP_H_INCLUDED

#include"trip.h"
#include<iostream>

class FlightTrip : public Trip
{
public:
    std::string t_source,t_dest,t_flinum,t_flitype;
    std::string flightnum;
    std::string operat;

    double Fair;

    int getDistance();
   FlightTrip();
   FlightTrip(std::string,std::string);
   FlightTrip(std::string source,std::string desti,std::string flinum,std::string flitype,double fair);
    double computeFare(double dist);
    double computeTraveltime(double dist);
    std::string getFlightNumber();
    std::string getOperator();
    int getsrdis();
    int getdesdis();
    double computeFare();

};


#endif // FLIGHTTRIP_H_INCLUDED
