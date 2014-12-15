#include "Bullet.h"
#include "VTools.h"

using namespace sf;

Bullet::Bullet()
	: MovementSpeed(100.0f), Graphic(5.0f,12)
{
	Graphic.setFillColor(sf::Color::Red);
};

void Bullet::Update(float dt)
{
	MoveVector.x = 1;
	MoveVector.y = 1;
	MoveVector = normalized(MoveVector);
	Graphic.move(MoveVector * MovementSpeed * dt);
	Graphic.rotate(40);
}

void Bullet::Draw(RenderWindow &window)
{
	window.draw(Graphic);
}