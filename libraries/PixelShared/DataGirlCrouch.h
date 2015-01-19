//generated pixeldata
#ifndef _DataGirlCrouch_h
#define _DataGirlCrouch_h
#include "PixelData.h"
namespace _GirlCrouch_ {
    const uint8_t indices[49] = {
        255
        ,255
        ,255
        ,255
        ,0
        ,0
        ,255
        ,255
        ,255
        ,0
        ,0
        ,0
        ,0
        ,255
        ,255
        ,0
        ,4
        ,4
        ,4
        ,4
        ,255
        ,255
        ,0
        ,4
        ,8
        ,4
        ,8
        ,255
        ,0
        ,0
        ,4
        ,4
        ,4
        ,4
        ,0
        ,255
        ,255
        ,12
        ,12
        ,12
        ,12
        ,255
        ,255
        ,4
        ,8
        ,255
        ,255
        ,8
        ,4
    };
    const uint8_t color[16] = {
        125
        ,90
        ,0
        ,255
        ,255
        ,198
        ,135
        ,255
        ,0
        ,0
        ,0
        ,255
        ,255
        ,255
        ,204
        ,255
    };
}
struct DataGirlCrouch : public PixelDataImpl<DataGirlCrouch> {
       static constexpr uint8_t width() { return 7; }
       static constexpr uint8_t height() { return 7; }
       static constexpr const uint8_t* indices() { return _GirlCrouch_::indices; }
       static constexpr const uint8_t* color() { return _GirlCrouch_::color; }
};
#endif
