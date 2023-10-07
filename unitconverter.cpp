#include <iostream>
#include <cmath>
using namespace std;

float c1 = 0.6214;
float c2 = 1.609;
float c3 = 0.07;
float c4 = 0.7;
float c5 = 14.3;
float c6 = 1.43;
float d1 = 84.08;
float d2 = 75.95;
float d3 = 20.24;
float d4 = 11.94;
float d5 = 0.71;
float d6 = 23.40;

double convert(double a, int n)
{
    return a * pow(10, n);
}
class distance1
{
public:
    float km_mile(float a, float c1)
    {
        return (a * c1);
    }
    float mile_km(float a, float c2)
    {
        return (a * c2);
    }
};
class temperature
{
public:
    float c_k(float a)
    {
        return (a + 273.15);
    }
    float c_f(float a)
    {
        return ((a * 1.8) + 32);
    }
    float f_k(float a)
    {
        return ((a + 459.67) * (5 / 9));
    }
    float f_c(float a)
    {
        return ((a - 32) * (5 / 9));
    }
    float k_c(float a)
    {
        return (a - 273.15);
    }
    float k_f(float a)
    {
        return ((1.8 * (a - 273)) + 32);
    }
};
class hardness
{
public:
    float ppm_cl(float a, float c3)
    {
        return (a * c3);
    }
    float mgl_cl(float a, float c3)
    {
        return (a * c3);
    }
    float fr_cl(float a, float c4)
    {
        return (a * c4);
    }
    float cl_ppm(float a, float c5)
    {
        return (a * c5);
    }
    float cl_mgl(float a, float c5)
    {
        return (a * c5);
    }
    float cl_fr(float a, float c6)
    {
        return (a * c6);
    }
};
class currency
{
public:
    float euro_inr(float a, float d1)
    {
        return (a * d1);
    }
    float usd_inr(float a, float d2)
    {
        return (a * d2);
    }
    float saudiriyal_inr(float a, float d3)
    {
        return (a * d3);
    }
    float yuaan_inr(float a, float d4)
    {
        return (a * d4);
    }
    float ruble_inr(float a, float d5)
    {
        return (a * d5);
    }
    float newshekel_inr(float a, float d6)
    {
        return (a * d6);
    }
};
class dis
{
public:
    void display()
    {
        cout << "Thank you for being so helpful!!!! " << endl;
        cout << "**************************************************************" << endl;
    }
};
int main()
{
    distance1 d;
    temperature t;
    hardness h;
    currency c;
    dis w;
    float a, x, y, num2;
    double num1;
    cout << "HEY THERE!! WELCOME TO UNIT CONVERSION!!!!!\n";
    cout << "Please press the number key according to the option you want to go with \n"
         << "\t\t 1)Distance converter\n"
         << "\t\t 2)Mass converter\n"
         << "\t\t 3)Volume converter\n"
         << "\t\t 4)Temperature converter\n"
         << "\t\t 5)Hardness of water converter\n"
         << "\t\t 6)Currency unit converter\n"
         << "\t\t 7)Exit the programme\n";
    cin >> y;
    if (y == 1)
    {
        cout << "\t\tTo convert mm to cm press 1\n"
             << "\t\tTo convert mm to m press 2\n"
             << "\t\tTo convert mm to km press 3\n"
             << "\t\tTo convert cm to mm press 4\n"
             << "\t\tTo convert cm to m press 5\n"
             << "\t\tTo convert cm to km press 6\n"
             << "\t\tTo convert km to mm press 7\n"
             << "\t\tTo convert km to cm press 8\n"
             << "\t\tTo convert km to m press 9\n"
             << "\t\tTo convert m to mm press 10\n"
             << "\t\tTo convert m to cm press 11\n"
             << "\t\tTo convert m to km press 12\n"
             << "\t\tTo convert km to mile press 13\n"
             << "\t\tTo convert mile to km press 14\n";
        cin >> x;
    }
    if (y == 2)
    {
        cout << "\t\tTo convert kg to g press 1\n"
             << "\t\tTo convert kg to mg press 2 \n"
             << "\t\tTo convert g to kg press 3\n"
             << "\t\tTo convert g to mg press 4\n"
             << "\t\tTo convert mg to kg press 5\n"
             << "\t\tTo convert mg to g press 6\n";
        cin >> x;
    }
    if (y == 3)
    {
        cout << "\t\tTo convert cubic km to cubic m press 1\n"
             << "\t\tTo convert cubic km to cubic cm press 2 \n"
             << "\t\tTo convert cubic km to cubic mm press 3\n"
             << "\t\tTo convert cubic m to cubic mm press 4\n"
             << "\t\tTo convert cubic m to cubic cm press 5\n"
             << "\t\tTo convert cubic m to cubic km press 6\n"
             << "\t\tTo convert cubic cm to cubic mm press 7\n"
             << "\t\tTo convert cubic cm to cubic m press 8 \n"
             << "\t\tTo convert cubic cm to cubicm press 9\n"
             << "\t\tTo convert cubic mm to cubic cm press 10\n"
             << "\t\tTo convert cubic mm to cubic m press 11\n"
             << "\t\tTo convert cubic mm to cubic km press 12\n"
             << "\t\tTo convert  litre to cubic mm press 13\n"
             << "\t\tTo convert  litre to cubic cm press 14 \n"
             << "\t\tTo convert  litre to cubic m press 15\n"
             << "\t\tTo convert  litre to cubic milli litre press 16\n"
             << "\t\tTo convert cubic milli litre to  litre press 17\n";
        cin >> x;
    }
    if (y == 4)
    {
        cout << "\t\tTo convert celcius to kelvin press 1\n"
             << "\t\tTo convert celcius to fahrenheit press2\n"
             << "\t\tTo convert fahrenheit to kelvin press 3\n"
             << "\t\tTo convert fahrenheit to celcius press 4\n"
             << "\t\tTo convert kelvin to celcius press 5\n"
             << "\t\tTo convert kelvin to fahrenheit press 6\n";
        cin >> x;
    }
    if (y == 5)
    {
        cout << "\t\tTo convert ppm to mg/l press 1\n"
             << "\t\tTo convert ppm to degree french  press 2\n"
             << "\t\tTo convert ppm to degree clark  press 3\n"
             << "\t\tTo convert mg/l to ppm  press 4\n"
             << "\t\tTo convert mg/l to degree french press 5\n"
             << "\t\tTo convert mg/l to degree clark press 6\n"
             << "\t\tTo convert degree french to ppm press 7\n"
             << "\t\tTo convert degree french to mg/l press 8\n"
             << "\t\tTo convert degree french to degree clark press 9\n"
             << "\t\tTo convert degree clark to ppm press 10\n"
             << "\t\tTo convert degree clark to mg/l press 11\n"
             << "\t\tTo convert degree clark to degree  french press 12\n";
        cin >> x;
    }
    if (y == 6)
    {
        cout << "\t\tTo convert Euro  to INR press 1\n"
             << "\t\tTo convert USD to INR  press 2\n"
             << "\t\tTo convert Saudi Riyal to INR  press 3\n"
             << "\t\tTo convert Chinese Yuan to INR press 4\n"
             << "\t\tTo convert Russian Ruble to INR press 5\n"
             << "\t\tTo convert Israeli New Shekel to INR press 6\n";
        cin >> x;
    }

    if (y == 7)
    {
        exit(0);
    }
    if (y == 1)
    {
        if (x == 1)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -1);
            cout << "The answer is " << num1 << " cm" << endl;
            w.display();
        }
        if (x == 2)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -3);
            cout << "The answer is " << num1 << " m" << endl;
            w.display();
        }
        if (x == 3)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -6);
            cout << "The answer is " << num1 << " km" << endl;
            w.display();
        }
        if (x == 4)
        {
            cout << "Please enter number you want to convert" << endl;
            cin >> a;
            num1 = convert(a, 1);
            cout << "The answer is " << num1 << " mm" << endl;
            w.display();
        }
        if (x == 5)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -2);
            cout << "The answer is " << num1 << " m" << endl;
            w.display();
        }
        if (x == 6)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -5);
            cout << "The answer is " << num1 << " km" << endl;
            w.display();
        }
        if (x == 7)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 6);
            cout << "The answer is " << num1 << " mm" << endl;
            w.display();
        }
        if (x == 8)
        {
            cout << "Please enter number you want to convert <<endl";
            cin >> a;
            num1 = convert(a, 5);
            cout << "The answer is " << num1 << " cm" << endl;
            w.display();
        }
        if (x == 9)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 3);
            cout << "The answer is " << num1 << " m" << endl;
            w.display();
        }
        if (x == 10)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 3);
            cout << "The answer is " << num1 << " mm" << endl;
            w.display();
        }
        if (x == 11)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 2);
            cout << "The answer is " << num1 << " cm" << endl;
            w.display();
        }
        if (x == 12)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -3);
            cout << "The answer is " << num1 << " km" << endl;
            w.display();
        }
        if (x == 13)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = d.km_mile(a, c1);
            cout << "The answer is " << num2 << " mile" << endl;
            w.display();
        }
        if (x == 14)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = d.mile_km(a, c2);
            cout << "The answer is " << num2 << " km" << endl;
            w.display();
        }
    }

    if (y == 2)
    {
        if (x == 1)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 3);
            cout << "The answer is " << num1 << " g" << endl;
            w.display();
        }
        if (x == 2)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 6);
            cout << "The answer is " << num1 << " mg" << endl;
            w.display();
        }
        if (x == 3)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -3);
            cout << "The answer is " << num1 << " kg" << endl;
            w.display();
        }
        if (x == 4)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 3);
            cout << "The answer is " << num1 << " mg" << endl;
            w.display();
        }
        if (x == 5)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -6);
            cout << "The answer is " << num1 << " kg" << endl;
            w.display();
        }
        if (x == 6)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -3);
            cout << "The answer is " << num1 << " g" << endl;
            w.display();
        }
    }

    if (y == 3)
    {
        if (x == 1)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 9);
            cout << "The answer is " << num1 << " cubic meter" << endl;
            w.display();
        }
        if (x == 2)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 8);
            cout << "The answer is " << num1 << " cubic centimeter" << endl;
            w.display();
        }
        if (x == 3)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 18);
            cout << "The answer is " << num1 << " cubic millimeter" << endl;
            w.display();
        }
        if (x == 4)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 9);
            cout << "The answer is " << num1 << " cubic millimeter" << endl;
            w.display();
        }
        if (x == 5)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 6);
            cout << "The answer is " << num1 << " cubic centimeter" << endl;
            w.display();
        }
        if (x == 6)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -9);
            cout << "The answer is " << num1 << " cubic kilometer" << endl;
            w.display();
        }
        if (x == 7)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 9);
            cout << "The answer is " << num1 << " cubic millimeter" << endl;
            w.display();
        }
        if (x == 8)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -6);
            cout << "The answer is " << num1 << " cubic meter" << endl;
            w.display();
        }
        if (x == 9)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -15);
            cout << "The answer is " << num1 << " cubi centimeter" << endl;
            w.display();
        }
        if (x == 10)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -3);
            cout << "The answer is " << num1 << " cubic centimeter" << endl;
            w.display();
        }
        if (x == 11)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -9);
            cout << "The answer is " << num1 << " cubic meter" << endl;
            w.display();
        }
        if (x == 12)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -18);
            cout << "The answer is " << num1 << " cubic kilometer" << endl;
            w.display();
        }
        if (x == 13)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 6);
            cout << "The answer is " << num1 << " cubic millimeter" << endl;
            w.display();
        }
        if (x == 14)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 3);
            cout << "The answer is " << num1 << " cubic centimeter" << endl;
            w.display();
        }
        if (x == 15)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -3);
            cout << "The answer is " << num1 << " cubic meter" << endl;
            w.display();
        }
        if (x == 16)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 3);
            cout << "The answer is " << num1 << " milli litre" << endl;
            w.display();
        }
        if (x == 17)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -3);
            cout << "The answer is " << num1 << " litre" << endl;
            w.display();
        }
    }
    if (y == 4)
    {
        if (x == 1)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = t.c_k(a);
            cout << "The answer is " << num2 << " kelvin" << endl;
            w.display();
        }
        if (x == 2)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = t.c_f(a);
            cout << "The answer is " << num2 << " fahrenheit" << endl;
            w.display();
        }
        if (x == 3)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = t.f_k(a);
            cout << "The answer is " << num2 << " kelvin"<<endl;
            w.display();
        }
        if (x == 4)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = t.f_c(a);
            cout << "The answer is " << num2 << " celcius" << endl;
            w.display();
        }
        if (x == 5)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = t.k_c(a);
            cout << "The answer is " << num2 << " celcius" << endl;
            w.display();
        }
        if (x == 6)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = t.k_f(a);
            cout << "The answer is " << num2 << " fahrenheit" << endl;
            w.display();
        }
    }
    if (y == 5)
    {
        if (x == 1)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 0);
            cout << "The answer is " << num1 << " mg/l" << endl;
            w.display();
        }
        if (x == 2)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -1);
            cout << "The answer is " << num1 << " degree french" << endl;
            cout << "Thank you for being so helpful!!!!! " << endl;
            cout << "***************************************************************************" << endl;
        }
        if (x == 3)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = h.ppm_cl(a, c3);
            cout << "The answer is " << num2 << " degree clark" << endl;
            cout << "Thank you for being so helpful!!!!! " << endl;
            cout << "***************************************************************************" << endl;
        }
        if (x == 4)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 0);
            cout << "The answer is " << num1 << " ppm" << endl;
            w.display();
        }
        if (x == 5)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, -1);
            cout << "The answer is " << num1 << " degree fench" << endl;
            w.display();
        }
        if (x == 6)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = h.ppm_cl(a, c3);
            cout << "The answer is " << num2 << " degree clark" << endl;
            w.display();
        }
        if (x == 7)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 1);
            cout << "The answer is " << num1 << " ppm" << endl;
            w.display();
        }
        if (x == 8)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num1 = convert(a, 1);
            cout << "The answer is " << num1 << " mg/l" << endl;
            w.display();
        }
        if (x == 9)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = h.fr_cl(a, c4);
            cout << "The answer is " << num2 << " degree clark" << endl;
            w.display();
        }
        if (x == 10)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = h.cl_ppm(a, c5);
            cout << "The answer is " << num2 << " ppm" << endl;
            w.display();
        }
        if (x == 11)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = h.cl_mgl(a, c5);
            cout << "The answer is " << num2 << " mg/l" << endl;
            w.display();
        }
        if (x == 12)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = h.cl_fr(a, c6);
            cout << "The answer is " << num2 << " degree french" << endl;
            w.display();
        }
    }
    if (y == 6)
    {
        if (x == 1)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = c.euro_inr(a, d1);
            cout << "The answer is " << num2 << " INR" << endl;
            w.display();
        }
        if (x == 2)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = c.usd_inr(a, d2);
            cout << "The answer is " << num1 << " INR" << endl;
            w.display();
        }
        if (x == 3)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = c.saudiriyal_inr(a, d3);
            cout << "The answer is " << num2 << " INR" << endl;
            w.display();
        }
        if (x == 4)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = c.yuaan_inr(a, d4);
            cout << "The answer is " << num2 << " INR" << endl;
            w.display();
        }
        if (x == 5)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = c.ruble_inr(a, d5);
            cout << "The answer is " << num2 << " INR" << endl;
            w.display();
        }
        if (x == 6)
        {
            cout << "Please enter number you want to convert " << endl;
            cin >> a;
            num2 = c.newshekel_inr(a, d6);
            cout << "The answer is " << num2 << " INR" << endl;
            w.display();
        }
    }
}
