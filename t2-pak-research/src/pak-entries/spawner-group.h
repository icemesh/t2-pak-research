/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#pragma once

#include "../utils/stringid.h"
#include <cinttypes>

namespace EntitySpawnerGroup
{
	struct PropertyValue
	{
		uint16_t	m_typeId;
		uint16_t	m_unk;
		void*		m_pValue;
	};

	struct Property
	{
		StringId64		m_id;
		PropertyValue*	m_pVal;
	};

	struct SchemaProperties
	{
		Property* m_pPropertyTable;
		int64_t m_numProperties;
	};

	struct EntitySpawner
	{
		float				m_posX;				///< <c>0x00</c>: float
		float				m_posY;				///< <c>0x04</c>: float
		float				m_posZ;				///< <c>0x08</c>: float
		float				m_posW;				///< <c>0x0C</c>: unk
		float				m_rotX;				///< <c>0x10</c>: float
		float				m_rotY;				///< <c>0x14</c>: float
		float				m_rotZ;				///< <c>0x18</c>: float
		float				m_rotW;				///< <c>0x1C</c>: float
		uint8_t				m_unk[0x30];
		const char*			m_spawnerName;		///< <c>0x50</c>: spawner name
		uint8_t				m_unk2[0x18];		///< <c>0x58</c>: 
		StringId64			m_processType;		///< <c>0x70</c>: StringId of the process type
		const char*			m_artGroup;			///< <c>0x78</c>: art group name
		uint32_t			m_spawnerFlags;		///< <c>0x80</c>: spawner flags
		uint32_t			m_pad;				///< <c>0x84</c>: padding probably
		uint8_t*			m_pLevel;			///< <c>0x88</c>: used to store the pointer to the level class
		EntitySpawner*		m_pParentSpawner;	///< <c>0x90</c>: ptr to the parent spawner
		SchemaProperties*	m_pSchemaProperty;	///< <c>0x98</c>: ptr to the schema property
		uint32_t			m_hasLoginData;		///< <c>0xA0</c>: used to store the level name
	};

	struct SpawnerGroup
	{
		uint64_t		m_unk;					///< <c>0x00</c>: alwasy 0. A pointer gets stored here later
		EntitySpawner** m_apEntitySpawners;	///< <c>0x08</c>: EntitySpawner table
		int64_t			m_numSpawners;			///< <c>0x10</c>: number of spawners
	};

	void DumpInfo(uint8_t* pMem);
}