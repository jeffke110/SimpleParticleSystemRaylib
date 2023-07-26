#pragma once
#ifndef PARTICLES_H
#define PARTICLES_H

#include "Particle.h"
#include <algorithm>
#include <vector>


class Particles {

public:
	Particles();
	~Particles();

	void addParticle();
	void removeParticle();

	void draw();
	void updateMovement();

private:
	std::vector<Particle> particles;


};


#endif // !PARTICLES_H
