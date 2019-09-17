/**
 * @file   Queue.h
 * @author Wang Heyu 
 * @date   Sat Sept 5, 15:54:20 2019
 * 
 * @brief  An implementation of Queue based on LinkedList.
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
    template<typename TYPE> class Queue;

    /**
     * Using C++ heritence to implement Queue based on the Linked List. 
     * TYPE can be char, int, long, double or long double. 
     * 
     */
    template <typename TYPE>
    class Queue : public LinkedList<TYPE>
    {
    public:
	/**
	 * Have to use typename since using typedef inside a 
         * class definition.
	 * 
	 */
	typedef typename LinkedList<TYPE>::Node NODE;
    private:
	NODE *__tail;		/**< The address of the last node. */
    public:
	/** 
	 * Default constructor, if there is no parameter free constructor,
         * then users can not apply a Stack with default form like:
	 *
         * Queue<TYPE> A; 
	 * 
	 * 
	 */
	Queue(){};

	/** 
	 * Constructor with the value @p _val for the first node.
	 * 
	 * @param _val 
	 * 
	 */
	Queue(TYPE _val) : LinkedList<TYPE>(_val) {};

	/** 
	 * The pop function of the Queue, just pop the value of the 
         * first node, then delete it.
	 * 
	 * 
	 * @return The poped value.
	 */
	TYPE pop();

	/** 
	 * Push a new value @p _val to the Queue, should insert to the last 
         * position of the Stack, pointing by the tail.
	 * 
	 * @param _val The new value for pushing.
	 * 
	 * @return 0 for OK, -1 for else.
	 */
	int push(TYPE _val);

	/** 
	 * Check if the Queue is an empty Queue.
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
	~Queue(){};
	
    };
}
#else
// Do nothing.
#endif
