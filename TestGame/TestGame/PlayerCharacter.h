#ifndef _PLAYERCHARACTER_H
#define _PlAYERCHARACTER_H

#include <SFML/Graphics.hpp>
#include "UserInput.h"
class PlayerCharacter
{
	sf::CircleShape Graphic;
	UserInput Input;
	float MovementSpeed;
public:
	PlayerCharacter();

	void Update (float dt);
	void Draw (sf::RenderWindow &window);
	
};

#endif