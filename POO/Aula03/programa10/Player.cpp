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
	
} 

 // Verifica limites da tela (tipo colisão )
void Player::CheckScreenLimits()
{
	
}
