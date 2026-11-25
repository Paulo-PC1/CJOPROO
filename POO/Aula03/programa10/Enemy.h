#pragma once

#include "Player.h"

class Enemy {
	
public:
	
	Enemy();
	
	~Enemy();
	
	void draw() const;
	
	void update(float deltaTime);
	
	bool isOffScreen() const;
	
	Vector2 getPosition() const;
	
	bool checkCollision(const Player &player) const;
	
	static unsigned int getEnemyCount();

private:
	
	Texture2D texture;
	Vector2 position;
	float speed;
	float radius;
	bool movingDown;
	static unsigned int enemyCount;
	
};
