#include"trip.h"
#include"flighttrip.h"
#include"tripdb.h"

#include<iterator>
#include<list>
std::list<FlightTrip> trips;

void FlightTripDb::addTrip(std::string source,std::string desti,std::string flinum,std::string flitype,double fair)
{

    trips.push_back(FlightTrip(source,desti,flinum,flitype,fair));
}

void FlightTripDb::removeTrip(std::string num)
{
    std::list<FlightTrip> :: iterator it;

    for(it=trips.begin(); it!=trips.end(); it++)
    {
        if( it->getflightnum()==it)
        {
            trips.erase(it);
            break;
        }
    }

}
FlightTrip* FlightTripDb::findTripById(std::string id)
{
    std::list<FlightTrip> :: iterator it;

    for(it=trips.begin(); it!=trips.end(); it++)
    {
        if(id == it->getflightnum())
        {
            return &(*it);
        }
    }

}

int FlightTripDb::removeTrip()
{

    return trips.size();

}
double FlightTripDb::computeMaxFare()
{
    std:: list<FlightTrip> :: iterator it=trips.begin();
    auto maxFare = it->getfair();
    it++;
    for(it=trips.begin(); it!=trips.end(); ++it)
    {
        if(maxFare < it->getfair())
        {
           maxFare = it->getfair();

        }

    }
    returnmaxFare;
}

std::string FlightTripDb::computeMinTravelTime()
{
    std:: list<FlightTrip> :: iterator it=trips.begin();
    auto minTime=it->computeTraveltime();
    it++;
    for(it=trips.begin(); it!=trips.end(); ++it)
    {
        if(minTime < it->computeTraveltime())
        {
            minTime = it->computeTraveltime();

        }

    }
    return minTime;
}


FlightTrip* countTripsByOperator(std::string optr)
{

    std::list<FlightTrip> :: iterator it;

    for(it=trips.begin(); it!=trips.end(); it++)
    {
        if(optr == it->getoperator())
        {
            return &(*it);
        }
    }

}
























