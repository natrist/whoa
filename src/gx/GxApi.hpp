#ifndef GX_GXAPI_HPP
#define GX_GXAPI_HPP

#include "gx/CGxCaps.hpp"
#include "gx/CGxFormat.hpp"
#include "gx/Types.hpp"
#include <cstdint>

class CRect;

extern const char** g_gxShaderProfileNames[GxShTargets_Last];

CGxCaps* GxCaps(void);

bool GxCapsWindowHasFocus(int32_t);

void GxCapsWindowSize(CRect&);

void GxFormatColor(CImVector&);

void GxLogOpen();

#endif
