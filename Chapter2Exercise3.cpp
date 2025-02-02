/*
Filename: Chapter2Exercise3
Title: Sales Tax
Programmer: Arianna Washington
Date: 29JAN2025
Requirements: Write a program that will compute the total 
sales tax on a $95 dollar purchase. Assume the state sales
tax is 4 percent, and the country sales tax is 2 percent.
*/
//

#include <iostream>
using namespace std;

int main()
{
    int price = 95;
    float statesalestax = .04;
    float countysalestax = .02;
    float totalsalestax = statesalestax + countysalestax;
    float totaltaxpaid = totalsalestax * price;
     std : cout << "On a $95 dollar purchase, you will pay" << " " << totaltaxpaid << " " << "dollars in taxes.";


}
