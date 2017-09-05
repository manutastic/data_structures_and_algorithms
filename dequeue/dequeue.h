// ADT Dequeue

#ifndef _DEQUEUE_H_
#define _DEQUEUE_H_

template <typename E>
class Dequeue {
    public:
        virtual void push_front(E element) = 0;
        virtual void push_back(E element) = 0;
        virtual E pop_front(void) = 0;
        virtual E pop_back(void) = 0;
        virtual E peek_front(void) = 0;
        virtual E peek_back(void) = 0;
        virtual size_t length(void) = 0;
        virtual bool is_empty(void) = 0;
        virtual bool is_full(void) = 0;
        virtual void clear(void) = 0;
        virtual ~Dequeue() {}; 
};

#endif