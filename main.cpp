#include <iostream>
using namespace std;

int main() 
{
  double price,discount;
  cout << "Enter the price:";
  cin >> price;

  if(price>10000)
    discount = (25*price)/100.0;
  else if(price>=5000)
    discount = (15*price)/100.00;
  else if(price>=3000)
    discount = (10*price)/100.00;
  else
    discount =  0.0;  

  cout << "Total price is:" << discount << endl;
}