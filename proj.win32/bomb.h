
//��tank �෢�𹥻���ʱ���ʼ�����������˺�
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
	//��ȡɱ����
	int getHarm();


private:
	Sprite* m_sprite;
	//���
	int m_iHarm;
	int m_idistance = 216;
	int m_iDirection;
};
#endif
