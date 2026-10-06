# tuple and dict

The code defines 2 different data structures at python (tuple and dict), and then prints their sizes.

The sizes are printed different: 48 and 72 (But this is not guaranteed at every python installation, mine is CPython)

The results came different although what they store is same because list and tuple works differently at python. Firstly, tuples are immutable while lists are mutable. This means whenever we create a tuple at python, python already knows that it will not grow and it will allocate the memory only when it is created.

However, lists are different, since lists are mutable, they can grow! So, to make operations like append() efficient; python can allocate some additional capacity in order to not calling allocation each time we do append. This means, list may have some additional space available for future elements even though it is not used to store references of actual elements (python stores references of objects, not value's itself).
