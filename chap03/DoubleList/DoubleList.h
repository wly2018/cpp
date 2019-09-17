/**
 * @file   DoubleList.h
 * @author Wang Heyu 
 * @date   Sat Sept 4, 15:54:20 2019
 * 
 * @brief  An implementation of double List.
 * This is a teaching demo for C++ inheritence and iterator, 
 * NOT recommended for any practical job.
 * 
 */

#ifndef __CRAZYFISH__DoubleList__
#define __CRAZYFISH__DoubleList__

#include <iostream>
#include <limits>
#include <cstdlib>
#include "LinkedList.h"

namespace CRAZYFISH{
    template<typename TYPE> class DoubleList;

    /**
     * Using C++ heritence to implement Double List based on a Single 
     * Linked List. TYPE can be char, int, long, double or long double. 
     * 
     */
    template <typename TYPE>
    class DoubleList : public LinkedList<TYPE>
    {
    public:
	class Node : LinkedList<TYPE>::Node
	{
	public:
	    Node *next;
	    Node *prev;

	    /** 
	     * The default constructor.
	     * 
	     */
	    Node()
	    {
		next = NULL;
		prev = NULL;
	    };

	    /** 
	     * Constructor, with the value is _d.
	     * 
	     * @param _d The value to set.
	     */
	    Node(TYPE _d) : LinkedList<TYPE>::Node(_d)
	    {
		next = NULL;
		prev = NULL;
	    };

	    /** 
	     * The default destructor.
	     * 
	     */
	    ~Node(){};
	};
    };
}
#else
// Do nothing.
#endif
