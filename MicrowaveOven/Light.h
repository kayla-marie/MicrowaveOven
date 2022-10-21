#pragma once

class Light
{
public:
	Light();
	void toggle();
	inline LightState getCurrentState() const { return currentState; }

private:
	LightState currentState;
};

ref class Light
{
};
Light::Light()
{
	currentState = LightState::Off;
}

void Light::toggle()
{
	currentState = lightTransitions[currentState];
}