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
	void initBG();//初始化关卡背景
	Sprite* m_bg1;//精灵一
	Sprite* m_bg2;//精灵二
	
	MyTank* m_mytank;//玩家

};
#endif
