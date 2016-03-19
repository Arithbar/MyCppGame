#include "Bomb.h"

Bomb::Bomb(int harm,int distance, int direction) {
	this->m_iHarm = harm;
	this->m_idistance = distance;
	this->m_iDirection = direction;
};

Bomb::~Bomb() {};

void Bomb::bindSprite(Sprite* sprite) {
	this->m_sprite = sprite;
}

Sprite* Bomb::getSprite() {
	return this->m_sprite;
}
int Bomb::getHarm() {
	return this->m_iHarm;
}
