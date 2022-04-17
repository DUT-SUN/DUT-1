////模拟4S店的工资管理系统，设计多继承的层次结构，
////主要有4类人员：经理、兼职技术人员、销售员和销售经理。
////要求存储这些人的编号、姓名和月工资，计算月工资并显示全部信息。
////月工资计算办法是：经理拿固定月薪8000元，兼职技术人员按每小时100元领取月薪，
//// 销售员按当月销售额的4% 提成，销售经理既拿固定月工资也领取销售提成，
//// 固定月工资为5000元，销售提成为所管辖部门当月销售总额的5‰。
////提示：
////1. 设计管理类对各类人员进行管理，可采用异质数组或者链表存储各类人员，并统计所有人的工资和。
////2. 在主函数中根据用户需求创建不同的人员对象，并对其进行有效的初始化，并以高效的方式输出完成的工资单。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//static double ssum = 0;//总发工资
//
//using namespace std;
//class manage
//{
//protected:
//	int id;
//	char* name;
//	static double sum;//销售额总和
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
//		cout << "编号：" << id << "姓名：" << name << endl;
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
//		cout << id << "号经理:" << name << '\t' << "薪水:" << 8000 << endl;
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
//		cout << id << "号兼职技术人员:" << name << '\t' << "薪水:" <<time*100<< endl;
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
//		cout << id << "号销售员:" << name << '\t' << "薪水:" << 4*partsum / 100 << endl;
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
//		cout << id << "号销售经理:" << name << '\t' << "薪水:" << 5*sum/100 << endl;
//	}
//};
//int main()
//{
//	
//	static double count = 5;
//	manage* p[5];
//	j a(1, "小张");
//	t b(1, "小刘", 4.5);
//	x c1(1, "小马", 56000);
//	x c2(2, "小孙", 120000);
//	xj d(1, "小王");
//	p[0] = &a;
//	p[1] = &b;
//	p[2] = &c1;
//	p[3] = &c2;
//	p[4] = &d;
//	cout << "工资单:" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		p[i]->show();
//	}
//	cout <<"总人数: "<<count<<' '<<"总发薪水:" << ssum;
//}