
//����tank�Ļ���
//��λ����Ҫ�ڳ�������������
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
		//�󶨾���
		void bindSprite(Sprite* sprite);
		//��ȡ����
		Sprite * getSprite();
		//����Ѫ��
		//void setHp(int Hp);

		void ishited(int harm);
		//�Ѿ�������
		void died();
	private:
		//ʵ��ͼƬ
		Sprite * m_sprite;
		//Ѫ��
		int m_iHp;
		//�ٶ�
		int m_iSpeed;
		//����
		int m_iDirection;
		//�˺�
		//int m_iHarm=50;
};
#endif
