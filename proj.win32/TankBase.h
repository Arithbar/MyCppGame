
//所有tank的基类
//其位置需要在场景类里面设置
#ifndef _TANK_BASE_H_
#define _TANK_BASE_H_
#include "GlobalData.h"
#include "cocos2d.h"
USING_NS_CC;

class TankBase:public Node
{
	public:
		//constructor
		TankBase();

		~TankBase();
		//绑定精灵
		void bindSprite(Sprite* sprite);
		//获取精灵
		Sprite * getSprite();
		//设置血量
		//void setHp(int Hp);

		void ishited(int harm);
		//已经死亡否
		void died();
	private:
		//实体图片
		Sprite * m_sprite;
		//血量
		int m_iHp;
		//速度
		int m_iSpeed;
		//方向
		int m_iDirection;
		//伤害
		//int m_iHarm=50;
};
#endif
