#include "stdafx.h"
#include "AbstractGamer.h"


void AbstractGamer::calcScore() //Бросок исключения, будет переопределён в наследниках
{
	if (this->score > 21)
		throw "Перебор!";
}

AbstractGamer::AbstractGamer()
{
	AbstractGamer::myDeck = new Deck();
	AbstractGamer::score = 0;
}

int AbstractGamer::getScore()
{
	return AbstractGamer::score;
}

Card AbstractGamer::getLastCard()
{
	return AbstractGamer::myDeck->getLastCard();
}

void AbstractGamer::addCard(Card card) //Берёт карту в свою колоду
{
	AbstractGamer::myDeck->addCard(&card);
	AbstractGamer::score += card.getCardValue();
	this->calcScore();
}


AbstractGamer::~AbstractGamer()
{
	delete AbstractGamer::myDeck;
}
