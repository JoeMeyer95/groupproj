/***********************************
/************Kevin Gentile**********
/********Ohio University EECE*******
/*************11.14.2015************
/*********Airplane Simulation********/

#ifndef AIRPLANE_H
#define AIRPLANE_H
#include<iostream>
#include<ctime>
using namespace std;

class Airplane{
	public:
	Airplane(int);
	int numPass();

	private:
	int arrivalTime; //minutes
	int passengers; //potentially dead people
	int fuel;	//fuel*minutes

};


#endif

