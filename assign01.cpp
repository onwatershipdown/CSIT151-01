/*
 Write a suitable C++ source code for each of the following problems. Please, before submitting your code, make sure that it works by compiling and running it.
  If you need quick help, click on this link.
 2. Write a C++ program which reads values for two floats and outputs their sum, product and quotient. Include a sensible input prompt and informative output.
 3. Write a program to convert currency from UK pounds or sterling to US dollar. Read the quantity of money in pounds and pence, and output the resulting foreign currency in dollars and cents. (One pound is 100 penny). Use a const to represent the conversion rate, which is $2.018 to £1 currently. Be sure to print suitable headings and or labels for the values to be output

 */


//
//  assign01.cpp
//  CSIT151-01
//
//  Created by Matthew Passarelli on 2/11/22.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
/*
 1. Write a program which can right justify the output of each the following numbers in a column on the screen. Numbers are: 23.62 46.0 43.46443 100.1 98.98 (use setprecision and formatting).
 */
  
    double arr[5]={23.62,46.0,43.46443,100.1,98.98};
    
    for(int i=0;i<5;i++)
    {
        cout<<setw(7)<<arr[i]<<endl;
    }
    
    /*2. Write a C++ program which reads values for two floats and outputs their sum, product and quotient. Include a sensible input prompt and informative output.
    */
    
    float numberone,numbertwo;
    cout<<"enter a number... ";
    cin>> numberone;
    cout<<"\n enter a second number...";
    cin>> numbertwo;
    cout<<"\n the sum of the two numbers is: "<< numberone+numbertwo<<endl;
    cout<<"the product of the two numbers is: "<<numberone*numbertwo<<endl;
    cout<<"the first number divided by the second number is: "<<numberone/numbertwo<<endl;
    cout<<"the second number divided by the first number is: "<<numbertwo/numberone<<endl;
    
    
/*
    3. Write a program to convert currency from UK pounds or sterling to US dollar. Read the quantity of money in pounds and pence, and output the resulting foreign currency in dollars and cents. (One pound is 100 penny). Use a const to represent the conversion rate, which is $2.018 to £1 currently. Be sure to print suitable headings and or labels for the values to be output
*/

    float gbp,usd;
    cout<<"input an amount in UK £: ";
    cin>>gbp;
    usd=gbp*2.018;
    cout<<"\n that is equal to "<<usd<< " in US $. \n";
    
    
    return 0;
}
