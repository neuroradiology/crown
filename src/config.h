/*
 * Copyright (c) 2012-2016 Daniele Bartolini and individual contributors.
 * License: https://github.com/taylor001/crown/blob/master/LICENSE
 */

#pragma once

#include "platform.h"

#define CROWN_VERSION_MAJOR "0"
#define CROWN_VERSION_MINOR "1"
#define CROWN_VERSION_MICRO "13"
#define CROWN_VERSION_STRING CROWN_VERSION_MAJOR "." CROWN_VERSION_MINOR "." CROWN_VERSION_MICRO

#ifndef CROWN_DEBUG
	#define CROWN_DEBUG 0
#endif // CROWN_DEBUG

#ifndef CROWN_DEVELOPMENT
	#define CROWN_DEVELOPMENT 0
#endif // CROWN_DEVELOPMENT

#define CROWN_RELEASE (!CROWN_DEBUG && !CROWN_DEVELOPMENT)

#ifndef CROWN_BUILD_UNIT_TESTS
	#define CROWN_BUILD_UNIT_TESTS 1
#endif // CROWN_BUILD_UNIT_TESTS

#if !defined(CROWN_PHYSICS_BULLET) \
	&& !defined(CROWN_PHYSICS_PHYSX) \
	&& !defined(CROWN_PHYSICS_NULL)

	#ifndef CROWN_PHYSICS_PHYSX
		#define CROWN_PHYSICS_PHYSX 0
	#endif // CROWN_PHYSICS_PHYSX

	#ifndef CROWN_PHYSICS_BULLET
		#define CROWN_PHYSICS_BULLET 1
	#endif // CROWN_PHYSICS_BULLET

	#ifndef CROWN_PHYSICS_NULL
		#define CROWN_PHYSICS_NULL 0
	#endif // CROWN_PHYSICS_NULL
#else
	#ifndef CROWN_PHYSICS_PHYSX
		#define CROWN_PHYSICS_PHYSX 0
	#endif // CROWN_PHYSICS_PHYSX

	#ifndef CROWN_PHYSICS_BULLET
		#define CROWN_PHYSICS_BULLET 0
	#endif // CROWN_PHYSICS_BULLET

	#ifndef CROWN_PHYSICS_NULL
		#define CROWN_PHYSICS_NULL 0
	#endif // CROWN_PHYSICS_NULL
#endif

#if !defined(CROWN_SOUND_OPENAL) \
	&& !defined(CROWN_SOUND_NULL)

	#ifndef CROWN_SOUND_OPENAL
		#define CROWN_SOUND_OPENAL 1
	#endif // CROWN_SOUND_OPENAL

	#ifndef CROWN_SOUND_NULL
		#define CROWN_SOUND_NULL 0
	#endif // CROWN_SOUND_NULL
#else
	#ifndef CROWN_SOUND_OPENAL
		#define CROWN_SOUND_OPENAL 0
	#endif

	#ifndef CROWN_SOUND_NULL
		#define CROWN_SOUND_NULL 0
	#endif
#endif

#ifndef CROWN_DEFAULT_PIXELS_PER_METER
	#define CROWN_DEFAULT_PIXELS_PER_METER 32
#endif // CROWN_DEFAULT_PIXELS_PER_METER

#ifndef CROWN_DEFAULT_WINDOW_WIDTH
	#define CROWN_DEFAULT_WINDOW_WIDTH 1280
#endif // CROWN_DEFAULT_WINDOW_WIDTH

#ifndef CROWN_DEFAULT_WINDOW_HEIGHT
	#define CROWN_DEFAULT_WINDOW_HEIGHT 720
#endif // CROWN_DEFAULT_WINDOW_HEIGHT

#ifndef CROWN_DEFAULT_CONSOLE_PORT
	#define CROWN_DEFAULT_CONSOLE_PORT 10001
#endif // CROWN_DEFAULT_CONSOLE_PORT

#ifndef CROWN_DEFAULT_COMPILER_PORT
	#define CROWN_DEFAULT_COMPILER_PORT 10618
#endif // CROWN_DEFAULT_COMPILER_PORT

#ifndef CROWN_BOOT_CONFIG
	#define CROWN_BOOT_CONFIG "boot"
#endif // CROWN_BOOT_CONFIG

#ifndef CROWN_DATA_DIRECTORY
	#define CROWN_DATA_DIRECTORY "data"
#endif // CROWN_DATA_DIRECTORY

#ifndef CROWN_TEMP_DIRECTORY
	#define CROWN_TEMP_DIRECTORY "temp"
#endif // CROWN_TEMP_DIRECTORY

#ifndef CROWN_BUNDLEIGNORE
	#define CROWN_BUNDLEIGNORE ".bundleignore"
#endif // CROWN_BUNDLEIGNORE

#ifndef CROWN_LAST_LOG
	#define CROWN_LAST_LOG "last.log"
#endif // CROWN_LAST_LOG

#ifndef CROWN_MAX_JOYPADS
	#define CROWN_MAX_JOYPADS 4
#endif // CROWN_MAX_JOYPADS

#ifndef CROWN_MAX_LUA_VECTOR3
	#define CROWN_MAX_LUA_VECTOR3 8192
#endif // CE_MAX

#ifndef CROWN_MAX_LUA_MATRIX4X4
	#define CROWN_MAX_LUA_MATRIX4X4 8192
#endif // CE_MAX

#ifndef CROWN_MAX_LUA_QUATERNION
	#define CROWN_MAX_LUA_QUATERNION 8192
#endif // CE_MAX
