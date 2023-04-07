#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Ä¸½¶È­, Àº´ÐÈ­, Encapsulelation

class AActor
{

};

class FBall : public AActor
{
public:
	int GetNumber() { return Number; }
	void SetNumber(int Value)
	{
		if (Value > 0)
		{
			Number = Value;
		}
	}

private:
	int Number;
};

class FPocket : public AActor
{
public:
	FPocket() { }

	void Shuffle()
	{
		srand((unsigned int)time(nullptr));

		random_shuffle(Balls.begin(), Balls.end());
	}

	FBall Draw()
	{
		FBall DrawBall = *(Balls.begin());
		Balls.erase(Balls.begin());

		return DrawBall;
	}

	void Push(FBall NewBall)
	{
		Balls.push_back(NewBall);
	}

private:
	vector<FBall> Balls;
};

int main()
{
	FPocket* Pocket = new FPocket();

	for (int i = 0; i < 45; ++i)
	{
		FBall Ball;
		Ball.SetNumber(i + 1);
		Pocket->Push(Ball);
	}

	Pocket->Shuffle();

	for (int i = 0; i < 6; ++i)
	{
		FBall Ball = Pocket->Draw();

		cout << Ball.GetNumber() << endl;
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