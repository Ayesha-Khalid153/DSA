#include<iostream>
#include<stack>
using namespace std;

struct node
{
	int data;
	node* next;
};

class mystack
{
	node* head;
	int stacksize;
public:

	mystack()
	{
		head = nullptr;
		stacksize = 0;
	}

	void push(int val)
	{
		node* temp = new node();
		temp->data = val;
		temp->next = head;
		head = temp;
		cout << val << "is pushed.";
		stacksize++;
	}
	void pop()
	{
		if (head == nullptr)
		{
			cout << "Stack is empty";
		}
		node* temp = head;
		head = temp->next;
		temp->next = head;
		delete temp;
		cout << "Element is popped";
		stacksize--;
	}

	bool isEmpty()
	{
		if (head == nullptr)
		{
			cout << "stcak is empty";
		}
		return 0;
	}

};

int main()
{
	mystack s1;
	s1.isEmpty();
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.pop();
	return 0;
}


















































































































































































//
//template<typename T>
//class Stack
//{
//private:
//	struct Node {
//		T data;
//		Node* next;
//		Node(T val) {
//			data = val;
//			next = nullptr;
//		}
//	};
//	Node* top;
//
//public:
//	Stack() {
//
//		top = nullptr;
//	}
//
//	void push(T value) {
//		Node* newNode = new Node(value);
//		newNode->next = top;
//		top = newNode;
//	}
//
//	T pop()
//	{
//		if (IsEmpty())
//		{
//			cout << "Stack is empty so cannot pop";
//		}
//		T val = top->next;
//		Node* temp = top;
//		top = top->next;
//		delete temp;
//		return val;
//	}
//	bool IsEmpty()
//	{
//		return top = nullptr;
//	}
//};
//
//int main()
//{
//	Stack<int> stack;
//	stack.push(1);
//	stack.push(2);
//	stack.push(3);
//	stack.push(4);
//	cout << "stack";
//	while (!stack.IsEmpty())
//	{
//		cout << stack.pop() << " ";
//	}
//}