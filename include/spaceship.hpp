#pragma once
#include <raylib.h>

class Spaceship
{
private:
    Texture2D image;
    Vector2 position;

public:
    Spaceship();
    ~Spaceship();
    void Draw();
    // void MoveLeft();
    // void MoveLeft();
    // void FireLaser();
};