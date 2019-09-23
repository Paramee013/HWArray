#include <iostream>
#include <time.h>
using namespace std;
void call_display(int Array[5][6]);
void call_graph(int Array[5][6]);

int main()
{
	int Array[5][6];
	call_display(Array);
	call_graph(Array);

	return(0);
}

void call_display(int Array[5][6])
{
	srand(time(NULL));
	for (int i = 1; i <= 30; i++)
		{
			for (int a = 0; a < 5; a++)
			{
				for (int j = 0; j < 6; j++)
					Array[a][j] = (0 + rand() % 9);
			}
		}
		    for (int a = 0; a < 5; a++)
		{
			for (int j = 0; j < 6; j++)
			cout << Array[a][j]<<"\t";
			cout << endl;
		}
}
void call_graph(int Array[5][6])
{
	cout << "\n\n\n";
	cout << "-------------------display graph--------------------" << endl;
	cout << "\t0\t1\t2\t3\t4\t5" << endl;
	cout << "----------------------------------------------------" << endl;
	for (int a = 0; a < 5; a++)
	{
		cout << a << " | ";
		for (int j = 0; j < 6; j++)

			if (Array[a][j] == 0)
			{
				cout << "\t ";
			}
			else
			{
				cout << "\t*";
			}
		cout << endl;
	}
}