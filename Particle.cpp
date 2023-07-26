#include "Particle.h"

Particle::Particle() {
	position.x = GetScreenWidth() / 2;
	position.y = GetScreenHeight() - 40 ;

	velocity.x = GetRandomValue(-100, 100) / 100.0f;
	velocity.y = GetRandomValue(-500, -100) / 100.0f;

	unsigned char r = (char)GetRandomValue(0, 128);
	unsigned char b = (char)GetRandomValue(0, 128);
	unsigned char g = (char)GetRandomValue(0, 128);

	color = { r, g, b, 100};

	radius = 10;
}
Particle::~Particle() {

}

void Particle::draw() {
	DrawCircle(position.x, position.y, radius , color);
	color.a -= 1;
}

void Particle::updateMovement() {
	position.x += velocity.x;
	position.y += velocity.y;
}

bool Particle::done() {
	return color.a <= 0;
}
