#include "Enemy.h"
#include <cmath>

unsigned int Enemy::enemyCount = 0;

Enemy::Enemy()
{
	
	++enemyCount;
	
	texture = LoadTexture("assets/image/enemy.png");
	
	position.x = GetRandomValue(0, GetScreenHeight() - texture.width);
	position.y = GetRandomValue(- texture.height, - texture.height - 200);

	speed = GetRandomValue(20, 50) * 1.0f;	
	
	radius = 50.0f;
	
	movingDown = true;

}

Enemy::~Enemy()
{
	
	--enemyCount;
	
	UnloadTexture(texture);
}

void Enemy::draw() const
{
	
	DrawTexture(texture, position.x, position.y, RAYWHITE);
	
	/*DrawCircle(position.x + texture.width / 2.0f + 2.0f, position.y + texture.height / 2.0f, radius, {0, 0, 255, 100};*/
}

void Enemy::update(float deltaTime)
{
	if(movingDown)
	{
		position.y += speed * deltaTime;
	}
	else
	{
		position.y -= speed * deltaTime;
	}
	
	if(position.y > GetScreenHeight() + texture.height)
	{
		movingDown = false;
		
		position.x = GetRandomValue(0, GetScreenHeight() - texture.width);
		
		speed = GetRandomValue(5, 250) * 1.0f;
	}
	else if(position.y < 0 - texture.height)
	{
		movingDown = true;
		
		position.x = GetRandomValue(0, GetScreenHeight() - texture.width);
		
		speed = GetRandomValue(5, 250) * 1.0f;
		
	}
}

bool Enemy::isOffScreen() const
{
	return position.y > GetScreenHeight();
}

Vector2 Enemy::getPosition() const
{
	return{
		position.x + texture.width / 2.0f,
		position.y + texture.height / 2.0f
	};
}

bool Enemy::checkCollision(const Player &player) const
{
	return CheckCollisionCircles(getPosition(), radius, player.getPosition(), player.getRadius());
}


unsigned int Enemy::getEnemyCount()
{	
	return enemyCount;
}
