#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

class GameObject
{

	// All the private variables can only be accessed internally
protected:
	// GameObject's name
	std::string m_Name;

	// GameObject's position in world
	Vector2f m_Position;

	// GameObject's sprite (the SFML rendering object)
	Sprite m_Sprite;

	// GameObject's texture to render on the sprite
	Texture m_Texture;

	// Public functions
public:

	// Constructor
	GameObject(std::string name, std::string texturePath);

	// Get the GameObject Name
	std::string getName();

	// Send a copy of the sprite to main
	Sprite getSprite();

	// Get position in world (top left corner of sprite)
	Vector2f getPosition();

	// Get position in world where the center of the sprite is
	Vector2f getCenterPosition();

	// Set position in world (top left corner of sprite)
	void setPosition(Vector2f position);

	// Set position in world at center of sprite
	void setCenterPosition(Vector2f position);

	// Called on GameObject creation
	virtual void start();

	// Called once every frame
	virtual void update(float elapsedTime);

	// Called once every frame during the input phase
	virtual void input();
};