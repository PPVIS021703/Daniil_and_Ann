#include <iostream>

using namespace std;

class Vector
{
public:

	Vector(double a = 0, double b = 0, double v = 0);

	Vector operator +(Vector& v);

	Vector operator +=(Vector& v);

	Vector operator -(Vector& v);

	Vector operator -=(Vector& v);

	Vector operator *(Vector& v);

	Vector operator *=(Vector& v);

	Vector operator *(double value);

	Vector operator *=(double value);

	Vector operator /(Vector& v);

	Vector operator /=(Vector& v);

	double operator ^(Vector& v);

	bool operator >(Vector& v);

	bool operator >=(Vector& v);

	bool operator <(Vector& v);

	bool operator <=(Vector& v);

	bool operator ==(Vector& v);

	void length_v(double rez = 0);

	void view_vector();

	double ret_x()
	{
		return x;
	}

	double ret_y()
	{
		return y;
	}

	double ret_z()
	{
		return z;
	}


private:
	double x, y, z;
};

class Cos
{
public:
	Cos(double s = 1);

	void prosmotroper();
	

	double ret_s()
	{
		return p;
	}

private:
	double p;
};


