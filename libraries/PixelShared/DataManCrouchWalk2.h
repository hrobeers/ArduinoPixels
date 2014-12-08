//generated pixeldata
#ifndef _DataManCrouchWalk2_h
#define _DataManCrouchWalk2_h
#include "PixelData.h"
namespace _ManCrouchWalk2_ {
    const uint8_t indices[48] = {
        255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,4
        ,0
        ,4
        ,0
        ,255
        ,255
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,8
        ,8
        ,8
        ,8
        ,255
        ,4
        ,0
        ,255
        ,255
        ,4
        ,255
    };
    const uint8_t color[12] = {
        0
        ,0
        ,0
        ,255
        ,255
        ,198
        ,135
        ,255
        ,34
        ,59
        ,169
        ,255
    };
}
struct DataManCrouchWalk2 : public PixelDataImpl<DataManCrouchWalk2> {
       static constexpr uint8_t width() { return 6; }
       static constexpr uint8_t height() { return 8; }
       static constexpr const uint8_t* indices() { return _ManCrouchWalk2_::indices; }
       static constexpr const uint8_t* color() { return _ManCrouchWalk2_::color; }
};
#endif
