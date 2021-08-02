#ifndef __MINGW_FIXES_IPHLPAPI_H
#define __MINGW_FIXES_IPHLPAPI_H

#include <iphlpapi.h>

#ifdef __MINGW_FIXES_IPHLPAPI_H_AGAIN
#include_next <iphlpapi.h>
#endif

#else
#define __MINGW_FIXES_IPHLPAPI_H_AGAIN
#endif