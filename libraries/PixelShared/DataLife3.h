//generated pixeldata
#ifndef _DataLife3_h
#define _DataLife3_h
#include "PixelData.h"
namespace _Life3_ {
    const uint8_t indices[25] = {
        255
        ,0
        ,255
        ,0
        ,255
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,0
        ,4
        ,4
        ,8
        ,255
        ,4
        ,4
        ,8
        ,255
        ,255
        ,255
        ,8
        ,255
        ,255
    };
    const uint8_t color[12] = {
        156
        ,156
        ,156
        ,255
        ,249
        ,0
        ,0
        ,255
        ,180
        ,0
        ,0
        ,255
    };
}
class DataLife3 : public PixelDataImpl<DataLife3> { 
public:
       static int width() { return 5; }
       static int height() { return 5; }
       static const uint8_t* indices() { return _Life3_::indices; }
       static const uint8_t* color() { return _Life3_::color; }
};
#endif
