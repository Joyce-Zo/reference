#include<iostream>
using namespace std;

//void Swap01(int a, int b) 
//{  // 值传递，不改变实参
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void Swap02(int* a, int* b)
//{	// 址传递，改变实参
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void Swap03(int &a, int &b)
//{	// &a直接访问实参中的a空间，实现修改实参的效果
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int& test01()
//{
//	int a = 10;	
//	return a;	// a作为局部变量，在栈区 ，函数运行完即销毁，这里仍返回
//}
//
//
//int& test02()
//{
//	static int a = 10;
//	return a;	// a作为静态变量，在全局区，程序运行完由系统释放
//}
//int main()
//{
//
//	int& ref1 = test01();
//	cout << "ref= " << ref1 << endl; // 第一次编译器做了保留，仍能打印
//	cout << "ref= " << ref1 << endl; // 第二次即销毁 
//
//	int& ref2 = test02();
//	cout << "ref= " << ref2 << endl;  
//	cout << "ref= " << ref2 << endl;
//	cout << "ref= " << ref2 << endl; // a在静态区，无论打印多少次，数据都存在
//	cout << "ref= " << ref2 << endl; 
//
//	test02() = 1000;	// 函数作左值，返回引用
////等价于 a = 1000; 在原名上直接修改
//	cout << "ref= " << ref2 << endl;// 在别名上访问
//	cout << "ref= " << ref2 << endl;
//	cout << "ref= " << ref2 << endl;
//	cout << "ref= " << ref2 << endl;
//
//	//int a = 2;
//	//int& b = a;
//	//b = 20;
//	//cout << "a = " << a << endl;
//
//	//int a = 5;
//	////int& b;
//	//int& c = a;
//	//int d = 20;
//	//c = d;  // 赋值操作
//	//int& c = d; // 重定义 
//	//cout << a << c << d << endl;
//
//	return 0;
//}

//void func(int& ref) // 相当于 int* const ref = &a;
//{
//	ref = 303; // ref引用，自动转化为 *ref = 303;
//}
//int main()
//{
//	int a = 101;
//
//	//int& ref = a;// 这里相当于 int *const ref = &a; 即ref是一个指针
//	//ref = 202;	// 这里即 *ref = 202; 不过是编译器自动实现解引用*改变a，不需要我们写*
//	//
//	//cout << ref << endl;
//	//cout << a << endl;
//
//	func(a);
//	cout << a << endl;
//	return 0;
//}

void Print(const int& ref)
{
	//ref = 20;
	cout << "a= " <<ref<< endl;
}
int main()
{

	int a = 10;
	Print(a);

		//int a = 10;    // 先创建变量 a ，再对a引用
	//int& ref1 = a;

	//int& ref2 = 20; // 直接引用一串数字 20

	//const int& ref3 = 30;
	// 相当于 int tmp = 30; const int& ref3 = tmp;
	//ref3 = 10;

	return 0;
}