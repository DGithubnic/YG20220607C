#pragma once
#include "Actor.h"

//2���� ��ǥ�� �ڽ��� �������ϰ� �浹�ϰ� ó���Ѵ�.
//�Է��� ó���Ѵ�.
class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();
	APlayer(int NewX, int NewY, char NewShape, bool bNewCollision = false);


	virtual void Tick() override;
};

