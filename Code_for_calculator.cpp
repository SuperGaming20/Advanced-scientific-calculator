// Coded by Dharrun Sriman (SuperGaming20), Do not take full credit for this progam.
#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#define ADDITION(a,b) (a+b)
#define SUBTRACTION(a,b) (a-b)
#define MULTIPLY(a,b) (a*b)
#define DIVISION(a,b) (a/b)
#define quadratic_positive(a,b,c) ((-b + sqrt((b*b) - 4*a*c)) / (2*a))
#define quadratic_negative(a,b,c) ((-b - sqrt((b*b) - 4*a*c)) / (2*a))
#define hypotenuse(a,b) (sqrt((a*a) + (b*b)))
#define non_right_angle_length_a(a,b,c) (sqrt((b*b) + (c*c) - (2*b*c * (cos(a * M_PI / 180)))))
#define non_right_angle_length_b(a,b,c) (sqrt((a*a) + (c*c) - (2*a*c * (cos(b * M_PI / 180)))))
#define non_right_angle_length_c(a,b,c) (sqrt((a*a) + (b*b) - (2*a*b * (cos(c * M_PI / 180)))))
#define distance_calculator(x1,x2,y1,y2) (sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1))))
#define LOG(a,b) (log(a)/(log(b)))
using namespace std;

string line = "--------------------------------";
double cache = 0;
vector <int> factorial;
string mode;
double data = 1;

inline double midpoint_value(double x1,double x2,double y1,double y2)
{
  cout << "(" << (x2+x1)/2 << "," << (y2+y1)/2 << ")"<< endl;
  return 0;
}

int num;
inline int factorial_function(int num)
{
  for(int i = num; i > 0; i--)
  {
    factorial.push_back(i);
  }
  int product = 1;
  for(const int& j : factorial)
  {
    product *= j;
  }
  factorial.clear();
  return product;
}

float a,b,c,a1,b1,c1;

inline float simulatenous_linear_equation(float a, float b, float c, float a1, float b1, float c1)
{
  float x = ((c * b1) - (b * c1)) / ((a * b1) - (b * a1));
  float y = ((a * c1) - (a1 * c)) / ((a * b1) - (b * a1));
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  return 0;
}

class angle_values
{
  public:
    //cosine rule
    float non_right_angle_value_a(float a, float b, float c)
    {
      float answer = acos(((b*b) + (c*c) - (a*a)) / (2*b*c)) * (180/M_PI);
      return answer;
    }
    float non_right_angle_value_b(float a, float b, float c)
    {
      float answer1 = acos(((c*c) + (a*a) - (b*b)) / (2*a*c)) * (180/M_PI);
      return answer1;
    }
    float non_right_angle_value_c(float a, float b, float c)
    {
      float answer2 = acos(((a*a) + (b*b) - (c*c)) / (2*a*b)) * (180/M_PI);
      return answer2;
    }

};

