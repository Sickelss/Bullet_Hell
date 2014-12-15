#include "PlayerCharacter.h"

using namespace sf;


PlayerCharacter::PlayerCharacter()
	: MovementSpeed(250.0f), Graphic(5.0f,12)
{
	Graphic.setFillColor(sf::Color::Cyan);
};

void PlayerCharacter::Update(float dt)
{
	Input.Detect();
	Graphic.move(Input.GetInputVector() * MovementSpeed * dt);
}

void PlayerCharacter::Draw(sf::RenderWindow &window)
{
	window.draw(Graphic);
}
