// ConsoleApplication7.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"helloclass.h"
#include<iostream>
using namespace std;
HelloClass::HelloClass()
{
		cout << "I am being created";
	}
void HelloClass::sayHello()
{
	cout << "Hello class！" << endl;
}
HelloClass::~HelloClass()
{
	cout << "The class is destroying" << endl;
}

int main()
{
	HelloClass a;
	a.sayHello();
    return 0;
}

