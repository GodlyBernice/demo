#pragma once
#include <iostream>
using namespace std;
template<class Element>
struct Node 
{
	Element data;
	Node<Element> *next;
};

template<typename Element>
class LQueue
{
private:
	Node<Element> * front, *rear;
public:
	LQueue();
	~LQueue();
	void printQueue();
	void enQueue(Element);
	Element deQueue();
	Element getQueue();
	int empty();
};

template<typename Element>
inline LQueue<Element>::LQueue()
{
	Node<Element> *s = new Node<Element>;             //申请头结点
	s->next = nullptr;                 //指针域为空
	front = rear = s;           //头、尾指针指向头结点
}

template<typename Element>
inline LQueue<Element>::~LQueue()
{
	Node<Element>* p = front;
	while (p)
	{
		Node<Element>* q = p;
		p = p->next;
		delete q;
	}
}

template<typename Element>
inline void LQueue<Element>::printQueue()
{
	Node<Element> *s = front;
	while (s->next != nullptr)
	{
		s = s->next;
		cout << s->data << endl;
	}
}

template<typename Element>
inline void LQueue<Element>::enQueue(Element x)
{
	Node<Element> *s = new Node<Element>;
	s->data = x;
	s->next = nullptr;
	rear->next = s;
	rear = s;
}

template<typename Element>
inline Element LQueue<Element>::deQueue()
{
	if (rear == front)
	{
		cout << "队列为空" << endl;
		return "";
	}
	Node<Element> *p = front->next;
	Element x = p->data;         //暂存队头元素
	front->next = p->next;        //摘链
	if (p->next == nullptr)
		rear = front;
	delete p;
	return x;
}

template<typename Element>
inline Element LQueue<Element>::getQueue()
{
	if (rear == front)
	{
		cout << "队列为空" << endl;
		return "";
	}
	Node<Element> *p = front->next;
	Element x = p->data;
	return x;
}

template<typename Element>
inline int LQueue<Element>::empty()
{
	if (rear == front)
		return 1;
	else
	return 0;
}
