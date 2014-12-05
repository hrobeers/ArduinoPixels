//generated pixeldata
#ifndef _DataManCrouch_h
#define _DataManCrouch_h
#include "PixelData.h"
namespace _ManCrouch_ {
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
        ,0
        ,4
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
class DataManCrouch : public PixelDataImpl<DataManCrouch> { 
public:
       static int width() { return 6; }
       static int height() { return 8; }
       static const uint8_t* indices() { return _ManCrouch_::indices; }
       static const uint8_t* color() { return _ManCrouch_::color; }
};
#endif
