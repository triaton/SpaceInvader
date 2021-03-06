#pragma once
#include "SpriteBase.h"

class Rocket :
	public SpriteBase
{
private:
	float m_power;

public:
	Rocket(float power, float width, float height, std::string path);
	float power() { return m_power; }
};

