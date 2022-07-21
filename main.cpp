#include <iostream>

int main()

{
	int magicSquare1[4][4]{};
	int magicSquare2[4][4]{};
	int magicSquare3[4][4]{};
	int value1{ 1 }, value2{ 16 };
	std::cout << "4차 마방진" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			magicSquare1[i][j] = value1;
			value1++;
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			magicSquare2[i][j] = value2;
			value2--;
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if ((i == j) || (i + j == 3))
			{
				magicSquare3[i][j] = magicSquare1[i][j];
			}
			else
			{
				magicSquare3[i][j] = magicSquare2[i][j];
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (magicSquare3[i][j] > 0 && magicSquare3[i][j] < 10)
			{
				std::cout << " " << magicSquare3[i][j];
			}
			else
			{
				std::cout << magicSquare3[i][j];
			}
		}
		std::cout << std::endl;
	}
}