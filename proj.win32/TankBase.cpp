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

	//获取精灵图片的大小
	Size size = m_sprite->getContentSize();

	//设置精灵的位置
	m_sprite->setPosition(size.width*0.5f,size.height*0.5f);
	//Node  只是表示一个点，宽高属性默认是0，即无法被撞击，需要设置成和精灵一样的大小
	this->setPosition(size);
}

Sprite* TankBase::getSprite() {
	return m_sprite;
}


//被攻击函数  harm=bomb->getHarm()
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