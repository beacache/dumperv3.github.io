/*
 * bo v1.2.1ar (alpha rewrite)
 * Roblox Version: version-df7528517c6849f7
 * Total Offsets: 37
 */

#pragma once
#include <cstdint>

namespace offsets {
    inline constexpr const char* roblox_version = "version-df7528517c6849f7";

    namespace DataModel {
        inline constexpr uintptr_t CreatorId = 0x188;
        inline constexpr uintptr_t GameId = 0x190;
        inline constexpr uintptr_t JobId = 0x138;
        inline constexpr uintptr_t PlaceVersion = 0x1B0;
        inline constexpr uintptr_t Pointer = 0x7E35858;
        inline constexpr uintptr_t PrimitiveCount = 0x434;
        inline constexpr uintptr_t ServerIP = 0x5E0;
        inline constexpr uintptr_t Workspace = 0x178;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t Pointer = 0x7E35858;
        inline constexpr uintptr_t RealDataModel = 0x1C0;
    }

    namespace Instance {
        inline constexpr uintptr_t AttributeContainer = 0x50;
        inline constexpr uintptr_t AttributeList = 0x18;
        inline constexpr uintptr_t AttributeToNext = 0x58;
        inline constexpr uintptr_t AttributeToValue = 0x18;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t Name = 0xB0;
        inline constexpr uintptr_t Parent = 0x68;
        inline constexpr uintptr_t This = 0x8;
    }

    namespace Misc {
        inline constexpr uintptr_t StringLength = 0x10;
    }

    namespace MouseService {
        inline constexpr uintptr_t InputObject = 0x100;
        inline constexpr uintptr_t MousePosition = 0xEC;
        inline constexpr uintptr_t SensitivityPointer = 0x77CF190;
    }

    namespace PlayerConfigurer {
        inline constexpr uintptr_t Pointer = 0x7E12FD8;
    }

    namespace RenderView {
        inline constexpr uintptr_t LightingValid = 0x148;
        inline constexpr uintptr_t SkyValid = 0x2C0;
    }

    namespace TaskScheduler {
        inline constexpr uintptr_t Pointer = 0x7AD4030;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t Dimensions = 0x720;
        inline constexpr uintptr_t FakeDataModel = 0x700;
        inline constexpr uintptr_t Pointer = 0x79E9468;
        inline constexpr uintptr_t RenderView = 0x800;
    }

    namespace Workspace {
        inline constexpr uintptr_t CurrentCamera = 0x4A0;
        inline constexpr uintptr_t DistributedGameTime = 0x4B8;
        inline constexpr uintptr_t ReadOnlyGravity = 0xA28;
        inline constexpr uintptr_t World = 0x3D8;
    }

    namespace World {
        inline constexpr uintptr_t FallenPartsDestroyHeight = 0x1C8;
        inline constexpr uintptr_t Gravity = 0x1D0;
        inline constexpr uintptr_t Primitives = 0x240;
    }

}
