#include "Queue.h"
#include <iostream>

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << q.peek() << std::endl;

    std::cout << q.peek() << std::endl;
    
    return 0;
}