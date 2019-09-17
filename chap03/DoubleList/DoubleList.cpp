#include "DoubleList.templates.h"

namespace CRAZYFISH{
#define TYPE char
    template class DoubleList<TYPE> ;
#undef TYPE

#define TYPE int
    template class DoubleList<TYPE> ;
#undef TYPE

#define TYPE long
    template class DoubleList<TYPE> ;
#undef TYPE

#define TYPE float
    template class DoubleList<TYPE> ;
#undef TYPE

#define TYPE double
    template class DoubleList<TYPE> ;
#undef TYPE

#define TYPE long double
    template class DoubleList<TYPE> ;
#undef TYPE
}
