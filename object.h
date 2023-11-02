#pragma once
#ifndef OBJECT_H
#define OBJECT_H

#include "stdafx.h"

class Object
{
public:
	Object();

	Object(const Object&) = delete;
	Object& operator =(const Object&) = delete;

	[[nodiscard]] virtual std::uint32_t getHealth()const noexcept;
	[[nodiscard]] virtual std::uint32_t getScore()const noexcept;
	[[nodiscard]] virtual std::uint32_t getSpeed()const noexcept;
	[[nodiscard]] virtual std::uint32_t getJump()const noexcept;
	[[nodiscard]] virtual float			getFreeFall()const noexcept;

	[[nodiscard]] virtual sf::Sprite&   sprite()noexcept;

	virtual void setHealth(const std::uint32_t)noexcept;
	virtual void setScore(const std::uint32_t)noexcept;
	virtual void setSpeed(const std::uint32_t)noexcept;
	virtual void setJump(const std::uint32_t)noexcept;
	virtual void setFreeFall(const float);
protected:
	float m_freeFallValue;

	std::uint32_t m_health;
	std::uint32_t m_score;
	std::uint32_t m_speed;
	std::uint32_t m_jump;

	sf::Sprite m_sprite;
	sf::Texture m_texture;
	sf::Image m_image;
};

#endif