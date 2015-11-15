/***********************************
/************Kevin Gentile**********
/********Ohio University EECE*******
/*************11.14.2015************
/*********Airplane Simulation*******/

#include "Airplane.h"
#include "Runway.h"
#include "simExcept.h"
#include<iostream>
#include<ctime>
#include<queue>
#include<stdlib.h>

bool event(double); //function for checking events based on probability

int main(int time_to_simulate/*, bool air_force_1*/){
	int time = 1; 								//time loop in minutes for simulation
	Airplane* airPlane = NULL;				//Airplane pointer for use in simulation
	priority_queue<Airplane*> landingQ; //Queue for landing
	//Runway run1,run2,run3;				//three availible runways to land on
	bool planeArival = false;				//binary reference for plane arrival
	int minute = 0;

	for(;time != time_to_simulate; minute++){ //time loop
		planeArival = event(0.45); 				//check if a plane is arriving
		if(planeArival){ 						 		//BEGIN new plane case
			airPlane = new Airplane(time);		//create a new plane to use
			if(airPlane->numPass() < 5){ 	 		//check for less than 5 passangers
				//throw exception						//throw exception if true
			}else
				landingQ.push(airPlane);			//add new plane to landingQ
		}													//END new plane case



	}


}

bool event(double prob){ //handles percentage values from 0 - 100%
    srand(time(NULL));
	int rnum = rand() % 101; //generates number from 0 to 100
	if(rnum <= prob*100)
		return true;
		return false;
}
