#pragma once

#include "types.h"

struct Banner;

u16 CalculateCRC16FromBannerData(const u8* banner_data);
