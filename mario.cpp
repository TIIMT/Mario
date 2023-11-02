#include "mario.h"

Mario::Mario() // : m_health(100), m_score(0), m_speed(1), m_jump(3), m_freeFall(0)
{
	m_health = 100;
	m_score = 0;
	m_speed = 1;
	m_jump = 3;
	m_freeFallValue = 0;

	m_image.loadFromFile("image/marios.png");
	m_texture.loadFromImage(m_image);

	m_sprite.setTexture(m_texture);
	m_sprite.setTextureRect(sf::IntRect(0, 163, 63, 70));
}