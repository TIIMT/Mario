#include "object.h"

Object::Object()
{
}

std::uint32_t Object::getHealth() const noexcept
{
	return  m_health;
}

std::uint32_t Object::getScore() const noexcept
{
	return  m_score;
}

std::uint32_t Object::getSpeed() const noexcept
{
	return  m_speed;
}

std::uint32_t Object::getJump() const noexcept
{
	return m_jump;
}

float Object::getFreeFall() const noexcept
{
	return m_freeFallValue;
}



sf::Sprite& Object::sprite() noexcept
{
	return m_sprite;
}



void Object::setHealth(const std::uint32_t ai_health) noexcept
{
	m_health = ai_health;
}

void Object::setScore(const std::uint32_t ai_score) noexcept
{
	m_score = ai_score;
}

void Object::setSpeed(const std::uint32_t ai_speed) noexcept
{
	m_speed = ai_speed;
}

void Object::setJump(const std::uint32_t ai_jump) noexcept
{
	m_jump = ai_jump;
}

void Object::setFreeFall(const float af_value)
{
	m_freeFallValue = af_value;
}
