#pragma once
#include "SFML/Graphics.hpp"

using namespace sf;

class Coche
{
public:
	Coche();
	void update(float delta_t);
	Sprite get_sprite() { return *spr_coche; };
private:
	Sprite* spr_coche;
	Texture* txt_coche;
	Vector2f velocidad;
	Vector2f aceleracion;
};