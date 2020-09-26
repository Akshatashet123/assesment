#include<iostream>
#include"trip.h"


Trip::Trip():source_city(""),destination_city(""),distance(0) {}
Trip::Trip(std::string source,std::string dest):source_city(source),destination_city(dest) {}
Trip::Trip(std::string source,std::string dest,double ditance):source_city(source),destination_city(dest),distance(ditance) {}

std::string Trip::getOrigin()
{
    return source_city;
}
std::string Trip::getDestination()
{
    return destination_city;
}
double Trip::getDistance()
{
    return distance;
}
