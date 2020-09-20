#include "circular_queue.h"

int main()
{
    circular *que = create_circular_queue(5);
    add_to_queue(que,10);
    add_to_queue(que,27);
    add_to_queue(que,4);
    add_to_queue(que,2);
    add_to_queue(que,9);
    print_circular_queue(que);
    delete_from_queue(que);
    print_circular_queue(que);
    add_to_queue(que,10);
    print_circular_queue(que);
    delete_from_queue(que);
    delete_from_queue(que);
    print_circular_queue(que);
    add_to_queue(que,4);
    add_to_queue(que,2);
    print_circular_queue(que);
    delete_from_queue(que);
    delete_from_queue(que);
    delete_from_queue(que);
    delete_from_queue(que);
    print_circular_queue(que);
    delete_from_queue(que);
    print_circular_queue(que);
    return 0;
}
