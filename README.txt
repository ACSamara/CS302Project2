## List, Stack, and Queue Classes

Classes: Functionality is identical between array-based and linked classes.

    ArrayList: Array based implementation of a list.
    LinkedList: Linked implementation of a list.

    ArrayStack: Array based implementation of a stack.
    LinkedStack: Linked implementation of a stack.

    ArrayQueue: Array based implementation of a queue.
    LinkedQueue: Linked implementation of a queue.

Main program:

    The menu allows testing of each of the 6 classes. 
    The classes are templated and can hold any data type, but in the main function the type is integer for testing purposes.
    Users can choose to test lists, stacks or queues.
    Then, they can choose which version, linked or array-based, to test.

    Lists:
        Users can insert as many items into a specified position as they wish. The list will then be displayed.
        Then, the user can remove as many items from a specified position as they wish. The list will be displayed after each removal.
        If the list is emptied, the program will end early.

    Stacks: 
        Users can push as many items as they wish onto the stack. The stack will then be displayed.
        Then, the user can choose to peek or pop items from the stack until they choose to exit or empty the stack.

    Queues: 
        Users can enqueue as many items as they wish. The queue will then be displayed.
        Then, the user can choose to peek or dequeue items from the queue until they choose to exit or empty the queue.