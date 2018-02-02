#include "stdafx.h"
#include "Computer.h"


Computer::Computer()
{
}

void Computer::calcScore()
{
	if (this->score > 21)
		throw "Перебор у компьютера! Игра завершена";
}

Computer::~Computer()
{
}
