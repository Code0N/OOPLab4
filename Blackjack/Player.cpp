#include "stdafx.h"
#include "Player.h"


Player::Player()
{
}

void Player::calcScore()
{
	if (this->score > 21)
		throw "������� � ������! ���� ���������"; //����������
}

Player::~Player()
{
}
