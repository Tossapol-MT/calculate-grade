#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter Score : ";
	cin >> score;
	cout << "Your grade is ";
	if (score > 100) cout << "Error!\n";

	else if ((score <= 100) && (score >= 90))  { cout << "A\n"; }
	else if ((score <= 89)  && (score >= 80))  { cout << "B\n"; }
	else if ((score <= 79)  && (score >= 70))  { cout << "C\n"; }
	else if ((score <= 69)  && (score >= 60))  { cout << "D\n"; }
	else if ((score <= 59)  && (score >= 0))   { cout << "F\n"; }
	else if ((score < 0))  { cout << "Error!\n"; }

	return(0);
}