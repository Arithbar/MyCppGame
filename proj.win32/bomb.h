
//在tank 类发起攻击的时候初始化，并设置伤害
#ifndef _BOMB_H_
#define _BOMB_H_
#include "cocos2d.h"
USING_NS_CC;
class Bomb :public Node {
public:
	Bomb(int harm,int distance,int direction);
	~Bomb();

	void bindSprite(Sprite* sprite);

	Sprite* getSprite();
	//获取杀伤力
	int getHarm();


private:
	Sprite* m_sprite;
	//射程
	int m_iHarm;
	int m_idistance = 216;
	int m_iDirection;
};
#endif
