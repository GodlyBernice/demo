#pragma once
#include <iostream>
using namespace std;
const int QueueSize = 1e5+10;
template<typename Element>
class CQueue
{
private:
	Element data[QueueSize];           //存放队列元素
	int front, rear;
public:
	CQueue();
	~CQueue() {};
	void enQueue(Element x);          //入队
	Element deQueue();                //出队，将对头元素返回
	Element getQueue();               //取队头元素
	int empty();                      //判断循环队列是否为空
};

template<typename Element>
inline CQueue<Element>::CQueue()
{
	front = rear = -1;
}

template<typename Element>
inline void CQueue<Element>::enQueue(Element x)
{
	if ((rear + 1) % QueueSize == front)
		throw "上溢";
	rear = (rear + 1) % QueueSize;
	data[rear] = x;
}

template<typename Element>
inline Element CQueue<Element>::deQueue()
{
	if (rear == front)
	{
		cout << "队列为空" << endl;
	}
	front = (front + 1) % QueueSize;
	return data[front];
}
template<typename Element>
inline Element CQueue<Element>::getQueue()
{
	if (rear == front)
	{
		cout << "队列为空" << endl;
	}
	return data[front];
}
template<typename Element>
inline int CQueue<Element>::empty()
{
	if (rear == front)
		return 1;
	else
	return 0;
}
