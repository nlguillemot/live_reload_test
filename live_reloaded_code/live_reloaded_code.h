#pragma once

#ifdef LIVE_RELOADED_CODE_EXPORTS
#define LIVE_RELOADED_CODE_API __declspec(dllexport)
#else
#define LIVE_RELOADED_CODE_API __declspec(dllimport)
#endif

extern "C" LIVE_RELOADED_CODE_API void live_reloaded_code();
