#include <iostream>
#include <ctime>
using namespace std;

class Wine
{
private:
	string name;
	string type;
	size_t kol;
public:
	Wine()
	{
		name = "";
		type = "";
		kol = 0;
	}
	Wine(string fname, string ftype, size_t fkol)
	{
		name = fname;
		type = ftype;
		kol = fkol;
	}
	string getName() { return name; }
	string getType() { return type; }
	size_t getKol() { return kol; }
	void setName(string fname) { name = fname; }
	void setType(string ftype) { type = ftype; }
	void setKol(size_t fkol) { kol = fkol; }
	void Print() { cout << "Название вина: " << name << endl << "Вид: " << type << endl << "Количество: " << kol << endl; }
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Wine w1;
	int n = 0, k = 0, a;
	double l = 0;
	string wt = "", g = "";
	string arr_name[] = { "Мерло", "Шардоне", "Блан", "Совиньон" };
	string arr_type[] = { "красное", "белое", "розовое" };
	srand(time(0));
	for (int i = 1; i <= 3; i++)
	{
		a = rand() % 4;
		w1.setName(arr_name[a]);
		a = rand() % 3;
		w1.setType(arr_type[a]);
		a = rand() % 200;
		w1.setKol(a);

		w1.Print();
		l = a * 0.7;
		cout << "Количество литров: " << l << endl << endl;
	}
	return 0;
}