#ifndef _TOLL_GATE_SCENE_H_
#define _TOLL_GATE_SCENE_H_
#include "cocos2d.h"
using namespace cocos2d;
class MyTank;
class TollGateScene :public Layer
{
public:
	static Scene* createScene();
	virtual bool init();
	CREATE_FUNC(TollGateScene);
	
private:
	void initBG();//��ʼ���ؿ�����
	Sprite* m_bg1;//����һ
	Sprite* m_bg2;//�����
	
	MyTank* m_mytank;//���

};
#endif
