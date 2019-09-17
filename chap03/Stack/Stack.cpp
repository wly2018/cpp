#include "Stack.templates.h"

namespace CRAZYFISH{
#define TYPE char
    template class Stack<TYPE> ;
#undef TYPE

#define TYPE int
    template class Stack<TYPE> ;
#undef TYPE

#define TYPE long
    template class Stack<TYPE> ;
#undef TYPE

#define TYPE float
    template class Stack<TYPE> ;
#undef TYPE

#define TYPE double
    template class Stack<TYPE> ;
#undef TYPE

#define TYPE long double
    template class Stack<TYPE> ;
#undef TYPE
}
