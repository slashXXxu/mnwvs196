#pragma once
#include <list>
class InPacket;
class OutPacket;

struct MovePath
{
	struct ELEM
	{
		short x, y, vx, vy, offsetX, offsetY, fh, fhFootStart;
		char bMoveAction, bForcedStop, bStat;
		int tElapse, nAttr;
	};
	short m_x, m_y, m_vx, m_vy;
	int m_fhLast, m_tEncodedGatherDuration;

	std::list<ELEM> m_lElem;

	MovePath();
	~MovePath();

	void Decode(InPacket* iPacket);
	void Encode(OutPacket* oPacket);
	
};

