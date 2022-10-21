#include "Light.h"

Light::Light()
{
	currentState = LightState::Off;
}

void Light::toggle()
{
	currentState = lightTransitions[currentState];
}
