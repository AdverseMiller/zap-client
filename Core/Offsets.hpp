#pragma once
#include <string>
// https://www.unknowncheats.me/forum/apex-legends/319804-apex-legends-reversal-structs-offsets.html
 
std::string CheatVersion = "Version 1.1.4";
std::string GameVersion = "v3.0.80.27"; // [Miscellaneous]->GameVersion
 
// Core
constexpr long OFF_REGION = 0x140000000; // [Static]->Region
constexpr long OFF_LEVEL = 0x18356c4; // [Miscellaneous]->LevelName
constexpr long OFF_LOCAL_PLAYER = 0x24342B8; // [Miscellaneous]->LocalPlayer
constexpr long OFF_ENTITY_LIST = 0x1F61048; // [Miscellaneous]->cl_entitylist
constexpr long OFF_NAME_INDEX = 0x38; // NameIndex
constexpr long OFF_NAME_LIST = 0xd425fe0; // [Miscellaneous]->NameList
constexpr long OFF_GAMEMODE = 0x0242d460; // [ConVars]->mp_gamemode
constexpr long OFF_SQUAD_ID = 0x0344; // [RecvTable.DT_BaseEntity]->m_squadID
constexpr long OFF_GLOBAL_VARS = 0x18351C0; // [Miscellaneous]->GlobalVars
 
// HUD
constexpr long OFF_VIEWRENDER = 0x76E8738; // [Miscellaneous]->ViewRender
constexpr long OFF_VIEWMATRIX = 0x11a350; // [Miscellaneous]->ViewMatrix
 
// Buttons
constexpr long OFF_INATTACK = 0x76e8820; // [Buttons]->in_attack
constexpr long OFF_IN_JUMP = 0x76e8940; // [Buttons]->in_jump
constexpr long OFF_IN_DUCK = 0x76e8a30; // [Buttons]->in_duck
constexpr long OFF_IN_FORWARD = 0x76e8770; // [Buttons]->in_forward
constexpr long OFF_IN_BACKWARD = 0x76e8798; // [Buttons]->in_backward
constexpr long OFF_TRAVERSAL_START_TIME = 0x2b70; // [RecvTable.DT_LocalPlayerExclusive]->m_traversalStartTime
constexpr long OFF_TRAVERSAL_PROGRESS = 0x2b6c; // [RecvTable.DT_LocalPlayerExclusive]->m_traversalProgress
constexpr long OFF_WALL_RUN_START_TIME = 0x3674; // [RecvTable.DT_LocalPlayerExclusive]->m_wallRunStartTime
constexpr long OFF_WALL_RUN_CLEAR_TIME = 0x3678; // [RecvTable.DT_LocalPlayerExclusive]->m_wallRunClearTime
 
// Player
constexpr long OFF_HEALTH = 0x0328; // [RecvTable.DT_Player]->m_iHealth
constexpr long OFF_MAXHEALTH = 0x0470; // [RecvTable.DT_Player]->m_iMaxHealth
constexpr long OFF_SHIELD = 0x01a0; // [RecvTable.DT_TitanSoul]->m_shieldHealth
constexpr long OFF_MAXSHIELD = 0x01a4; // [RecvTable.DT_TitanSoul]->m_shieldHealthMax
constexpr long OFF_CAMERAORIGIN = 0x1ee0; // [Miscellaneous]->CPlayer!camera_origin
constexpr long OFF_STUDIOHDR = 0x1000; // [Miscellaneous]->CBaseAnimating!m_pStudioHdr
constexpr long OFF_BONES = 0x0db0 + 0x48; // [RecvTable.DT_BaseAnimating]->m_nForceBone
constexpr long OFF_LOCAL_ORIGIN = 0x017c; // [DataMap.C_BaseEntity]->m_vecAbsOrigin
constexpr long OFF_ABSVELOCITY = 0x0170; // [DataMap.C_BaseEntity]->m_vecAbsVelocity
constexpr long OFF_ZOOMING = 0x1be1; // [RecvTable.DT_Player]->m_bZooming
constexpr long OFF_TEAM_NUMBER = 0x0338; // [RecvTable.DT_BaseEntity]->m_iTeamNum
constexpr long OFF_NAME = 0x0481; // [RecvTable.DT_BaseEntity]->m_iName
constexpr long OFF_LIFE_STATE = 0x0690; // [RecvTable.DT_Player]->m_lifeState
constexpr long OFF_BLEEDOUT_STATE = 0x2760; // [RecvTable.DT_Player]->m_bleedoutState
constexpr long OFF_LAST_VISIBLE_TIME = 0x19a0; // [Miscellaneous]->CPlayer!lastVisibleTime
constexpr long OFF_LAST_AIMEDAT_TIME = 0x19a8; // [Miscellaneous]->CWeaponX!lastCrosshairTargetTime
constexpr long OFF_VIEW_ANGLES = 0x2534 - 0x14; // [DataMap.C_Player]->m_ammoPoolCapacity - 0x14
constexpr long OFF_PUNCH_ANGLES = 0x2438; // [DataMap.C_Player]->m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
constexpr long OFF_YAW = 0x223c - 0x8; // [DataMap.C_Player]->m_currentFramePlayer.m_ammoPoolCount - 0x8
constexpr long OFF_MODELNAME = 0x0030; // [DataMap.C_BaseEntity]->m_ModelName
constexpr long OFF_OBSERVER_LIST = 0x1F63068;   //observerList: 48 8B 0D ? ? ? ? 48 85 C9 74 ? 48 8B 01 FF ? ? 48 85 C0 74 ? 48 63 4E 38
constexpr long OFF_OBSERVER_LIST_IN_ARRAY = 0x974; // 0x964 before
constexpr long OFF_SKY_DIVE_STATUS = 0x4784; // [DataMap.C_Player]->m_skydiveState
constexpr long OFF_DUCK_STATUS = 0x2a60; // [DataMap.C_Player]->m_duckState
constexpr long OFF_CENTITY_FLAGS = 0x00c8; // [DataMap.C_Player]->m_fFlags
constexpr long OFF_GRAPPLE = 0x2cc0; // [RecvTable.DT_Player].m_grapple
constexpr long OFF_GRAPPLE_ATTACHED = 0x2d50; // [RecvTable.DT_Player]->m_grappleActive
 
