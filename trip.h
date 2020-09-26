#ifndef TRIP_H_INCLUDED
#define TRIP_H_INCLUDED
#include<iostream>
class Trip
{
    std::string source_city;
    std::string destination_city;
    double distance;
   Trip();
   Trip(std::string,std::string);
   Trip(std::string,std::string,double);
    virtual double computeFare()=0;
    virtual  void computeTraveltime()=0;
    std::string getOrigin();
    std::string getDestination();
    double getDistance();
};


#endif // TRIP_H_INCLUDED
