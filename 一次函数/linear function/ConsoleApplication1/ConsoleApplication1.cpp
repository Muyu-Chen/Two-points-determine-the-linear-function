/*
此文件通过两点法求出K值，再通过一个方程求出B值
创建时间：                      2019/3/30   21：23
作者：                          傅邓文
所有修改者请留下大名或昵称：    傅邓文

最后修改时间：                  2019/3/30                             2019/3/31 19：32
版本：                            v1.0                                      v2.0
修改内容：                         无         增加了k与b的大小判断，为零的时候不写，为±1的时候则不写1
				   _ooOoo_
				  o8888888o
				  88" . "88
				  (| -_- |)
				  O\  =  /O
			   ____/`---'\____
			 .'  \\|     |//  `.
			/  \\|||  :  |||//  \
		   /  _||||| -:- |||||-  \
		   |   | \\\  -  /// |   |
		   | \_|  ''\---/''  |   |
		   \  .-\__  `-`  ___/-. /
		 ___`. .'  /--.--\  `. . __
	  ."" '<  `.___\_<|>_/___.'  >'"".
	 | | :  `- \`.;`\ _ /`;.`/ - ` : | |
	 \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
				   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
		佛祖保佑       永无BUG
		佛曰:
		写字楼里写字间，写字间里程序员；
		程序人员写程序，又拿程序换酒钱。
		酒醒只在网上坐，酒醉还来网下眠；
		酒醉酒醒日复日，网上网下年复年。
		但愿老死电脑间，不愿鞠躬老板前；
		奔驰宝马贵者趣，公交自行程序员。
		别人笑我忒疯癫，我笑自己命太贱；
		不见满街漂亮妹，哪个归得程序员？
*/
#include"iostream"
#include"stdio.h"
#include"windows.h"
#include"string"
using namespace std;

int main(void)
{
	string __;
	double a, b, c, d, K, b_;
	int _____ = 0;//五个下划线，如果输入字母过后会无限刷屏，所以设置最高循环次数，能够让别人看不清发生了什么
	printf("************通过两个点算出一个解析式************\n");
	printf("*****************请按照提示输入*****************\n");
	printf("            请勿在输入坐标处输入字母\n\n\n");


	printf("如果有想要源代码，联系我，");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	printf("QQ：2798740764\n");
	printf("为了避免做题过于认真，我设置了循环次数，50次后将会自动关闭，请休息一下在使用（不休息也可以，直接再次打开就行了）\n\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	//a为X1，b为Y1；c为X2，d为Y2;b_为b值（截距）;
a_:	if (_____ >= 50)
	{
	exit(0);
	}
	else 
	{
	_____++;
	}
	printf("请输入第一个X坐标然后按【Enter】：");
	cin >> a;
	printf("请输入第一个Y坐标然后按【Enter】：");
	cin >> b;
	printf("请输入第二个X坐标然后按【Enter】：");
	cin >> c;
	printf("请输入第二个Y坐标然后按【Enter】：");
	cin >> d;	
	if (a == c)
	{
		if (b == d)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			printf("请勿输入同一点坐标，请重新输入\n\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			goto a_;
		}
		else
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			printf("此时k值无意义,请重新输入\n\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			goto a_;
		}
	}

	K = (b - d) / (a - c);
	b_ = b - K * a;
	cout << "斜率（k）值为：" << K << endl;
	cout << "截距（b）为：" << b_ << endl;

	if (K == -1)
	{
		if (b_ <= 0)
		{
			if (b_ == 0)
			{
				cout << "两点所在在直线解析式为：y=" << "-x" << endl;
			}
			else
			{
				cout << "两点所在在直线解析式为：y=" << "-x" << b_ << endl;
			}
		}
		else
			cout << "两点所在在直线解析式为：y=" << "-x+" << b_ << endl;
	}

	if (K == 1)
	{
		if (b_ <= 0)
		{
			if (b_ == 0)
			{
				cout << "两点所在在直线解析式为：y=" << "x" << endl;
			}
			else
			{
				cout << "两点所在在直线解析式为：y=" << "x" << b_ << endl;
			}
		}
		else
			cout << "两点所在在直线解析式为：y=" << "x+" << b_ << endl;
	}

	if (K != 1 && K != -1)
	{
		if (b_ <= 0)
		{
			if (b_ == 0)
			{
				cout << "两点所在在直线解析式为：y=" << K << "x" << endl;
			}
			else
			{
				cout << "两点所在在直线解析式为：y=" << K << "x" << b_ << endl;
			}
		}
		else
			cout << "两点所在在直线解析式为：y=" << K << "x+" << b_ << endl;
	}

	cout << "退出请输入“exit”或“退出”，如果需要继续，请按任意字母并按【Enter】" << endl;
	cin >> __;
	if (__ == "exit")
	{
		exit(0);
	}
	else
	{
		if (__ == "退出")
		{
			exit(0);
		}
		else
		{
			goto a_;
		}
	}
}