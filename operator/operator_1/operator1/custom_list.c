#define   _CRT_SECURE_NO_WARNINGS 1
void change10_2(int n, int two_arr[])//十进制转二进制  只限正整数
{
	int count = 0;
	int i = 0;
	if (n != 0)
	{
		if (n < 0)
		{
			n = -n;
		}
		while (n / 2)
		{
			two_arr[i++] = n % 2;
			n = n / 2;
		}
		two_arr[i] = n % 2;
	}
	else two_arr[i] = 0;
}