// Weapon
constexpr long OFF_WEAPON_HANDLE = 0x1944; // [RecvTable.DT_Player]->m_latestPrimaryWeapons
constexpr long OFF_WEAPON_INDEX = 0x1788; // [RecvTable.DT_WeaponX]->m_weaponNameIndex
constexpr long OFF_PROJECTILESCALE = 0x04f4 + 0x19d8; // [WeaponSettings]->projectile_gravity_scale + 0x8
constexpr long OFF_PROJECTILESPEED = 0x04ec + 0x19d8; // [WeaponSettings]->projectile_launch_speed
constexpr long OFF_OFFHAND_WEAPON = 0x1954; // [RecvTable.DT_BaseCombatCharacter]->m_latestNonOffhandWeapons
constexpr long OFF_CURRENTZOOMFOV = 0x15e0 + 0x00b8; // [RecvTable.DT_WeaponX]->m_playerData + [RecvTable.DT_WeaponPlayerData]->m_curZoomFOV
constexpr long OFF_TARGETZOOMFOV = 0x15e0 + 0x00bc; // [RecvTable.DT_WeaponX]->m_playerData + [RecvTable.DT_WeaponPlayerData]->m_targetZoomFOV
constexpr long OFF_SKIN = 0x0d68; // [DataMap.C_BaseAnimating]->m_nSkin
constexpr long OFF_TIME_BASE = 0x2088; // [DataMap.C_Player]->m_currentFramePlayer.timeBase
constexpr long OFF_WEAPON_DISCARDED = 0x15a9; // [RecvTable.DT_WeaponX]->m_discarded
constexpr long OFF_VIEWMODELS = 0x2d98; // [RecvTable.DT_Player]->m_hViewModels
constexpr long OFF_IN_RELOAD = 0x15aa; // [RecvTable.DT_WeaponX_LocalWeaponData]->m_bInReload
constexpr long OFF_NEXT_READY_TIME = 0x1568; // [DataMap.CWeaponX]->m_nextReadyTime
 
// Glow
constexpr long OFF_HIGHLIGHT_TYPE_SIZE = 0x34;
constexpr long OFF_GLOW_THROUGH_WALL = 0x26c; //[DT_HighlightSettings].?
constexpr long OFF_GLOW_FIX = 0x278;
constexpr long OFF_GLOW_HIGHLIGHT_ID = 0x29C; //[DT_HighlightSettings].m_highlightServerActiveStates
constexpr long OFF_GLOW_HIGHLIGHTS = 0xB1DA220; // [Miscellaneous]->HighlightSettings
constexpr long OFF_GLOW_ENABLE = 0x27c; // ? unused
 
// Item
constexpr long OFF_CUSTOM_SCRIPT_INT = 0x1568; // [RecvTable.DT_PropSurvival]->m_customScriptInt
