#ifndef VULKAN_VIDEO_CODECS_COMMON_H_
#define VULKAN_VIDEO_CODECS_COMMON_H_ 1

/*
** Copyright 2015-2024 The Khronos Group Inc.
**
** SPDX-License-Identifier: Apache-2.0
*/

/*
** This header is generated from the Khronos Vulkan XML API Registry.
**
*/


#ifdef __cplusplus
extern "C" {
#endif



#if !defined(VK_NO_STDINT_H)
    #include <stdint.h>
#endif

#define VK_MAKE_VIDEO_STD_VERSION(major, minor, patch) \
    ((((uint32_t)(major)) << 22) | (((uint32_t)(minor)) << 12) | ((uint32_t)(patch)))


#ifdef __cplusplus
}
#endif

#endif
