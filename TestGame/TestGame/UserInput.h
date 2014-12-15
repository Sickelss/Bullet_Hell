#pragma once
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class UserInput
{
	sf::Vector2f InputVector;
public:
	void Detect();
	void Load();
	const sf::Vector2f &GetInputVector () const { return InputVector; }
};

