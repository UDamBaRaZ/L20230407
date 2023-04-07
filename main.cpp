#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Ä¸½¶È­, Àº´ÐÈ­,

class FBall
{
public:
	int Number;
};

class FPocket
{
public:
	FPocket(int Count = 45)
	{
		srand((unsigned int)time(nullptr));

		for (int i = 0; i < Count; ++i)
		{
			FBall NewBall;
			NewBall.Number = i + 1;
			Balls.push_back(NewBall);
		}
	}

	void Shuffle()
	{
		random_shuffle(Balls.begin(), Balls.end());
	}
	FBall Draw()
	{
		FBall DrawBall = *(Balls.begin());
		Balls.erase(Balls.begin());

		return DrawBall;
	}

	vector<FBall> Balls;
};

int main()
{
	FPocket* Pocket = new FPocket();

	Pocket->Shuffle();

	for (int i = 0; i < 6; ++i)
	{
		cout << Pocket->Draw().Number << endl;
	}

	delete Pocket;
}


//int main()
//{
//	vector<int> Ball;
//
//	for (int i = 0; i < 45; ++i)
//	{
//		Ball.push_back(i + 1);
//	}
//
//	srand((unsigned int)time(0));
//
//	random_shuffle(Ball.begin(), Ball.end());
//	//shuffle
//	//for (int i = 0; i < 45 * 10000; ++i)
//	//{
//	//	int First = (rand() % 45);
//	//	int Second = (rand() % 45);
//
//	//	//swap()
//	//	int Temp = Ball[First];
//	//	Ball[First] = Ball[Second];
//	//	Ball[Second] = Temp;
//	//}
//
//	for (int i = 0; i < 6; ++i)
//	{
//		cout << Ball[i] << endl;
//	}
//
//
//
//
//	//for (int i = 0; i < 6; ++i)
//	//{
//
//	//	cout << Ball[i] << endl;
//	//}
//
//
//	return 0;
//}