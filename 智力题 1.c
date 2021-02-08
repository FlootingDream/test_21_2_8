#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	/*1、日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
		以下为4个嫌疑犯的供词:  A:不是我。 B:是C。 C:是D。 D:C在胡说 
		已知3个人说了真话，1个人说的是假话。
		现在请根据这些信息，写一个程序来确定到底谁是凶手。*/
	char killer;
	for (killer = 'A'; killer >= 'A' && killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			//printf("%c\n", killer);
		}
	}
	/*2、5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
		A:B第二，我第三；    B:我第二，E第四；    C:我第一，D第二；
		D:C最后，我第三；    E:我第四，A第一；
		比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。*/
	char A, B, C, D, E;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if (((B == 2)+( A == 3)==1)&&((B == 2 )+( E == 4)==1)&&((C == 1)+( D == 2)==1) &&((C == 5 )+( D == 3))==1&& ((E == 4 )+( A == 1)==1) && A * B * C * D * E == 120 && (A+B+C+D+E==15))
						{
							printf("A=%d\nB=%d\nC=%d\nD=%d\nE=%d\n\n", A, B, C, D, E);
						}
					}
				}
			}
		}
	}
	return 0;
}
