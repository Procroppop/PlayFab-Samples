// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#define _ENABLE_EXTENDED_ALIGNED_STORAGE

#include "targetver.h"

#include <iostream>
#include <tchar.h>
#include <WinSock2.h>
#include <WS2tcpip.h>

#include <wrl.h>
#include <wrl/client.h>
#include <d3d11_1.h>

#if defined(NTDDI_WIN10_RS2)
#include <dxgi1_6.h>
#else
#include <dxgi1_5.h>
#endif

#include <WinSock2.h>
#include <DirectXMath.h>
#include <SimpleMath.h>
#include <DirectXColors.h>

#include <SpriteFont.h>
#include <GamePad.h>
#include <Keyboard.h>
#include <Audio.h>

#include <stdint.h>
#include <concurrent_queue.h>

#include <concrt.h>
#include <time.h>
#include <functional>
#include <cinttypes>
#include <cmath>
#include <algorithm>
#include <exception>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>
#include <mutex>
#include <cctype>
#include <map>
#include <queue>
#include <list>
#include <array>
#include <mutex>
#include <random>
#include <limits>

#include <json/value.h>
#include <json/writer.h>
#include <json/reader.h>

#include "StepTimer.h"
#include "Texture.h"

#include "Debug.h"

// The server doesn't need to render gfx or audio
#define THUNDERRUMBLE_SERVER
namespace DX
{
    inline void ThrowIfFailed(HRESULT hr)
    {
        if (FAILED(hr))
        {
            // Set a breakpoint on this line to catch DirectX API errors
            throw std::exception();
        }
    }
}