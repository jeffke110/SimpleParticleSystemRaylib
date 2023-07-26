
#include "Particles.h"


Particles::Particles() {
	//for (int i = 0; i < numParticles; i++) {
	//	particles.push_back(Particle());
	//}
	particles.push_back(Particle());
}
Particles::~Particles() {


}

void Particles::draw() {
	for (Particle& p : particles) {
		p.draw();
	}
}

void Particles::updateMovement() {
	std::for_each(particles.begin(), particles.end(), [](Particle& p) { p.updateMovement(); });
}

void Particles::addParticle() {
	particles.push_back(Particle());
}

void Particles::removeParticle() {
	auto it = std::remove_if(particles.begin(), particles.end(), [](Particle& p) { return p.done();  });
	particles.erase(it, particles.end());
	
}