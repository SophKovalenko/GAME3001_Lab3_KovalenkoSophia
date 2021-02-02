#pragma once
#ifndef _TILE_
#define _TILE_
#include"DisplayObject.h"

class Tile : public DisplayObject
{
	Tile();

	~Tile();

	void draw() override;
	void update() override;
	void clean() override;
};

#endif // !_TILE_
