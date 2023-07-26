#pragma once
#ifndef PARTICLE_H
#define PARTICLE_H

#include "raylib.h"
#include <iostream>

class Particle {

public:
	Particle();
	~Particle();

	void draw();
	void updateMovement();
	bool done();

private:
	Vector2 position;
	Vector2 velocity;
	Color color;
	int radius;


};


#endif // !PARTICLE_H
