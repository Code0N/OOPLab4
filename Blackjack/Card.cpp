#include "stdafx.h"
#include "Card.h"
#include "BJDataHeader.h"




Card::Card(int cName, int cSymbol, int cValue) //Принимает имя карты, масть и вес
{
	Card::cardName = cName;
	Card::cardSymbol = cSymbol;
	Card::cardValue = cValue;
}

int Card::getName()
{
	return Card::cardName;
}

int Card::getCardSymbol()
{
	return Card::cardSymbol;
}

int Card::getCardValue()
{
	return Card::cardValue;
}

Card::~Card()
{
}

std::ostream & operator<<(std::ostream & ostr, const Card & card) //Перегруженный <<
{
	ostr << BJData::cardTitles[card.cardName - 6] << BJData::cardSymbols[card.cardSymbol];
	return ostr;
}
