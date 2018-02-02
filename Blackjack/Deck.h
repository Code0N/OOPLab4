#pragma once
#include <vector>
#include "BJDataHeader.h"
#include "Card.h"

class Deck
{
private:
	std::vector<Card> cardsList;
public:
	Deck(); //������ ������ ������
	Deck(bool empty); //�������������� ������ �������
	void addCard(Card *card); //��������� ����� �� ���������
	Card getLastCard(); //���������� �����, ������ � �� ������
	void shuffleCards(); //������������ ������
	int getDeckSize();
	~Deck();
};

