#include "actor.h"
#include "info.h"
#include "p_local.h"
#include "s_sound.h"
#include "a_action.h"
#include "m_random.h"
#include "a_sharedglobal.h"
#include "a_hexenglobal.h"
#include "i_system.h"
#include "gi.h"
#include "g_level.h"
#include "p_enemy.h"
#include "a_weaponpiece.h"
#include "doomstat.h"
#include "p_lnspec.h"
#include "p_terrain.h"
#include "m_bbox.h"
#include "v_palette.h"
#include "g_game.h"
#include "p_blockmap.h"
#include "r_utility.h"
#include "p_maputl.h"
#include "p_spec.h"
#include "serializer.h"

// Include all the Hexen stuff here to reduce compile time
#include "a_clericholy.cpp"
#include "a_clericmace.cpp"
#include "a_clericstaff.cpp"
#include "a_fighteraxe.cpp"
#include "a_fighterhammer.cpp"
#include "a_fighterplayer.cpp"
#include "a_fighterquietus.cpp"
#include "a_flechette.cpp"
#include "a_flies.cpp"
#include "a_healingradius.cpp"
#include "a_heresiarch.cpp"
#include "a_hexenspecialdecs.cpp"
#include "a_iceguy.cpp"
#include "a_korax.cpp"
#include "a_magecone.cpp"
#include "a_magelightning.cpp"
#include "a_magestaff.cpp"
#include "a_serpent.cpp"
#include "a_spike.cpp"
#include "a_teleportother.cpp"
