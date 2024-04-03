
#include "Sword.h"

void Sword::Initialize() 
{

	swordposition.x = 150;
	swordposition.y = 600;
	this->speed_ = 16.0f;
	this->radius_ = 32.0f;
	this->isShot_ = false;
}

void Sword::Update()
{



}

void Sword::Draw()
{
	if (swordflag == false) 
	{
		Novice::DrawBox(swordposition.x, swordposition.y, radius_, radius_, 0.0f, BLACK, kFillModeSolid);
	}
}

void Sword::OnCollision() 
{

     swordflag = true;

}
