#pragma once
#include <SFML/Graphics.hpp>
#include "PlayerCharacter.h"
#include "Bullet.h"
class Game
{
	sf::RenderWindow Window;
	sf::Clock GameClock;

	PlayerCharacter Absol;
	Bullet Bullet1;

	void Update (float dt);
	void Draw();
public:
	Game();


	void Start ();
};

