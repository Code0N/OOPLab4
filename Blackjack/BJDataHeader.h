#pragma once

//Здесь хранятся необходимые для игры данные и константы

namespace BJData
{
	const char DECK_SIZE = 36; //Размер колоды
	const char cardTitles[9] = { '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A' }; //Имена карты
	const char cardSymbols[4] = { '\x3', '\x4', '\x5', '\x6' }; //Символы масти карты
};