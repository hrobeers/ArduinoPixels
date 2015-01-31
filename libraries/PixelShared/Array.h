//
//  Array.h
//  Stack allocated array
//      Features:
//          * Bounds checking in DEBUG builds
//          * reset() method
//
//  Created by Hans Robeers on 2015/01/21.
//
//

#ifndef PixelGameLocal_Array_h
#define PixelGameLocal_Array_h

#include <type_traits>

#ifdef DEBUG
    #include <assert.h>
#endif

inline void assert_d(bool
#ifdef DEBUG
        assertion)
{
        assert(assertion);
#else
){
#endif
}

template<typename T, int Size>
class Array
{
    T _array[Size] = {};

public:
    inline T& operator[](int idx) {
        assert_d(idx>=0);
        assert_d(idx<Size);
        return _array[idx];
    }

    inline const T& operator[](int idx) const {
        assert_d(idx>=0);
        assert_d(idx<Size);
        return _array[idx];
    }

    // Call .reset() on each element
    template <bool EnableBool = true>
    inline typename std::enable_if<!std::is_pointer<T>::value && EnableBool>::type
    resetAll() {
        for (int i=0; i<Size; i++)
            _array[i].reset();
    }

    template <bool EnableBool = true>
    inline typename std::enable_if<std::is_pointer<T>::value && EnableBool>::type
    resetAll() {
        for (int i=0; i<Size; i++)
            if (_array[i])
                _array[i]->reset();
    }
};

#endif // PixelGameLocal_Array_h
