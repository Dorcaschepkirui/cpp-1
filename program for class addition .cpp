//class object
#include <iostream>
using namespace std;
//creating a class addition
class addition{
//data member 
   public:
   int num1,num2,num3 ;
//member function 
   int product(){
   return (num1*num2*num3);
}
};

int main (){
addition addition1;
int a,b,c,pro;
a=addition1.num1=22;
b=addition1.num2=30;
c=addition1.num3=50;
pro=addition1.product();
cout<<"product is;"<<pro<<endl;
return 0;
}