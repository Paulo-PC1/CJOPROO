#include "Enemy.h"

unsigned int Enemy::enemyCount = 0;

Enemy::Enemy(){
	
	++enemyCount;
	
	texture = LoadTexture("assets/image/enemy.png");
	
	position.x = GetRandomValue(0, GetScreenHeight() - texture.width);
	position.y = GetRandomValue(- texture.height, - texture.height - 200);

	speed = GetRandomValue(20, 140) * 1.0f;	
}

Enemy::~Enemy(){
	
	--enemyCount;
	
	UnloadTexture(texture);
}

void Enemy::draw() const{
	
	DrawTexture(texture, position.x, position.y, RAYWHITE);
}

void Enemy::update(float deltaTime){
	
	position.y += speed * deltaTime;
	
	if(position.y > GetScreenHeight())
	{
		position.x = GetRandomValue(0, GetScreenHeight() - texture.width);
		position.y = GetRandomValue(- texture.height, - texture.height - 200);
	}
	
}

unsigned int Enemy::getEnemyCount(){
	
	return enemyCount;
}
