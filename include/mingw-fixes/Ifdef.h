#ifndef __MINGW_FIXES_IFDEF_H
#define __MINGW_FIXES_IFDEF_H

#include <ifdef.h>

#ifdef __MINGW_FIXES_IFDEF_H_AGAIN
#include_next <ifdef.h>
#endif

#else
#define __MINGW_FIXES_IFDEF_H_AGAIN
#endif