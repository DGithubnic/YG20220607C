#pragma once

//2���� ��ǥ�� �ڽ��� �������ϰ� �浹�ϰ� ó���Ѵ�.
class AActor
{
public:
	AActor();
	virtual ~AActor();

	char Shape;
	int X;
	int Y;
	bool bCollision;
	
	virtual void Tick();
	virtual void Render();
};

