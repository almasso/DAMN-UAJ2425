#pragma once
#include "TrackerEvent.h"

class ShotCollisionEvent : public TrackerEvent
{
public:
	ShotCollisionEvent(const int bulletID, const double distance,const bool hasHitEnemy,const bool hasKillEnemy);
	~ShotCollisionEvent();
	void serialize(ISerializer* serializer) override;

private:
	const int _bulletID;
	const double _distance;
	const bool _hasHitEnemy;
	const bool _hasKillEnemy;
};
