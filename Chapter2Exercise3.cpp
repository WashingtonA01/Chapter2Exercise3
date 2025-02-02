/*
Filename: Chapter2Exercise3
Title: Sales Tax
Programmer: Arianna Washington
Date: 29JAN2025
Requirements: User input of total paid in taxes on a purchase.
*/
//

#include <iostream>
using namespace std;

int main()
{
    float price, countysalestax, statesalestax;

    cout << "How much was the total of your purchase?";
    cin >> price; 

    cout << "How much is your state sales tax?";
    cin >> statesalestax; 

    cout << "How much is your county sales tax?";
    cin >> countysalestax;
  
   
    float totalsalestax = statesalestax + countysalestax;
    float taxpercentage = totalsalestax / 100;
    float totaltaxpaid = taxpercentage * price;

    cout << "Total taxes to be paid on your purchase:" << " " << totaltaxpaid <<" " << "dollars";


}
