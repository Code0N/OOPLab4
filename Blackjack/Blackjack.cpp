// Blackjack.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "BJDataHeader.h"
#include "Card.h"
#include "Computer.h"
#include "Deck.h"
#include "Player.h"
#include <ctime>
#include "Windows.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); //Не помогло
	SetConsoleOutputCP(1251);
	Deck* deckmas[3];
	for (char i = 0; i < 4; i++)
	{
		deckmas[i] = new Deck(true);
		deckmas[i]->shuffleCards();
	}
	Computer *comp = new Computer();
	Player *igrok = new Player();
	char answer;
	char rate[255];
	std::cout << "Ваша ставка?";
	std::cin >> rate;
	while(true)
	{
		try
		{
			srand(time(0));
			comp->addCard(deckmas[rand() % 4]->getLastCard());
			std::cout << "Колоды: [" << deckmas[0]->getDeckSize() << "] [" << deckmas[1]->getDeckSize() << "] [" << deckmas[2]->getDeckSize() << "] [" << deckmas[3]->getDeckSize() << ']' << std::endl;
			std::cout << "Карты компьютера: " << comp->getLastCard() << std::endl;
			std::cout << "Счёт компьютера " << comp->getScore() << std::endl;
			igrok->addCard(deckmas[rand() % 4]->getLastCard());
			std::cout << "Карты игрока: " << igrok->getLastCard() << std::endl;
			std::cout << "Счёт игрока " << igrok->getScore() << std::endl;
			std::cout << "Что делать дальше?" << std::endl << "1. Взять" << std::endl << "2. Хватит" << std::endl;
			std::cin >> answer;
			if (answer == '2')
				break;
		}
		catch (char *catchedMessage)
		{
			std::cout << catchedMessage << std::endl;
			break;
		}
	}

	for (char i = 0; i < 4; i++)
		delete deckmas[i];

	system("pause");
	
	return 0;
}

