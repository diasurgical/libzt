#ifndef __MINGW_FIXES_WINDOWS_H
#define __MINGW_FIXES_WINDOWS_H

#include <windows.h>

#ifdef __MINGW_FIXES_WINDOWS_H_AGAIN
#include_next <windows.h>
#endif

#else
#define __MINGW_FIXES_WINDOWS_H_AGAIN
#endif