/***********************************
/************Kevin Gentile**********
/********Ohio University EECE*******
/*************11.14.2015************
/*********Airplane Simulation*******/

#ifndef AIRPLANE_H
#define AIRPLANE_H
#include<iostream>
using namespace std;

class Airplane{
	public:
	Airplane(int);
	int numPass();
	
	private:
	int arrivalTime; //minutes
	int passangers; //pe0ple
	int fuel;	//fuel*minutes
	
};


#endif
//lets test this bitch
