// _queue.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	cout << "输入你想要操作的序号" << endl;
	cout << "1.入队列（单元素）" << endl;
	cout << "2.入队列（多元素）" << endl;
	cout << "3.取队头" << endl;
	cout << "4.出队列" << endl;
	cout << "5.查看队列" << endl;
	cout << "6.退出" << endl;
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
			cout <<"队头元素"<< lq.getQueue() << endl;
			break;
		case 4:
			cout <<"出队元素"<< lq.deQueue() << endl;
			break;
		case 5:
			cout << "队列中的元素有" << endl;
			lq.printQueue();
			break;
		case 6:
			return 0;
		default:
			cout << "输入有误" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
	
	stringstream ss;
	string input;
	getline(cin, input);

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
