#include "ShotEvent.h"
#include "ISerializer.h"

ShotEvent::ShotEvent(int weapon, const int bulletID, const std::string info):TrackerEvent("Shot"),_weapon(weapon),_bulletID(bulletID),_weaponsInfo(info)
{
}

ShotEvent::~ShotEvent()
{
}

void ShotEvent::serialize(ISerializer* serializer)
{
	TrackerEvent::serialize(serializer);
	serializer->serialize(_weapon, "weaponUsed");
	serializer->serialize(_bulletID, "bulletID");
	serializer->serialize(_weaponsInfo, "otherWeaponsInfo");
}
