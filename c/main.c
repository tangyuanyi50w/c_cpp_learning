#include <stdio.h>
#include <assert.h>
#define LL long long

// 使用int输入，又使用long输出？
// 中间计算的时候还是在使用 int 还是会出现溢出的情况
// 尽量不使用 long，long 在不同系统中的表示范围不同，换成 long long

LL rec(LL n)
{
	// || && 之类的逻辑运算符两边建议加括号
	if ((n == 0) || (n == 1))
		return 1;
	else
		return n * rec(n - 1);
}

// 测试代码另写一个函数
void test_rec()
{
	for (int i = 0; i < 10; i++)
	{
		printf("rec(%d) = %lld\n", i, rec(i));
	}
}

// 先写一个肯定对的循环函数
LL loop(LL n)
{
	assert(n >= 0);
	LL total = 1;
	if (n > 1)
	{
		for (LL i = 2; i < n + 1; i++)
		{
			total *= i;
		}
	}
	return total;
}

// 然后比较递归结果和循环的结果
void test_rec_std()
{
	int n = 10;
	int pass = 1;
	for (int i = 0; i < n; i++)
	{
		if (!(rec(i) == loop(i)))
		{
			printf("Error: i = %d, loop = %lld, rec = %lld\n", i, loop(i), rec(i));
			pass = 0;
		}
	}
	if (pass)
	{
		printf("test pass\n");
	}
}

int main()
{
	test_rec_std();
	return 0;
}
