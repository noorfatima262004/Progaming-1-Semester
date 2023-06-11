#include <iostream>
using namespace std;
void totalprice(int redR, int tulip, int whiteR,float priceredroses,float pricetulip, float pricewhiteroses);
main(){
int redR, tulip, whiteR;
float priceredroses, pricetulip, pricewhiteroses; 
	cout <<" Enter the numbers of red roses:";
	cin>> redR;
	cout << "Enter the numbers of white roses:";
	cin>>  whiteR;
	cout<< "Enter the numbers of Tulip:";
	cin>> tulip;
  priceredroses= 2*redR ;
  pricewhiteroses= 4.10* whiteR;
  pricetulip= 2.50 * tulip;
  totalprice(redR, tulip, whiteR, priceredroses, pricewhiteroses, pricetulip);
}
void totalprice(int redR, int tulip, int whiteR,float priceredroses,float pricetulip, float pricewhiteroses  )
{

float tprice= priceredroses + pricewhiteroses +pricetulip;
float discount= tprice-(tprice * 0.2);
	if(tprice > 200)
  {
    cout<< " DISCOUNT=" << discount << endl;
  }
      cout << "original price=" << tprice << endl;
}



