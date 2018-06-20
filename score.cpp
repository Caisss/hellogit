#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
struct student
{
	string name,sex;
	double Score;
	student() {};
	student(string a,string b,  double c)
	{
		name = a;
		sex = b;
		Score = c;
	}
};
vector<student>all, male, female;
bool  cmp(student a, student b) {
	if (a.Score != b.Score) return a.Score > b.Score;
	else return a.name<b.name;
}
double ave(const vector<student>& a)
{
	double AV=0;
	for (auto b : a)
	{
		AV += b.Score;
	}
	return AV / double(a.size());
}
int main()
{
	freopen("score.csv", "r", stdin);
	string line;
	getline(cin, line);
	string name, sex, score;
	while (getline(cin, line))
	{
		stringstream ss(line);
		getline(ss, name, ',');
		getline(ss, sex, ',');
		getline(ss, score, ',');
		double Score = stod(score);
		student a(name,sex, Score);
		if (sex == " Male")male.push_back(a);
		else female.push_back(a);
		all.push_back(a);
	}
	cout << ave(all) << endl << ave(male) <<endl<< ave(female) << endl;
	sort(all.begin(), all.end(),cmp);
	for (auto b : all)
	{
		cout << b.name << " " << b.sex << " " << b.Score << endl;
	}
	return 0;
}
