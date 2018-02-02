#pragma once
#include <iostream>
class Card
{
private:
	int cardName;
	int cardSymbol;
	int cardValue;
	friend std::ostream& operator<<(std::ostream& ostr, const Card& card);
public:
	Card(int cName, int cSymbol, int cValue); //��������� ���, ������ ����� ����� � � ���
	//�������
	int getName();
	int getCardSymbol();
	int getCardValue();
	//===
	~Card();
};

