#ifndef __MINGW_FIXES_WINSOCK2_H
#define __MINGW_FIXES_WINSOCK2_H

#include <winsock2.h>

#ifdef __MINGW_FIXES_WINSOCK2_H_AGAIN
#include_next <winsock2.h>
#endif

#else
#define __MINGW_FIXES_WINSOCK2_H_AGAIN
#endif