#include<iostream>
using namespace std;

//void Swap01(int a, int b) 
//{  // ֵ���ݣ����ı�ʵ��
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void Swap02(int* a, int* b)
//{	// ַ���ݣ��ı�ʵ��
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void Swap03(int &a, int &b)
//{	// &aֱ�ӷ���ʵ���е�a�ռ䣬ʵ���޸�ʵ�ε�Ч��
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int& test01()
//{
//	int a = 10;	
//	return a;	// a��Ϊ�ֲ���������ջ�� �����������꼴���٣������Է���
//}
//
//
//int& test02()
//{
//	static int a = 10;
//	return a;	// a��Ϊ��̬��������ȫ������������������ϵͳ�ͷ�
//}
//int main()
//{
//
//	int& ref1 = test01();
//	cout << "ref= " << ref1 << endl; // ��һ�α��������˱��������ܴ�ӡ
//	cout << "ref= " << ref1 << endl; // �ڶ��μ����� 
//
//	int& ref2 = test02();
//	cout << "ref= " << ref2 << endl;  
//	cout << "ref= " << ref2 << endl;
//	cout << "ref= " << ref2 << endl; // a�ھ�̬�������۴�ӡ���ٴΣ����ݶ�����
//	cout << "ref= " << ref2 << endl; 
//
//	test02() = 1000;	// ��������ֵ����������
////�ȼ��� a = 1000; ��ԭ����ֱ���޸�
//	cout << "ref= " << ref2 << endl;// �ڱ����Ϸ���
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
//	//c = d;  // ��ֵ����
//	//int& c = d; // �ض��� 
//	//cout << a << c << d << endl;
//
//	return 0;
//}

//void func(int& ref) // �൱�� int* const ref = &a;
//{
//	ref = 303; // ref���ã��Զ�ת��Ϊ *ref = 303;
//}
//int main()
//{
//	int a = 101;
//
//	//int& ref = a;// �����൱�� int *const ref = &a; ��ref��һ��ָ��
//	//ref = 202;	// ���Ｔ *ref = 202; �����Ǳ������Զ�ʵ�ֽ�����*�ı�a������Ҫ����д*
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

		//int a = 10;    // �ȴ������� a ���ٶ�a����
	//int& ref1 = a;

	//int& ref2 = 20; // ֱ������һ������ 20

	//const int& ref3 = 30;
	// �൱�� int tmp = 30; const int& ref3 = tmp;
	//ref3 = 10;

	return 0;
}