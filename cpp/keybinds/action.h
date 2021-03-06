// Copyright 2015-2015 the openage authors. See copying.md for legal info.

#ifndef OPENAGE_KEYBINDS_ACTION_H_
#define OPENAGE_KEYBINDS_ACTION_H_

namespace openage {
namespace keybinds {

enum class action_t {
	STOP_GAME,
	TOGGLE_HUD,
	SCREENSHOT,
	TOGGLE_DEBUG_OVERLAY,
	TOGGLE_DEBUG_GRID,
	QUICK_SAVE,
	QUICK_LOAD,
	TOGGLE_BLENDING,
	TOGGLE_PROFILER,
	TOGGLE_CONSTRUCT_MODE,
	TOGGLE_UNIT_DEBUG,
	TRAIN_OBJECT,
	ENABLE_BUILDING_PLACEMENT,
	DISABLE_SET_ABILITY,
	SET_ABILITY_MOVE,
	SET_ABILITY_GATHER,
	TOGGLE_CONSOLE
};

struct action_hash {
	int operator()(const action_t& a) const;
};

} //namespace keybinds
} //namespace openage

#endif
