#include "Player.h"

// Construtor
Player::Player() 
{
	texture = LoadTexture("assets/image/player.png"); // Carrega textura do player
	
	// Define posição inicial do player
	position.x = (GetScreenWidth() - texture.width) / 2.0f; // ou * 0.5f
	position.y = GetScreenHeight() - texture.width - 10.0f;
	
	// Velocidade de Movimento player
	speed = 150.0f;
}

// Destrutor
Player::~Player() 
{
	UnloadTexture(texture);	// Descarregatextura player
}

// Desenha player na tela
void Player::draw() const
{
	DrawTexture(texture, position.x, position.y, RAYWHITE); // Rendeniza o player na tela
} 

// Atualiza lógica do player
void Player::update(float deltaTime)
{
	if(IsKeyDown(KEY_D)){
		position.x += speed * deltaTime;
	}
	if(IsKeyDown(KEY_A)){
		position.x -= speed * deltaTime;
	}
	if(IsKeyDown(KEY_W)){
		position.y -= speed * deltaTime;
	}
	if(IsKeyDown(KEY_S)){
		position.y += speed * deltaTime;
	}
	
	CheckScreenLimits();
} 

 // Verifica limites da tela (tipo colisão )
void Player::CheckScreenLimits()
{
	// Verifica se esbarrou nas bordas e impede de passa-las
	if(position.x <= 0){
		position.x = 0;
	}
	if(position.x + texture.width >= GetScreenWidth()){
		position.x = GetScreenWidth() - texture.width;
	}
	if(position.y <= 0){
		position.y = 0;
	}
	if(position.y + texture.height >= GetScreenHeight()){
		position.y = GetScreenHeight() - texture.height;
	}
}
