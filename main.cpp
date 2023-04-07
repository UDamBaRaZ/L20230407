#include <istream>

using namespace std;

//rand() % 3; //AI 랜덤 설정

int main()
{
	int Ball[45]; //메모리에 저장한다.

	srand(time(0)); //시간으로 초기화할것이다.
	
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