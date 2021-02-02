#include "BaseObjeto.h"


BaseObjeto::BaseObjeto(string fileName)
{
	tex = new Texture();
	tex->loadFromFile(fileName);
	spr = new Sprite();
	spr->setTexture(*tex);

	position.x = 0.0f;
	position.y = 0.0f;
	velocity.x = 0.0f;
	velocity.y = 0.0f;
	acceleration.x = 0.0f;
	acceleration.y = 0.0f;
}

BaseObjeto::~BaseObjeto()
{
	delete spr;
	delete tex;
}

void BaseObjeto::Draw(RenderWindow *wnd)
{
	wnd->draw(*spr);
}
void BaseObjeto::Update(float delta_t)
{
	velocity.x += acceleration.x * delta_t;
	velocity.y += acceleration.y * delta_t;

	position.x += acceleration.x * delta_t;
	position.y += acceleration.y * delta_t;
	spr->setPosition(position);

	acceleration.x = 0.00f;
	acceleration.y = 0.0f; //todas las vueltas pongo la aceleracion en 0
}