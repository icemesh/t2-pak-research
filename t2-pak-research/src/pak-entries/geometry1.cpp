/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#include "geometry1.h"

void Geometry1::DumpInfo(uint8_t* pMem)
{
	GeometryDesc* pGeo = reinterpret_cast<GeometryDesc*>(pMem);
	if (pMem)
	{
		if (pGeo->m_version == 0x35)
		{

		}
	}
}