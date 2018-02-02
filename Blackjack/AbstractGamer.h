#pragma once
#include "BJDataHeader.h"
#include "Card.h"
#include "Deck.h"

class AbstractGamer
{
protected:
	Deck *myDeck;
	int score; //—чЄт игрока
	virtual void calcScore();
public:
	AbstractGamer();
	int getScore();
	Card getLastCard();
	virtual void addCard(Card card);
	virtual ~AbstractGamer();
};

