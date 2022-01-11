//#define _CRT_SECURE_NO_WARNINGS 1
//1算数操作符 + - * / %
//2移位操作符 >> <<
//右移操作符两种移法1.算术右移：右边丢弃左面补原符号位2.逻辑右移右面丢弃左面补0
//左操作符就是扔左右补0补码移动
//位操作符& | ^ 
//& 1个为0则0，两个1则是1
//| 一个为1则为1，两个为0则为0.
//^ 按位异或同为0不同为1.
//判断一个数存储中有多少个1
//方法1：（算负数会出现问题）
//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数=%d\n", count);
//	return 0;
//}
//方法二
//#include<stdio.h>
//int main()
//{
//	int num;
//	int count = 0;
//	scanf("%d", &num);
//	//while (num != 0)
//	//	{
//	//		int b = num & 1;
//	//		if (b == 1)
//	//		{
//	//			count++;
//	//		}//我写的
//	//		num = num >> 1;
//	//	}
//		//老师写的
//		int i;
//		for (i = 0; i < 32; i++)
//		{
//			if(1==((num>>i)&1))
//				count++;
//		}
//	printf("%d", count);
//	return 0;
//}
//赋值操作符 =
//复合操作符
//单目操作符
// ！ - + & sizeof ~ -- ++ * ()强制类型转换  ~取反取的是二进制数得到补码，打印出的是原码，那么需要先
//减1再取反得到原码再转化为10进制数就能得到打印出的数
//关系操作符> >= <= != == <
//逻辑操作符 &&  ||
//条件操作符？ ：
//逗号表达式 从左向右运算，但是只取最后一个结果
//a = get_val();
//count_val(a);
//while (a > 0)
//{
//	业务处理
//	a = get_val();
//	count_val()
//}
//如果用逗号表达式可以表示为
//while (a = get_val,count_val,a>0)
//{
//	业务处理
//}
//下表引用操作符[]
//函数调用操作符
//结构体
//#include<stdio.h>
//struct student
//{
//	char name[20];
//	int age;
//	char id[20];
//}; 
//int main()
//{
//	int a = 10;
//	struct student std = {"张三",20,"2004123112314"};
//	struct student* p=&std;
//	printf("%d", p->age);
//	printf("%s", (*p).name);
//	printf("%s", std.id);
//	return 0;
//}
// 隐式类型转化
//#include<stdio.h>
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);//c=-126；先将a和b整形提升
//	//，将a和b都通过复制符号位补满整形空间，然后相加得到补码，打印出的是原码
//	//补码符号位为1所以需要减一取反
//	return 0;
//}
//#include<stdio.h>
//int main()
//	char a = 0xb600;
//	short b = 0x213213;
//	int c = 0x12345678;
//	if (a = 0xb600)
//		printf("%d", a);//后面就不打了在整形提升之后的a和b都和原来的值不一样了，
//	//而c就是个整形自然数值就不会出现变化所以只能打印出c
//
//	return 0;
//}
//char c=1;
//printf("%u\n",sizeof(c));1
//printf("%u\n",sizeof(++c));4,c发生了运算所以出现了整形提升，所以打印出的4，%u是打印出无符号整形
//printf("%u\n",sizeof(!c));1
//算数转换
//复杂表达式的求值有三个影响因素
//1.操作符的优先级
//2.操作符的结合性
//3.是否控制求值顺序就比如&& || ？ ：因为会跳过一些运算
//a* b + c * d + e * f
//相邻操作符先算优先级高的，所以这个式子可以先算a * b和c * d再相加算e * f相加
//也可以先算3 * 再2加, 这样都是可以的，但是这样的式子是有问题的，因为没有确切的顺序
//如果前面的运算影响后面的运算就会出现问题。（第三个* 和第一个 + 不知道先后）
//
//c + --c;减减的优先级是高于+的我们无法得知+操作符的获取在右操作数之前还是之后求值
//#include<stdio.h>
//int main()
//{
//	int c = 1;
//	int b = c + --c;
//	printf("%d", b);
//	return 0;
//}
//#include<stdio.h>//错误表达式
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("%d\n", i);
//	return 0;
//}
//错误代码
//调用函数先后不一定






















