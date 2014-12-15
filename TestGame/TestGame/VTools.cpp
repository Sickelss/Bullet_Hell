#include "VTools.h"
#include <cmath>

float magnitude (const sf::Vector2f &v)
{
	return std::sqrt(v.x * v.x + v.y * v.y);
}

sf::Vector2f normalized (const sf::Vector2f &v)
{
	float mag = magnitude(v);
	if (mag == 0.0f)
		return v;
	return v / magnitude(v);
}

sf::Vector2f scalar (const sf::Vector2f &v, float s)
{
	return (v * s);
}