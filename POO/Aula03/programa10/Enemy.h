#pragma once

#include <raylib.h>

class Enemy {
	
public:
	
	Enemy();
	
	~Enemy();
	
	void draw() const;
	
	void update(float deltaTime);
	
	static unsigned int getEnemyCount();

private:
	
	Texture2D texture;
	Vector2 position;
	float speed;
	static unsigned int enemyCount;
};
