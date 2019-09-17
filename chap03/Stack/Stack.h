/**
 * @file   Stack.h
 * @author Wang Heyu 
 * @date   Sat Sept 5, 15:54:20 2019
 * 
 * @brief  An implementation of Stack based on LinkedList.
 * This is a teaching demo for C++ inheritence and iterator, 
 * NOT recommended for any practical job.
 * 
 */

#ifndef __CRAZYFISH__Stack__
#define __CRAZYFISH__Stack__

#include <iostream>
#include <limits>
#include <cstdlib>
#include "LinkedList.h"

namespace CRAZYFISH{
    template<typename TYPE> class Stack;

    /**
     * Using C++ heritence to implement Stack based on the Linked List. 
     * TYPE can be char, int, long, double or long double. 
     * 
     */
    template <typename TYPE>
    class Stack : public LinkedList<TYPE>
    {
    public:
	/**
	 * Have to use typename since using typedef inside a 
         * class definition.
	 * 
	 */
	typedef typename LinkedList<TYPE>::Node NODE; 
    public:
	/** 
	 * Default constructor, if there is no parameter free constructor,
         * then users can not apply a Stack with default form like:
	 *
         * Stack<TYPE> A; 
	 * 
	 * 
	 */
	Stack(){};

	/** 
	 * Constructor with the value @p _val for the first node.
	 * 
	 * @param _val 
	 * 
	 */
	Stack(TYPE _val) : LinkedList<TYPE>(_val) {};

	/** 
	 * The pop function of the Stack, just pop the value of the 
         * first node, then delete it.
	 * 
	 * 
	 * @return The poped value.
	 */
	TYPE pop();

	/** 
	 * Push a new value @p _val to the Stack, should insert to the first 
         * position of the Stack, pointing by the head.
	 * 
	 * @param _val The new value for pushing.
	 * 
	 * @return 0 for OK, -1 for else.
	 */
	int push(TYPE _val);

	/** 
	 * Check if the Stack is an empty Stack.
	 * 
	 * 
	 * @return True for emplty. 
	 */
	bool is_empty();

	/** 
	 * The default destructor.
	 * 
	 * 
	 * @return 
	 */
	~Stack(){};
	
    };
}
#else
// Do nothing.
#endif
