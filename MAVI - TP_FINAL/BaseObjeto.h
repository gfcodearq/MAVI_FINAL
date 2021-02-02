#pragma once
#include <SFML/Graphics.hpp>
#include <string>
using namespace sf;
using namespace std;

class BaseObjeto
{
public:
	BaseObjeto(string fileName);
	~BaseObjeto();
	void Draw(RenderWindow* wnd);
	void Update(float delta_t);

	void SetScale(float uniformScale) {spr->setScale(uniformScale, uniformScale);}
	void SetPosition(Vector2f pos) { position = pos; }
	void SetVelocity(Vector2f vel) { velocity = vel; }
	void SetAcceleration(Vector2f acc) { acceleration = acc; }

	Vector2f GetPosition() { return position; }
	Vector2f GetVelocity() { return velocity; }
	Vector2f GetAcceleration() { return acceleration; }

	void AddAcceleration(Vector2f acc)
	{
		acceleration.x += acc.x;
		acceleration.y += acc.y;
	}
private:
	Sprite *spr;
	Texture *tex;
	Vector2f position;
	Vector2f acceleration;
	Vector2f velocity;
};

