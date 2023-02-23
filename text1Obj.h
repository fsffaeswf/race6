#pragma once
#include "settings.h"
#include "SFML/Graphics.hpp"

struct Text1Obj {
	sf::Font font;
	sf::Text text;
};

void text_init(Text1Obj& textobj, std::string str, sf::Vector2f pos) {
	textobj.font.loadFromFile("DS-DIGIB.ttf");
	textobj.text.setString(str);
	textobj.text.setFont(textobj.font);
	textobj.text.setCharacterSize(64);
	textobj.text.setPosition(pos);

}

void text_draw(sf::RenderWindow& window, const Text1Obj& textobj) {
	window.draw(textobj.text);
}