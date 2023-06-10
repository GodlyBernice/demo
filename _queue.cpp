// _queue.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>
#include <random>
#include <sstream>
#include <ctime>
#include "CQueue.h"
#include "LQueue.h"
using namespace std;
void showMenu()
{
	cout << "��������Ҫ���������" << endl;
	cout << "1.����У���Ԫ�أ�" << endl;
	cout << "2.����У���Ԫ�أ�" << endl;
	cout << "3.ȡ��ͷ" << endl;
	cout << "4.������" << endl;
	cout << "5.�鿴����" << endl;
	cout << "6.�˳�" << endl;
}
int main()
{
	LQueue<string> lq;
	while (true)
	{
		showMenu();
		int x;
		cin >> x;
		string i;
		string item;
		stringstream ss("");
		char xx = ' ';
		switch (x)
		{
		case 1:
			cin >> i;
			lq.enQueue(i);
			break;
		case 2:
			xx = cin.get();
			while (true)
			{
				xx = cin.get();
				if (xx == '\n')break;
				else i.push_back(xx);
			}
			ss << i;
			while (ss >> item)
			{
				lq.enQueue(item);
			}
			break;
		case 3:
			cout <<"��ͷԪ��"<< lq.getQueue() << endl;
			break;
		case 4:
			cout <<"����Ԫ��"<< lq.deQueue() << endl;
			break;
		case 5:
			cout << "�����е�Ԫ����" << endl;
			lq.printQueue();
			break;
		case 6:
			return 0;
		default:
			cout << "��������" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
	
	stringstream ss;
	string input;
	getline(cin, input);

}

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�
