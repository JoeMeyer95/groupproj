/***********************************
/************Kevin Gentile**********
/********Ohio University EECE*******
/*************11.14.2015************
/*********Airplane Simulation*******/

#include"Airplane.h"
#include <ctime>
#include <stdlib.h>
using namespace std;


Airplane::Airplane(int aTime){
	arrivalTime = aTime;
	srand(time(NULL));
	passengers = rand() % 525 + 0;
	fuel = rand() % 50 + 5;
}

int Airplane::numPass(){
	return passengers;
}
