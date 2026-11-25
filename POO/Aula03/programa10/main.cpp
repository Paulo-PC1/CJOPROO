#include <raylib.h>
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include "Player.h"
#include "Enemy.h"

int main(void)
{
	InitWindow(800, 600, "Programa10ExemploRaylib03");
	
	InitAudioDevice();
	
	SetTargetFPS(60);
	
	ChangeDirectory(GetApplicationDirectory());
	
	float deltaTime;

	Player player;
	
	std::vector<std::unique_ptr<Enemy>> enemies;	

	/*for(int i = 0; i < 5; ++i)
	{
		enemies.emplace_back(std::unique_ptr<Enemy>(new Enemy()));
	}*/
	
	enemies.reserve(10);
	
	for(int i = 0; i < 10; ++i)
	{
		enemies.push_back(std::make_unique<Enemy>());
	}
	
	Music bgMusic = LoadMusicStream("assets/music/music.mp3");
	
	PlayMusicStream(bgMusic);
	
	while(!WindowShouldClose()){
		
		//retorna tempo que last frame foi processado
		deltaTime = GetFrameTime();
		
		UpdateMusicStream(bgMusic);
		
		player.update(deltaTime);
		
		for(auto& enemy : enemies)
		{
			enemy->update(deltaTime);
		}
		
		//erase_if()
		
		enemies.erase(
			remove_if(enemies.begin(), enemies.end(), [&](const auto& enemy){
				if(enemy->checkCollision(player)){
						
					player.takeDamage(10);
						
					return true;
				}	
				return false;
			}),
			
			enemies.end()
		);
		
		
		BeginDrawing();
			
			ClearBackground(BLACK);
		
			player.draw();  
		
			for(const auto& enemy : enemies)
			{
				enemy->draw();
			}
		
		DrawText(TextFormat("Enemies: %d", Enemy::getEnemyCount()), GetScreenWidth() - 130.0f, 20.0f, 22, WHITE);
		
		DrawText(TextFormat("Grogu: %d %%", 1 * player.getHealth()), GetScreenWidth() - 150.0f, 50.0f, 22, WHITE);
		
		EndDrawing();
	}
	
	UnloadMusicStream(bgMusic);
	
	CloseAudioDevice();
	
	CloseWindow();
	
	return 0;
}

