#ifndef _MY_TANK_H_
#define _MY_TANK_H_
#include "TankBase.h"
#include "cocos2d.h"
using namespace cocos2d;
class MyTank :public TankBase {
public:
	MyTank();
	~MyTank();

	CREATE_FUNC(MyTank);
	virtual bool init();
	void setMp(int * Mp);
	void setMode();
private:
	//能量
	int* m_iMp;

	//攻击模式
	//true 为炸弹
	//false 为子弹
	bool m_bMode=true;
};
#endif
