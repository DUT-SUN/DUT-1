////ģ��4S��Ĺ��ʹ���ϵͳ����ƶ�̳еĲ�νṹ��
////��Ҫ��4����Ա��������ְ������Ա������Ա�����۾���
////Ҫ��洢��Щ�˵ı�š��������¹��ʣ������¹��ʲ���ʾȫ����Ϣ��
////�¹��ʼ���취�ǣ������ù̶���н8000Ԫ����ְ������Ա��ÿСʱ100Ԫ��ȡ��н��
//// ����Ա���������۶��4% ��ɣ����۾�����ù̶��¹���Ҳ��ȡ������ɣ�
//// �̶��¹���Ϊ5000Ԫ���������Ϊ����Ͻ���ŵ��������ܶ��5�롣
////��ʾ��
////1. ��ƹ�����Ը�����Ա���й����ɲ������������������洢������Ա����ͳ�������˵Ĺ��ʺ͡�
////2. ���������и����û����󴴽���ͬ����Ա���󣬲����������Ч�ĳ�ʼ�������Ը�Ч�ķ�ʽ�����ɵĹ��ʵ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//static double ssum = 0;//�ܷ�����
//
//using namespace std;
//class manage
//{
//protected:
//	int id;
//	char* name;
//	static double sum;//���۶��ܺ�
//	
//public:
//	manage(int id1, const char* name1)
//	{
//		id = id1;
//		name = new char(strlen(name1) + 1);
//		strcpy(name, name1);
//	}
//	virtual void show()
//	{
//		cout << "��ţ�" << id << "������" << name << endl;
//	}
//};
//double manage::sum = 0;
//class j :public manage
//{
//public:
//	j(int id1,const char*name1 ):manage(id1,name1)
//	{}
//	void show()
//	{
//		ssum += 8000;
//		cout << id << "�ž���:" << name << '\t' << "нˮ:" << 8000 << endl;
//	}
//};
//class t :public manage
//{
//protected:
//	double time;
//public:
//	t(int id1, const char* name1, double time1) :manage(id1, name1)
//	{
//		time = time1;
//	}
//	void show()
//	{
//		ssum += time * 100;
//		cout << id << "�ż�ְ������Ա:" << name << '\t' << "нˮ:" <<time*100<< endl;
//	}
//};
//class x :public manage
//{
//protected:
//	double partsum;
//public:
//	x(int  id1, const char* name1, double partsum1):manage(id1, name1)
//	{
//		partsum = partsum1;
//		sum += partsum;
//		
//	}
//	void show()
//	{
//		ssum += 4 * partsum / 100;
//		cout << id << "������Ա:" << name << '\t' << "нˮ:" << 4*partsum / 100 << endl;
//	}
//	
//};
//class xj :public manage
//{
//public:
//	xj(int id1,const char*name1):manage(id1, name1)
//	{}
//	void show()
//	{
//		ssum += 5 * sum / 100;
//		cout << id << "�����۾���:" << name << '\t' << "нˮ:" << 5*sum/100 << endl;
//	}
//};
//int main()
//{
//	
//	static double count = 5;
//	manage* p[5];
//	j a(1, "С��");
//	t b(1, "С��", 4.5);
//	x c1(1, "С��", 56000);
//	x c2(2, "С��", 120000);
//	xj d(1, "С��");
//	p[0] = &a;
//	p[1] = &b;
//	p[2] = &c1;
//	p[3] = &c2;
//	p[4] = &d;
//	cout << "���ʵ�:" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		p[i]->show();
//	}
//	cout <<"������: "<<count<<' '<<"�ܷ�нˮ:" << ssum;
//}