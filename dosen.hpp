#ifndef __DOSEN_HPP__
#define __DOSEN_HPP__

#include <iostream>
#include "include/person.hpp"
using namespace std;

class dosen : public person {
private:
	string npp;
	string DPT;
	string PDDK;
	string MTKL;

public:
	dosen(string id,string nama, int dd, int mm, int yy,string npp,string DPT,string PDDK, string MTKL);

	void setPDDK(string PDDK);
	string getPDDK();

	void setNPP(string npp);
	string getNPP();

	void setDPT(string DPT);
	string getDPT();

	void setMTKL(string MTKL);
	string getMTKL();
};

#endif 
