﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fadein
struct  Fadein_t2096701633  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Fadein::fadeInTime
	float ___fadeInTime_2;
	// UnityEngine.UI.Image Fadein::fadePanel
	Image_t3354615620 * ___fadePanel_3;
	// UnityEngine.Color Fadein::currentColor
	Color_t1588175760  ___currentColor_4;

public:
	inline static int32_t get_offset_of_fadeInTime_2() { return static_cast<int32_t>(offsetof(Fadein_t2096701633, ___fadeInTime_2)); }
	inline float get_fadeInTime_2() const { return ___fadeInTime_2; }
	inline float* get_address_of_fadeInTime_2() { return &___fadeInTime_2; }
	inline void set_fadeInTime_2(float value)
	{
		___fadeInTime_2 = value;
	}

	inline static int32_t get_offset_of_fadePanel_3() { return static_cast<int32_t>(offsetof(Fadein_t2096701633, ___fadePanel_3)); }
	inline Image_t3354615620 * get_fadePanel_3() const { return ___fadePanel_3; }
	inline Image_t3354615620 ** get_address_of_fadePanel_3() { return &___fadePanel_3; }
	inline void set_fadePanel_3(Image_t3354615620 * value)
	{
		___fadePanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___fadePanel_3, value);
	}

	inline static int32_t get_offset_of_currentColor_4() { return static_cast<int32_t>(offsetof(Fadein_t2096701633, ___currentColor_4)); }
	inline Color_t1588175760  get_currentColor_4() const { return ___currentColor_4; }
	inline Color_t1588175760 * get_address_of_currentColor_4() { return &___currentColor_4; }
	inline void set_currentColor_4(Color_t1588175760  value)
	{
		___currentColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif