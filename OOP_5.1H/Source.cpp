//////////////////////////////////////////////////////////////////////////////
// Source.cpp
#include <iostream>
#include "Fraction_Public.h"
#include "Fraction_Private.h"

using namespace std;

int main()
{
	cout << " : Lab 5.1 - Output (Public) : " << endl;
	{

		bool initResult = false;
		Fraction_Public p;

		do
		{
			try
			{
				cin >> p;
				initResult = true;
			}
			catch (const char* str)
			{
				initResult = false;
				cerr << str << endl;
			}
			catch (bad_exception& e)
			{
				initResult = false;
				cerr << e.what() << endl;
			}
			catch (invalid_argument e)
			{
				initResult = false;
				cerr << e.what() << endl;
			}
			cout << endl;
		} while (!initResult);

		unsigned int frac = 100;
		for (int i = 0; i < 4; i++)
		{
			if (i == 0)
			{
				frac = 100;
			}
			else if (i == 1)
			{
				frac = 101;
			}
			else if (i == 2)
			{
				frac = 102;
			}
			else if (i == 3)
			{
				frac = 103;
			}

			try
			{
				Fraction_Public ex("-1", frac);
			}
			catch (Exception e)
			{
				cerr << e.what() << endl;
			}
			catch (Bad_exception e)
			{
				cerr << e.what() << endl;
			}
			catch (bad_exception& e)
			{
				cerr << e.what() << endl;
			}
			catch (invalid_argument e)
			{
				cerr << e.what() << endl;
			}
		}

	}
	system("pause");

	cout << " : Lab 5.1 - Output (Private) : " << endl;
	{

		bool initResult = false;
		Fraction_Private p;

		do
		{
			try
			{
				cin >> p;
				initResult = true;
			}
			catch (const char* str)
			{
				initResult = false;
				cerr << str << endl;
			}
			catch (bad_exception& e)
			{
				initResult = false;
				cerr << e.what() << endl;
			}
			catch (invalid_argument e)
			{
				initResult = false;
				cerr << e.what() << endl;
			}
			cout << endl;
		} while (!initResult);

		unsigned int frac = 100;
		for (int i = 0; i < 4; i++)
		{
			if (i == 0)
			{
				frac = 100;
			}
			else if (i == 1)
			{
				frac = 101;
			}
			else if (i == 2)
			{
				frac = 102;
			}
			else if (i == 3)
			{
				frac = 103;
			}

			try
			{
				Fraction_Private ex("-1", frac);
			}
			catch (Exception e)
			{
				cerr << e.what() << endl;
			}
			catch (Bad_exception e)
			{
				cerr << e.what() << endl;
			}
			catch (bad_exception& e)
			{
				cerr << e.what() << endl;
			}
			catch (invalid_argument e)
			{
				cerr << e.what() << endl;
			}
		}

	}
	system("pause");

	cout << " : Lab 2.7 - Output (Public) : ";
	{

		cout << " : constructors : " << endl;
		cout << "Fraction_Public *a0 = new Fraction_Public(); : " << endl;
		Fraction_Public* a0 = new Fraction_Public();
		cout << " a0 : " << (*a0) << endl;
		cout << "(*a0).Display() : " << endl;
		cout << " a0 : ";
		(*a0).Display();
		cout << "Fraction_Public a1; : " << endl;
		Fraction_Public a1;
		//a1.Display();
		cout << " a1 : " << a1 << endl;
		cout << "Fraction_Public a2(\"2\"); : " << endl;
		Fraction_Public a2("2");
		//a2.Display();
		cout << " a2 : " << a2 << endl;
		cout << "Fraction_Public c(\"4\", 10); : " << endl;
		Fraction_Public c("4", 10);
		//c.Display();
		cout << " c : " << c << endl;
		cout << "Fraction_Public d(c); : " << endl;
		Fraction_Public d(c);
		//d.Display();
		cout << " d : " << d << endl;
		cout << endl;

		cout << " : operator increment/decrement : " << endl;
		cout << "++c : " << ++c << endl;
		cout << " c : " << c << endl;
		cout << "c++ : " << c++ << endl;
		cout << " c : " << c << endl;
		cout << "--c : " << --c << endl;
		cout << " c : " << c << endl;
		cout << "c-- : " << c-- << endl;
		cout << " c : " << c << endl;
		cout << endl;

		cout << " : operator Type() : " << endl;
		cout << "string(c) : " << string(c) << endl;
		cout << endl;

		cout << " : operator input/output : " << endl;
		Fraction_Public g1, g2, g3;
		cin >> g1 >> g2 >> g3;
		cout << g1 << endl << g2 << endl << g3 << endl;

		cout << "+ : " << g1 + g2 << endl;
		cout << "- : " << g1 - g2 << endl;
		cout << "* : " << g1 * g2 << endl;
		cout << "/ : " << g1 / g2 << endl;

		//cout << "g1 and g2 are " << (g1.toFloat() == g2.toFloat() ? "" : "not ") << "equal" << endl;
		//cout << "g1 and g2 are " << (g1 == g2 ? "" : "not ") << "equal" << endl;
		cout << endl;


		cout << " : operator = : " << endl;
		g3 = g2 = c;
		cout << "g3 : " << c << endl;
		cout << "g2 : " << c << endl;
		cout << "c : " << c << endl;
		cout << endl;

		cout << " : Size = " << sizeof(c) << endl;
	}
	system("pause");

	cout << " : Lab 2.7 - Output (Private) : ";
	{
		cout << " : constructors : " << endl;
		cout << "Fraction_Private *a0 = new Fraction_Private(); : " << endl;
		Fraction_Private* a0 = new Fraction_Private();
		cout << " a0 : " << (*a0) << endl;
		cout << "(*a0).Display() : " << endl;
		cout << " a0 : ";
		(*a0).Display();
		cout << "Fraction_Private a1; : " << endl;
		Fraction_Private a1;
		//a1.Display();
		cout << " a1 : " << a1 << endl;
		cout << "Fraction_Private a2(\"2\"); : " << endl;
		Fraction_Private a2("2");
		//a2.Display();
		cout << " a2 : " << a2 << endl;
		cout << "Fraction_Private c(\"4\", 10); : " << endl;
		Fraction_Private c("4", 10);
		//c.Display();
		cout << " c : " << c << endl;
		cout << "Fraction_Private d(c); : " << endl;
		Fraction_Private d(c);
		//d.Display();
		cout << " d : " << d << endl;
		cout << endl;

		cout << " : operator increment/decrement : " << endl;
		cout << "++c : " << ++c << endl;
		cout << " c : " << c << endl;
		cout << "c++ : " << c++ << endl;
		cout << " c : " << c << endl;
		cout << "--c : " << --c << endl;
		cout << " c : " << c << endl;
		cout << "c-- : " << c-- << endl;
		cout << " c : " << c << endl;
		cout << endl;

		cout << " : operator Type() : " << endl;
		cout << "string(c) : " << string(c) << endl;
		cout << endl;

		cout << " : operator input/output : " << endl;
		Fraction_Private g1, g2, g3;
		cin >> g1 >> g2 >> g3;
		cout << g1 << endl << g2 << endl << g3 << endl;

		cout << "+ : " << g1 + g2 << endl;
		cout << "- : " << g1 - g2 << endl;
		cout << "* : " << g1 * g2 << endl;
		cout << "/ : " << g1 / g2 << endl;

		//cout << "g1 and g2 are " << (g1.toFloat() == g2.toFloat() ? "" : "not ") << "equal" << endl;
		//cout << "g1 and g2 are " << (g1 == g2 ? "" : "not ") << "equal" << endl;
		cout << endl;


		cout << " : operator = : " << endl;
		g3 = g2 = c;
		cout << "g3 : " << c << endl;
		cout << "g2 : " << c << endl;
		cout << "c : " << c << endl;
		cout << endl;

		cout << " : Size = " << sizeof(c) << endl;
	}
	system("pause");

	cout << " : Lab 1.7 - Output : ";
	{

		Fraction_Public f;
		DigitString ds;

		cout << "DigitString : " << endl;
		cout << "ds.Read() : " << endl;
		ds.Read();
		cout << "ds.Display() : " << endl;
		ds.Display();
		cout << "ds.toString() : " << ds.toString() << endl;

		DigitString ds1, ds2;
		cout << "ds1.Init(""10"") " << endl;
		ds1.Init("10");
		cout << "ds2.Init(""20"") " << endl;
		ds2.Init("20");
		cout << "Add(ds1, ds2).toString() : " << Add(ds1, ds2).toString() << endl;
		cout << "Sub(ds1, ds2).toString() : " << Sub(ds1, ds2).toString() << endl;
		cout << "Mul(ds1, ds2).toString() : " << Mul(ds1, ds2).toString() << endl;
		cout << "Div(ds1, ds2).toString() : " << Div(ds1, ds2).toString() << endl;
		cout << "Compare(ds1, ds2) : "
			<< (Compare(ds1, ds2) == 0 ? "ds1 < ds2" : (Compare(ds1, ds2) == 1 ? "ds1 > ds2" : "ds1 == ds2")) << endl;
		cout << endl;


		cout << "Fraction_Public : " << endl;
		cout << ".Init(""10"", 50) : " << endl;
		f.Init("10", 50);
		cout << ".Display() : " << endl;
		f.Display();
		cout << ".toString() : " << f.toString() << endl;

		Fraction_Public f1, f2;
		cout << "f1.Init(""10"", 2) " << endl;
		f1.Init("10", 2);
		cout << "f2.Init(""20"", 5) " << endl;
		f2.Init("20", 5);
		cout << "Add(f1, f2).toString() : " << Add(f1, f2).toString() << endl;
		cout << "Sub(f1, f2).toString() : " << Sub(f1, f2).toString() << endl;
		cout << "Mul(f1, f2).toString() : " << Mul(f1, f2).toString() << endl;
		cout << "Div(f1, f2).toString() : " << Div(f1, f2).toString() << endl;
		cout << "Compare(f1, f2) : "
			<< (Compare(f1, f2) == 0 ? "f1 < f2" : (Compare(f1, f2) == 1 ? "f1 > f2" : "f1 == f2")) << endl;
		cout << endl;
	}
	system("pause");

	return 0;
}