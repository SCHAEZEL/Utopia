// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::DustEngine::LuaSystem>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::DustEngine::LuaSystem, Base<UECS::System>>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"RegisterSystem", &Ubpa::DustEngine::LuaSystem::RegisterSystem},
		Field{"RegisterEntityJob", &Ubpa::DustEngine::LuaSystem::RegisterEntityJob},
		Field{"RegisterChunkJob", &Ubpa::DustEngine::LuaSystem::RegisterChunkJob},
		Field{"RegisterJob", &Ubpa::DustEngine::LuaSystem::RegisterJob},
	};
};