#pragma once
#include <SFML\Graphics.hpp>
class Bullet
{
public:
	sf::CircleShape Graphic;
	float MovementSpeed;
	sf::Vector2f MoveVector;

	Bullet();

	void Update (float dt);
	void Draw (sf::RenderWindow &window);
};

