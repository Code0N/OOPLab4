#pragma once
#include "AbstractGamer.h"

class Player :
	public AbstractGamer
{
protected:
	virtual void calcScore();
public:
	Player();
	virtual ~Player();
};

