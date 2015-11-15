/***********************************
/************Kevin Gentile**********
/********Ohio University EECE*******
/*************11.14.2015************
/*********Airplane Simulation*******/

#include"Airplane.h"
#include<ctime>
using namespace std;


Airplane::Airplane(int aTime){
	arrivalTime = aTime;
	passangers = rand(time(NULL)) % 525 + 0;
	fuel = rand(time(NULL)) % 50 + 5
	

}

int Airplane::numPass(){
	return passangers;
}
