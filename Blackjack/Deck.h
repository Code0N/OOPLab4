#pragma once
#include <vector>
#include "BJDataHeader.h"
#include "Card.h"

class Deck
{
private:
	std::vector<Card> cardsList;
public:
	Deck(); //Создаёт пустую колоду
	Deck(bool empty); //Инициализирует колоду картами
	void addCard(Card *card); //Добавляет карту по указателю
	Card getLastCard(); //Возвращает карту, удаляя её из колоды
	void shuffleCards(); //Перемешивает колоду
	int getDeckSize();
	~Deck();
};

