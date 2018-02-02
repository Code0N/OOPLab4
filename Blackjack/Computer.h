#pragma once
#include "AbstractGamer.h"
class Computer :
	public AbstractGamer
{
protected:
	virtual void calcScore();
public:
	Computer();
	virtual ~Computer();
};

