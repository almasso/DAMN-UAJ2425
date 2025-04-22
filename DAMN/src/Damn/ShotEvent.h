#pragma once
#include "TrackerEvent.h"

class ShotEvent: public TrackerEvent
{
public:
	ShotEvent(int weapon, const int bulletID, const std::string info);
	~ShotEvent();
	void serialize(ISerializer* serializer) override;

private:
	int _weapon;
	const int _bulletID;
	const std::string _weaponsInfo;
};

