//#include "Player.h"
#include "TankBase.h"

TankBase::TankBase() {
	m_sprite = NULL;
}

TankBase::~TankBase() {
}

void TankBase::bindSprite(Sprite* sprite) {
	this->m_sprite=sprite;
	this->addChild(m_sprite);

	//��ȡ����ͼƬ�Ĵ�С
	Size size = m_sprite->getContentSize();

	//���þ����λ��
	m_sprite->setPosition(size.width*0.5f,size.height*0.5f);
	//Node  ֻ�Ǳ�ʾһ���㣬�������Ĭ����0�����޷���ײ������Ҫ���óɺ;���һ���Ĵ�С
	this->setPosition(size);
}

Sprite* TankBase::getSprite() {
	return m_sprite;
}


//����������  harm=bomb->getHarm()
void TankBase::ishited(int harm) {
	if (getSprite() == NULL) {
		return;
	}
	m_iHp -= harm;
	if (m_iHp<=0)
	{
		this->died();
	}
}

void TankBase::died() {
	this->setVisible(false);
	//delete this;
	
}