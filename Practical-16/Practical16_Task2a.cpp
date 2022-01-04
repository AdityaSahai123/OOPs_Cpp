#include <iostream>
#include <stdexcept>
using namespace std;
  

class Exception : public runtime_error {
public:
   
    Exception()
        : runtime_error("Math error: Attempted to divide by Zero\n")
    {
    }
};

float Division(float num, float den)
{
  
    if (den == 0)
        throw Exception();
  
    return (num / den);
  
} 
  
int main()
{
    float numerator, denominator, result;
    numerator = 2.5;
    denominator = 0;
  
    try {
        result = Division(numerator, denominator);
        cout << "The quotient is " << result << endl;
    }
  
    catch (Exception& e) {
  
        cout << "Exception occurred" << endl
             << e.what();
    }
  
}