#pragma once
#include "Actor.h"

//2���� ��ǥ�� �ڽ��� �������ϰ� �浹�ϰ� ó���Ѵ�.
//�Է��� ó���Ѵ�.
class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();

	virtual void Tick() override;
};

