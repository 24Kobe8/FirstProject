//#include<iostream>
//using namespace std;
//static int  column[8][8];
//static int map = 0;
//void print();
//bool check(int columnindex, int index);
//void findqueens(int row)
//{
//	if (row > 7)
//	{
//		map++;
//		print();
//		return;
//	}
//	else
//	{
//		for (int m = 0; m < 8; m++)
//		{
//			if (check(row, m))
//			{
//				column[row][m] = 1;
//				findqueens(row + 1);
//				column[row][m] = 0;
//			}
//		}
//	}
//}
//
//
//bool check(int columnindex, int  index)
//{
//	for (int i = 0; i < 8; i++)
//	{
//		if (column[i][index] == 1)
//			return false;
//	}
//	for (int i = columnindex - 1, m = index - 1; i >= 0 &&m >= 0; i--, m--)
//	{
//		if (column[i][m] == 1)
//			return false;
//	}
//	for (int i = columnindex - 1, m = index + 1; i >= 0&&m <= 7; i--, m++)
//	{
//		if (column[i][m] == 1)
//			return false;
//	}
//	return true;
//}
//
//void print()
//{
//	cout << "the map is " << map << endl;
//	for(int i = 0;i<8 ;i++)
//		{
//			for (int j = 0; j < 8; j++)
//			{
//				if (column[i][j] == 1)
//					cout << "the queen is " << i << "row" << " " << "is" << j << "col" << endl;
//			}
//		}
//}
//
//
//int main()
//{
//	int i = 0;
//	findqueens(i);
//	cout << map << endl;
//	system("pause");
//	return 0;
//}