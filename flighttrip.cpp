#include<iostream>
#include"FlightTrip.h"

FlightTrip::FlightTrip():flightnum(""),operat("") {}
FlightTrip::FlightTrip(std::string num,std::string ope):flightnum(num),operat(ope) {}
FlightTrip::FlightTrip(std::string source,std::string desti,std::string flinum,std::string flitype,double fair):
    t_source(source),t_dest(desti),t_flinum(flinum),t_flitype(flitype),Fair(fair) {}
int FlightTrip::getDistance()
{
    int m=getsrdis();
    int n=getdesdis();
    return m-n;
}
double FlightTrip::computeFare(double dist)
{
    double fare=dist*10;
    return fare;
}
double FlightTrip::computeTravelTime(double dist)
{
    double time=dist/8.3;
    return time;

}
std::string FlightTrip::getFlightNumber()
{
    return flightnum;
}
std::string FlightTrip::getOperator()
{
    return operat;
}
int FlightTrip::getsrdis()
{
    int srdis;
    std::cin>>srdis;
}
int FlightTrip::getdesdis()
{
    int desdis;
    std::cin>>desdis;
}
double FlightTrip::computeFare()
{
    std::cin>>Fare;
}

