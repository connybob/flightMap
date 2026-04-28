#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


struct airport{
    string code;
    string name;
    string number;
};

struct flight{
    airport* source = nullptr;
    airport* destination = nullptr;
    int price;
    string airliner = "not added yet";

};

int main()
{

    // make list of all airports
    vector<airport> airportsList;
    string airportString;
    ifstream airports("airports.txt");
    while (getline(airports, airportString)){
        airport tempAirport;
        tempAirport.code = airportString.substr(0,3); // grabs the first 3 charters of each line
        tempAirport.name = airportString.substr(4,14); // grabs the name
        tempAirport.number = airportString.substr(19,12); // grabs the number
        airportsList.push_back(tempAirport); // adds it to list of airports

        //cout << tempAirport.code << endl;
        //cout << tempAirport.name << endl;
        //cout << tempAirport.number << endl;
    }


    vector<flight> flightsList;
    string flightString;
    ifstream flights("flights.txt");
    while (getline(flights, flightString)){ // fill up the flights list vector. each flight is a edge on the map
        flight tempFlight;
        string sourceString;
        string destString;
        string priceString;
        sourceString = flightString.substr(0,3); // grabs the first 3 charters of each line
        destString = flightString.substr(10,3);
        priceString = flightString.substr(5,3); // grabs price as string and truns it into a int

        cout << sourceString << endl;
        cout << destString << endl;
        cout << priceString << endl;
        }
}
