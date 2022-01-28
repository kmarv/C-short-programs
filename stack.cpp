
#include <bits/stdc++.h>


// C++ program printing a sequnce of characters in reverse order using a stack
using namespace std;

// structure to represent a stack
class Stack{
	public :
		int top;
		unsigned size;
		char* array;
};

// function that creates a stack of a given size
Stack* createStack(	unsigned size){
	Stack* stack = new Stack();
	stack->size = size;
	stack->top = -1;
	stack->array = new char[(stack->size * sizeof(char))];
	return stack;
}

// Stack is full when top is equal to last index
int isFull(Stack* stack){
	return stack->top == stack->size - 1;
}

// Stck is empty when topis -1
int isEmpty(Stack* stack){
	return stack->top == -1;
}

// function that adds an item to stack
void push(Stack* stack, char item){
	if (isFull(stack)){
		return;
	}
	stack->array[++stack->top] = item;
}

// function to remove an item from stack
char pop(Stack* stack){
	if (isEmpty(stack)){
		return -1;
	}
	return stack->array[stack->top--];
}


// function to reverse string
void reverse(char str[]){
	
	
	// create satck of size n
	int n = strlen(str);
	
	Stack* stack = createStack(n);
	
	// push all charcters to the stack
	int i;
	for(i=0; i<n; i++){
		push(stack, str[i]);
	}
	
	// pop all characters of string and put them back to str
	for(i=0; i<n; i++){
		str[i] = pop(stack);
	}
}




// main method
int main(){
	char str[] = "ChillWiththebigboys";
	reverse(str);
	cout << "Reversed string :" << str;
	return 0; 
	
	
	return 0;
}