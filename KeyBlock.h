#pragma once
#include "StaticObject.h"
class KeyBlock :
    public StaticObject
{
public:
    KeyBlock(int x, int y, SDL_Renderer* renderer, LevelRenderer* level);
    ~KeyBlock() = default;
    void Render()override;
private:
    SDL_Texture* m_keyBlock;
};

