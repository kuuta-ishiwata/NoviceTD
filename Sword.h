#pragma once

#include <Novice.h>
#include "Vector2.h"
#include "Vector3.h"

class Sword 

{


public:
	void Initialize();

	void Update();

	void Draw();

public:

	Vector2 swordposition;
	float speed_;
	float radius_;
	int isShot_;

	Vector2 Getcenter() { return swordposition; }
	float GetspeedX() { return speed_; }
	float Getradius() { return radius_; }
	int GetIsShot() { return isShot_; }
	
	void Setposition(Vector2 pos) { this->swordposition = pos; }
	void Setspeed(float speed) { this->speed_ = speed; }
	void Setradius(float radius) { this->radius_ = radius; }
	void SetIsShot(int isShot) { this->isShot_ = isShot; }

	void OnCollision();
	

	bool swordflag = false;



};
