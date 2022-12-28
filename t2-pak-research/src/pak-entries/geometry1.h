/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#pragma once
#include "../utils/stringid.h"
#include <cinttypes>

namespace Geometry1
{
	struct ShaderInfo;
	struct SubMeshDesc;
	struct unkStruct_0xA0;
	struct MaterialInstanceDesc;

	struct GeometryDesc
	{
		uint32_t m_version;								///< <c>0x00</c>: always 0x35 ?
		uint32_t m_isForeground;						///< <c>0x04</c>: set to 1 if its an actor
		int32_t m_numSubMeshDesc;						///< <c>0x08</c>: 
		uint32_t m_numA0_Structs;						///< <c>0x0C</c>: 
		uint32_t m_numMaterials;						///< <c>0x10</c>: 
		uint32_t m_numTextures;							///< <c>0x14</c>: 
		uint32_t m_numShaders;							///< <c>0x18</c>: 
		uint32_t m_unk6;								///< <c>0x1C</c>: always 0 ?
		uint32_t m_unk7;								///< <c>0x20</c>: 
		uint32_t m_unk8;								///< <c>0x24</c>: 
		SubMeshDesc* m_pSubMeshDescTable;				///< <c>0x28</c>: 
		unkStruct_0xA0** m_unkPtr2_elemSize_0xA0;		///< <c>0x30</c>:
		void* m_papTransform;							///< <c>0x38</c>: m_paTransform;
		void* m_pTextureStuff;							///< <c>0x40</c>:
		MaterialInstanceDesc* m_paMaterialInstanceDesc;	///< <c>0x48</c>: array of MaterialInstanceDesc
		void* m_unkPtr6_elemSize_0x130;					///< <c>0x48</c>:
	};

	struct SubMeshDesc//0xB0; 
	{
		uint32_t field_0;
		uint32_t field_4;
		uint32_t field_8;
		float field_C;
		float field_10;
		uint32_t field_14;
		float field_18;
		float field_1C;
		const char* m_name;
		int32_t field_28;
		int32_t field_2C;
		void* field_30;
		uint32_t field_38;
		uint32_t field_3C;
		void* field_40;
		void* field_48;
		uint32_t field_50;
		uint32_t field_54;
		uint32_t field_58;
		uint32_t field_5C;
		uint32_t field_60;
		uint32_t field_64;
		uint32_t field_68;
		uint32_t field_6C;
		uint32_t field_70;
		uint32_t field_74;
		void* field_78;
		void* field_80;
		uint32_t field_88;
		uint32_t field_8C;
		uint32_t field_90;
		uint32_t field_94;
		uint32_t field_98;
		uint32_t field_9C;
		uint32_t field_A0;
		uint32_t field_A4;
		uint64_t field_A8;
	};

	struct unkStruct_0xA0
	{
		uint32_t field_0;
		uint32_t field_4;
		uint32_t field_8;
		float field_C;
		float field_10;
		uint32_t field_14;
		float field_18;
		float field_1C;
		uint32_t field_20;
		float field_24;
		float field_28;
		float field_2C;
		const char* m_name;
		StringId64 m_nameId; //StringId64 of the name
		void* field_40;
		void* field_48;
		uint32_t field_50;
		uint32_t field_54;
		uint32_t field_58;
		uint32_t field_5C;
		uint32_t field_60;
		uint32_t field_64;
		uint32_t field_68;
		uint32_t field_6C;
		uint32_t field_70;
		uint32_t field_74;
		uint32_t field_78;
		uint32_t field_7C;
		uint32_t field_80;
		uint32_t field_84;
		uint32_t field_88;
		uint32_t field_8C;
		uint32_t field_90;
		uint32_t field_94;
		uint32_t field_98;
		uint32_t field_9C;
	};

	struct MaterialInstanceDesc //0x130
	{
		const char* m_effectDebugName;	///< <c>0x00</c>:
		const char* m_effectName;		///< <c>0x08</c>:
		StringId64 m_effectId;			///< <c>0x10</c>:
		uint8_t m_unk[0x118];
	};

	void DumpInfo(uint8_t* pMem);
}