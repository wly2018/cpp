#include "Queue.templates.h"

namespace CRAZYFISH{
#define TYPE char
    template class Queue<TYPE> ;
#undef TYPE

#define TYPE int
    template class Queue<TYPE> ;
#undef TYPE

#define TYPE long
    template class Queue<TYPE> ;
#undef TYPE

#define TYPE float
    template class Queue<TYPE> ;
#undef TYPE

#define TYPE double
    template class Queue<TYPE> ;
#undef TYPE

#define TYPE long double
    template class Queue<TYPE> ;
#undef TYPE
}
