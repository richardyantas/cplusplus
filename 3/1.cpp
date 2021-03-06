#include<iostream>
#include<vector>
using namespace std;

class Vector
{
	public:
		Vector(int s);

		double&  operator[](int i);
		int 	 size();
		void 	 push_back(int value);		

	private:
		double*  elem;
		int 	 sz;
};


Vector::Vector(int s):elem{new double[s]},sz{s}{}


double& Vector::operator[](int i)
{
	return elem[i];
}

int Vector::size()
{
	return sz;
}


int main()
{
	Vector v(5);
	cout << v[2] << endl;
}
