#pragma once

#ifdef MD_PLATFORM_WINDOWS
	#ifdef MD_BUILD_DLL
		#define MIDNA_API __declspec(dllexport)
	#else
		#define MIDNA_API __declspec(dllimport)
	#endif
#else
	#error Game_eninge only supports Windows! 
#endif

