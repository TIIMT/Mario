#pragma once
#ifndef MARIO_H
#define MARIO_H

#include "stdafx.h"

class Mario : public Object
{
public:

	Mario();

	Mario(const Mario&) = delete;
	Mario& operator =(const Mario&) = delete;
};

#endif