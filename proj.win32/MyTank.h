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
	//����
	int* m_iMp;

	//����ģʽ
	//true Ϊը��
	//false Ϊ�ӵ�
	bool m_bMode=true;
};
#endif