int main()
{
  angle_values obj;
  string name;
  cout << "Hello and welcome to this scientific calculator program" << endl;
  cout << "Could you please enter your name?" << endl;
  cin >> name;
  cout << "Welcome " << name << endl;
  Codes:
      cout << endl;
      cout << "The following are the functions available" << endl;
      cout << "1.addition, 2.subtraction, 3.multiplication, 4.division, 5.sine, 6.cosine, 7.tangent, 8.arcsine, 9.arccos, 10.arctangent" << endl;
      cout << "11.quadratic_equation(addition), 12.quadratic_equation(subtraction), 13.hypotenuse, 14.non_right_angle_length_a" << endl;
      cout << "15.non_right_angle_length_b, 16.non_right_angle_length_c, 17.midpoint value, 18.distance value(graph)" << endl;
      cout << "19.log, 20.double log, 21.factorial, 22.simulatenous_linear_equation, 23.non_right_angle_value_a, 24.non_right_angle_value_b, 25.non_right_angle_value_c" << endl;
      cout << "26.Power, 27.Square, 28.Cube, 29.Square root, 30.Cube root, 31.radian mode, 32.degree mode" << endl;
      string values;
      cout << "Enter your choice" << endl;
      cin >> values;
      if(values == "31") {mode = "31"; data = 1; cout << "Successfully changed" << endl; goto Codes;}
      if(values == "32") {mode = "32"; data = (M_PI/180); cout << "Successfully changed" << endl; goto Codes;}
      if(values == "19" || values == "5" || values == "6" || values == "7" || values == "8" || values == "9" || values == "10" || values == "21" || values == "27" || values == "28" || values == "29" || values == "30")
      {
        double num1,num2;
        cout << "enter 0 for previous answer" << endl;
        cout << "Enter value: " << endl;
        cin >> num1;
        if(num1 == 0) {num1 = cache;}
        cout << line << endl;
        cout << "Answer: ";
        if(mode == "32" && values == "8") {data = (180/M_PI);}
        if(mode == "32" && values == "9") {data = (180/M_PI);}
        if(mode == "32" && values == "10") {data = (180/M_PI);}
        if(values == "19") {num2 = log(num1); cout << num2 << endl;}
        if(values == "5") {num2 = sin(num1 * data); cout << num2 << endl;}
        if(values == "6") {num2 = cos(num1 * data); cout << num2 << endl;}
        if(values == "7") {num2 = tan(num1 * data); cout << num2 << endl;}
        if(values == "8") {num2 = asin(num1) * data; cout << num2 << endl;}
        if(values == "9") {num2 = acos(num1) * data; cout << num2 << endl;}
        if(values == "10") {num2 = atan(num1) * data; cout << num2 << endl;}
        if(values == "21") {cout << factorial_function(num1) << endl;}
        if(values == "27") {num2 = num1*num1; cout << num2 << endl;}
        if(values == "28") {num2 = num1*num1*num1; cout << num2 << endl;}
        if(values == "29") {num2 = sqrt(num1); cout << num2 << endl;}
        if(values == "30") {num2 = cbrt(num1); cout << num2 << endl;}
        cout << line << endl;
        cache = num2;
        goto Codes;
      }
      if(values == "1" || values == "2" || values == "3" || values == "4" || values == "13" || values == "20" || values == "26")
      {
        double num3,num4,num5;
        cout << "enter 0 for previous answer" << endl;
        cout << "Enter first value: " << endl;
        cin >> num3;
        if(num3 == 0) {num3 = cache;}
        cout << "Enter second value: " << endl;
        cin >> num4;
        if(num4 == 0) {num4 = cache;}
        cout << line << endl;
        cout << "Answer: ";
        if(values == "1") {num5 = ADDITION(num3,num4); cout << num5 << endl;}
        if(values == "2") {num5 = SUBTRACTION(num3,num4); cout << num5 << endl;}
        if(values == "3") {num5 = MULTIPLY(num3,num4); cout << num5 << endl;}
        if(values == "4") {num5 = DIVISION(num3,num4); cout << num5 << endl;}
        if(values == "13") {num5 = hypotenuse(num3,num4); cout << num5 << endl;}
        if(values == "20") {num5 = LOG(num3,num4); cout << num5 << endl;}
        if(values == "26") {num5 = pow(num3,num4); cout << num5 << endl;}
        cout << line << endl;
        cache = num5;
        goto Codes;
      }
      if(values == "11" || values == "12" || values == "14" || values == "15" || values == "16" || values == "23" || values == "24" || values == "25")
      {
        double num6,num7,num8,num9;
        double original = cache;
        cout << "enter 0 for previous answer" << endl;
        cout << "Enter first value: " << endl;
        cin >> num6;
        if(num6 == 0) {num6 = cache;}
        cout << "Enter second value: " << endl;
        cin >> num7;
        if(num7 == 0) {num7 = original;}
        cout << "Enter third value: " << endl;
        cin >> num8;
        if(num8 == 0) {num8 = original;}
        cout << line << endl;
        cout << "Answer: " << endl;
        if(values == "11") {num9 = quadratic_positive(num6,num7,num8); cout << num9 << endl;}
        if(values == "12") {num9 = quadratic_negative(num6,num7,num8); cout << num9 << endl;}
        if(values == "14") {num9 = non_right_angle_length_a(num6,num7,num8); cout << num9 << endl;}
        if(values == "15") {num9 = non_right_angle_length_b(num6,num7,num8); cout << num9 << endl;}
        if(values == "16") {num9 = non_right_angle_length_c(num6,num7,num8); cout << num9 << endl;}
        if(values == "23") {num9 = obj.non_right_angle_value_a(num6,num7,num8); cout << num9 << endl;}
        if(values == "24") {num9 = obj.non_right_angle_value_b(num6,num7,num8); cout << num9 << endl;}
        if(values == "25") {num9 = obj.non_right_angle_value_c(num6,num7,num8); cout << num9 << endl;}
        cout << line << endl;
        cache = num9;
        goto Codes;
      }
      if(values == "17" || values == "18" || values == "22")
      {
        if(values == "22")
        {
          cout << "Enter the variables of a,b,c(coefficents) respectively of the first equation" << endl;
          cin >> a >> b >> c;
          cout << "Now the second equation a1,b1,c1 of the second equation" << endl;
          cin >> a1 >> b1 >> c1;
          simulatenous_linear_equation(a,b,c,a1,b1,c1);
          goto Codes;
        }
        double x1,x2,y1,y2,answer;
        cout << "Enter x1: " << endl;
        cin >> x1;
        cout << "Enter x2: " << endl;
        cin >> x2;
        cout << "Enter y1: " << endl;
        cin >> y1;
        cout << "Enter y2: " << endl;
        cin >> y2;
        if(values == "17") {answer = midpoint_value(x1,x2,y1,y2);}
        if(values == "18") {answer = distance_calculator(x1,x2,y1,y2); cout << answer << endl;}
        goto Codes;
      }
      else
      {
        cerr << "Error, not recognized" << endl;
        goto Codes;
      }
}
