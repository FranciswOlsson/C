//Francis Olsson
//CISP 360 midterm
//Program purpose: print a report with the following elements
/*
1. price
2. total items
3. grand total
4. most expensive
5. least expensive
6. average price
*/

#include <iostream>
#include <string>

using namespace std;

//helper functions

//find least expensive purchase
float leastExpensive(float price_list[], int n){
      float least_expensive = price_list[0];
      for ( int i=0;  i < n;  ++i )
        if ( price_list[i] < least_expensive )
             least_expensive = price_list[i];
      return least_expensive;
}
//find most expensive
float mostExpensive(float price_list[], int n){
      float most_expensive = price_list[0];
      for (int i=0;  i < n;  ++i )
      if (price_list[i] > most_expensive)
      most_expensive = price_list[i];
      return most_expensive;
}
//calculate average price
float avgPrice(float price_list[], int n){
      //float temps;
      float total = 0;
      float average = 0;
      for(int i = 0; i < n; i++){
      total += price_list[i];
      }
      if(total!=0){
      average = total/n;
      }
      return average;
}
float totPrice(float price_list[], int n){
      float total = 0;
      for(int i = 0; i < n; i++){
      total += price_list[i];
      }
      return total;
}      

//print results
float finalInvoice(int count, string item_list[], float price_list[], float total, float least_expensive, float most_expensive, float average){
//print item list
cout<<"*****Welcome to the ABC Store******"<<endl;
cout<<"*****Here are your purchases:******"<<endl;
for (int i = 0; i<count; i++){
    cout<<"Item number "<<i+1<<"****"<<price_list[i]<<endl;
}
cout<<"Your bag contains "<<count<<" items."<<endl;
cout<<"Grand total for this purchase is $"<<total<<endl;
cout<<"The least exoensive item in your bag is $"<<least_expensive<<endl;
cout<<"The most expensive item in your bag is $"<<most_expensive<<endl;
cout<<"The average item cost for this purchase is $"<<average<<endl;
}

//main function
int main(){
    
//declare variables 
int count = 0;
const int MAX = 1000;
float price_list[MAX];
float price = 0;
string item_list[MAX];
string item = " ";
int choice = 0;
for(int i=0; i<MAX; i++){
        price_list[i]=0;
        item_list[i]=" ";
}
//user input
cout<<"Welcome to the ABC store."<<endl;
cout<<"Do you have any items to scan?"<<endl;
cout<<"Enter any number to begin  scanning  your items.  Enter -1 to generate final invoice"<<endl;
cin>>choice;
//begin reading in scan
while(choice != -1 && count < MAX){
cout<<"Enter item: "<<endl;
cin>>item_list[count];
cout<<"Enter price: "<<endl;
cin>>price_list[count];
cout<<"Do you have any items to scan?"<<endl;
cout<<"Enter any number to begin  scanning  your items.  Enter -1 to generate final invoice"<<endl;
cin>>choice;
count ++;
}
//call functions
/*leastExpensive(price_list, count);
mostExpensive(price_list, count);
avgPrice(price_list, count);*/

finalInvoice(count, item_list, price_list, totPrice(price_list, count), leastExpensive(price_list, count), mostExpensive(price_list, count), avgPrice(price_list, count));
system("pause");
return 0;
}
