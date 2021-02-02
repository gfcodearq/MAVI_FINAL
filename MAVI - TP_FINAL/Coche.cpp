#include "Coche.h"

Coche::Coche()
{
	txt_coche = new Texture;
	txt_coche->loadFromFile("coche.png");

	spr_coche = new Sprite(*txt_coche);
	spr_coche->setPosition(400, 400);

	velocidad.x = 0;
	velocidad.y = -3;

	//aceleracion.x = 0;
	//aceleracion.y = 9.81;
}

void Coche::update(float delta_t)
{
	//velocidad.y += aceleracion.x * delta_t;
	spr_coche->setPosition(spr_coche->getPosition().x + velocidad.x * delta_t,spr_coche->getPosition().y + velocidad.y * delta_t);
}