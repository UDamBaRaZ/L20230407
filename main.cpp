#include <istream>

using namespace std;

//rand() % 3; //AI ���� ����

int main()
{
	int Ball[45]; //�޸𸮿� �����Ѵ�.

	srand(time(0)); //�ð����� �ʱ�ȭ�Ұ��̴�.
	
	for(int i = 0; i < 6; ++i)
	{
	    int Choice = (rand() % 45);
		cout << Ball[Choice] << endl;
	}



	


	
	

	return 0;
}

//int Count = 6;
//FPocket* Ball[45];
//Ball[0] = new FPocket(1);