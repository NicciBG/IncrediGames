#pragma once

#ifdef IG_PLATFORM_WINDOWS
	#ifdef IG_BUILD_DLL
		#define T_API __declspec(dllexport)
	#else
		#define T_API __declspec(dllimport)
	#endif
#else
	#error Tometo only works with Windows!
#endif