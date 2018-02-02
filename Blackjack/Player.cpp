#include "stdafx.h"
#include "Player.h"


Player::Player()
{
}

void Player::calcScore()
{
	if (this->score > 21)
		throw "Перебор у игрока! Игра завершена"; //Исключение
}

Player::~Player()
{
}
