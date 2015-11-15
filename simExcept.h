/***********************************
/************Kevin Gentile**********
/********Ohio University EECE*******
/*************11.14.2015************
/*********Airplane Simulation*******/

#ifndef SIMEXCEPT_H
#define SIMECEPT_H
#include<iostream>
#include<fstream>
class Exception{
	public:
		//virtual Exception() = 0;
        void fileOutput(std::ostream& outs);

	private:
		string type;

};

class airplaneDiversion : private Exception {

};
#endif


