# Dual Stack Implementation in C++
This code represents the implementation of two stacks within a single array. The aim is to utilize the array space efficiently by allowing two stacks to grow towards each other. When one stack grows, it grows from one end of the array, while the other grows from the opposite end. This way, as long as the two stacks don't "meet", you can keep pushing elements onto either stack.

# How it Works:
Initialization: When a dual stack of size n is initialized, one stack's top (let's call it top1) is initialized to -1 indicating that it's empty and starts from the beginning of the array. The other stack's top (top2) starts from the end of the array, initialized to n.

# Push Operations:

push1(int data): This method pushes data onto the first stack. It first checks if there's space left (i.e., if top1 and top2 are not adjacent). If there's space, it increments top1 and places the data in the array at that position.
push2(int data): This method pushes data onto the second stack. Similarly, it checks for space and then decrements top2 and places the data in the array at that position.
# Pop Operations:

pop1(): Pops the top element from the first stack.
pop2(): Pops the top element from the second stack.
Print:

print(): This method prints the current state of the array. It also prints top1 to show where the first stack's top currently is.
# Example Usage:
The main function demonstrates how to use this dual stack:

Stack s(10);
s.push1(20);
s.print();
s.push1(30);
s.print();
s.push1(40);
s.print();

s.pop1();
s.print();
s.pop1();
s.print();
s.pop1();
s.print();
This will push elements onto the first stack and then pop them off, while also printing the state of the array after each operation.

# Limitations:
Once the two stacks meet (i.e., top1 and top2 are adjacent), no more elements can be pushed onto either stack even if there is space in the middle of the array.
The current implementation does not return the popped value. Instead, it just adjusts the top of the respective stack.
In the current implementation, the pop2() method doesn't reset the array value back to 0 or another default value, which might be a good idea for clarity.
You can expand or refine this README further based on the specific requirements or context in which the code will be used.
