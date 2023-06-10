#pragma once
#include <iostream>
using namespace std;
const int QueueSize = 1e5+10;
template<typename Element>
class CQueue
{
private:
	Element data[QueueSize];           //��Ŷ���Ԫ��
	int front, rear;
public:
	CQueue();
	~CQueue() {};
	void enQueue(Element x);          //���
	Element deQueue();                //���ӣ�����ͷԪ�ط���
	Element getQueue();               //ȡ��ͷԪ��
	int empty();                      //�ж�ѭ�������Ƿ�Ϊ��
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
		throw "����";
	rear = (rear + 1) % QueueSize;
	data[rear] = x;
}

template<typename Element>
inline Element CQueue<Element>::deQueue()
{
	if (rear == front)
	{
		cout << "����Ϊ��" << endl;
	}
	front = (front + 1) % QueueSize;
	return data[front];
}
template<typename Element>
inline Element CQueue<Element>::getQueue()
{
	if (rear == front)
	{
		cout << "����Ϊ��" << endl;
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
