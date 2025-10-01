What is the value of the postfix expression 6 3 2 4 + – *?
ans:
6 3 2 4 + - *

Step 1: Solve 2 4 +
Copy
Edit
2 + 4 = 6
Now the expression becomes:
6 3 6 - *

Step 2: Solve 3 6 -
Copy
Edit
3 - 6 = -3
Now the expression becomes:
6 -3 *

Step 3: Solve 6 * -3
Copy
Edit
6 * -3 = -18
Final Answer:
-18

///////////////////////////////
In the worst case, the number of comparisons needed to search a singly linked list of length n for a given element is
ans:n
////////////////////////////////
Let P be a singly linked list. Let Q be the pointer to an intermediate node x in the list. 
What is the worst-case time complexity of the best known algorithm to delete the node Q from the list?

A
O(n)
To delete a node Q from a singly linked list,
 we need to modify the next pointer of the node that precedes Q to point to the node that follows Q. 
 However,in a singly linked list, we cannot traverse the list backwards from a given node, 
 so we need to start from the beginning of the list to find the node that precedes Q.

Therefore, the worst-case time complexity of the best known algorithm to delete the node Q from the list is O(n),
 where n is the length of the list. 
 This is because we may need to traverse the entire list to find the node that precedes Q.

However, if we have a pointer to the node that precedes Q,
 the deletion operation can be performed in O(1) time complexity, since we can simply modify the next pointer of that node to skip over Q.
 But, if we do not have a pointer to the node that precedes Q, 
 we need to start from the beginning of the list and traverse the list to find it, 
 which takes O(n) time complexity in the worst case
 /////////////////////////////////////////////////////////////////////////////////
 What is the worst case time complexity of inserting n elements into an empty linked list,
  if the linked list needs to be maintained in sorted order ?
  ans:Θ(n^2)

  If we want to insert n elements into an empty linked list that needs to be maintained in sorted order,
   the worst-case time complexity would be O(n^2).
    This is because we would need to traverse the list for each element we want to insert,
   to find the correct position for the element in the sorted list.
  ///////////////////////////////////////////////////////////////////
  The five items: A, B, C, D, and E are pushed in a stack, one after other starting from A. 
  The stack is popped four items and each element is inserted in a queue. 
  The two elements are deleted from the queue and pushed back on the stack.
   Now one item is popped from the stack. The popped item is
   ans D 
   When five items: A, B, C, D, and E are pushed in a stack: Order of stack becomes:
    A, B, C, D, and E (A at the bottom and E at the top.) 
    stack is popped four items and each element is inserted in a queue: Order of queue: 
    B, C, D, E (B at rear and E at the front) Order of stack after pop operations = A. 
    Two elements deleted from the queue and pushed back on the stack:
     New order of stack = A, E, D(A at the bottom, D at the top)
    As D is on the top so when pop operation occurs D will be popped out. So, correct option is (D).
  
