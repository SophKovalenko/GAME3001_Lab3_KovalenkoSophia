#include "Tile.h"
#include "Config.h"
#include"Util.h"
#include "TextureManager.h"

Tile::Tile()
{
	TextureManager::Instance()->load("../Assets/textures/tile.png", "Tile");
	
	auto size = TextureManager::Instance()->getTextureSize("Tile");
	setWidth(size.x);
	setHeight(size.y);
}

Tile::~Tile()
= default;

void Tile::draw()
{
	TextureManager::Instance()->draw("Tile", getTransform()->position.x, getTransform()->position.y, 0, 255, true);

}

void Tile::update()
{
}

void Tile::clean()
{
}
