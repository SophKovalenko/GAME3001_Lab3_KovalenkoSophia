#include "Tile.h"
#include "Config.h"
#include"Util.h"

Tile::Tile()
{
	setWidth(Config::TILE_SIZE);
	setWidth(Config::TILE_SIZE);
}

Tile::~Tile()
= default;

void Tile::draw()
{
	Util::DrawRect(getTransform()->position, getWidth(), getHeight());
}

void Tile::update()
{
}

void Tile::clean()
{
}
