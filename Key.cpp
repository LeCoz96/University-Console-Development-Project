#include "Key.h"
#include"Image.h"

Key::Key(int x, int y, SDL_Renderer* renderer, LevelRenderer* level)
	: StaticObject{ x, y, renderer, level }
{
	m_key = Image::GetTexture("Assets/Collectable/SilverKey.png", renderer);
}

void Key::Render()
{
	Image::PrintImage(m_renderer, m_key, m_sourceRect, m_destRect);
}

