#include "stdafx.h"
#include "Deck.h"
#include <algorithm>
#include <vector>
#include "Card.h"


Deck::Deck()
{
	Deck::cardsList.reserve(BJData::DECK_SIZE);
}

Deck::Deck(bool empty) //Заполнение вектора картами
{
	int tempName;
	int tempSymbol;
	int tempValue; //Вес карты
	for (char i = 0; i < BJData::DECK_SIZE; i++)
	{
		tempName = i % 9;
		tempSymbol = i % 4;
		if ((tempName >= 0) && (tempName < 4))
			tempValue = tempName + 6;
		else if (tempName == 8)
			tempValue = 11;
		else
			tempValue = tempName - 3;
		Deck::cardsList.push_back(Card(tempName, tempSymbol, tempValue));
	}
}

void Deck::addCard(Card * card)
{
	Deck::cardsList.push_back(*card); //Добавление карты в вектор
}

Card Deck::getLastCard() //Возвращает последнюю карту в векторе и удаляет её
{
	Card card = Deck::cardsList.back();
	Deck::cardsList.pop_back();
	return card;
}

void Deck::shuffleCards() //Перемешивает карты стандартным алгоритмом
{
	std::random_shuffle(Deck::cardsList.begin(), Deck::cardsList.end());
}

int Deck::getDeckSize() //Количество карт в колоде
{
	return Deck::cardsList.size();
}


Deck::~Deck()
{
	for (char i = 0; i < Deck::cardsList.size(); i++)
		Deck::cardsList[i].~Card(); //Вызов деструктора
}
