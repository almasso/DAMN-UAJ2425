#include "ShotCollisionEvent.h"
#include "ISerializer.h"

ShotCollisionEvent::ShotCollisionEvent(const int bulletID, const double distance, const bool hasHitEnemy, const bool hasKillEnemy):TrackerEvent("ShotCollision"),
_bulletID(bulletID),_distance(distance),_hasHitEnemy(hasHitEnemy),_hasKillEnemy(hasKillEnemy)
{
}

ShotCollisionEvent::~ShotCollisionEvent()
{
}

void ShotCollisionEvent::serialize(ISerializer* serializer)
{
	TrackerEvent::serialize(serializer);
	serializer->serialize(_bulletID, "bulletID");
	serializer->serialize(_distance, "distanceCover");
	serializer->serialize(_hasHitEnemy, "hasHitEnemy");
	serializer->serialize(_hasKillEnemy, "hasKillEnemy");
}
