#include "UserInput.h"
#include "VTools.h"
using namespace sf;

Keyboard::Key rightIn = Keyboard::Right;
Keyboard::Key leftIn = Keyboard::Left;
Keyboard::Key upIn = Keyboard::Up;
Keyboard::Key downIn = Keyboard::Down;
Keyboard::Key slow = Keyboard::LShift;
Keyboard::Key attack = Keyboard::Z;
Keyboard::Key bomb = Keyboard::X;
Keyboard::Key pause = Keyboard::P;


void UserInput::Load()
{
	//take keyboard settings from userconfig file.

}

void UserInput::Detect()
{
	InputVector.x = 0;
	InputVector.y = 0;

	if (Keyboard::isKeyPressed(rightIn))
	{
		InputVector.x += 1;
	}
	if (Keyboard::isKeyPressed(upIn))
	{
		InputVector.y += -1;
	}
	if (Keyboard::isKeyPressed(leftIn))
	{
		InputVector.x += -1;
	}
	if (Keyboard::isKeyPressed(downIn))
	{
		InputVector.y += 1;
	}
	InputVector = normalized(InputVector);
	if (Keyboard::isKeyPressed(slow))
	{
		InputVector = scalar(InputVector, 0.5);
	}
}