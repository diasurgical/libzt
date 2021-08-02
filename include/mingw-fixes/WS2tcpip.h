#ifndef __MINGW_FIXES_WS2TCPIP_H
#define __MINGW_FIXES_WS2TCPIP_H

#include <ws2tcpip.h>

#ifdef __MINGW_FIXES_WS2TCPIP_H_AGAIN
#include_next <ws2tcpip.h>
#endif

#else
#define __MINGW_FIXES_WS2TCPIP_H_AGAIN
#endif