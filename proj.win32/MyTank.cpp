#include "MyTank.h"

MyTank::MyTank() {}
MyTank::~MyTank(){}
bool MyTank::init() {
	return true;
}
void MyTank::setMp(int * Mp) {
	this->m_iMp = Mp;
}


void MyTank::setMode() {
	(this->m_bMode == true) ? false : true;
}