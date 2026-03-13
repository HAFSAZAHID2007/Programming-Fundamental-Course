#include<iostream>
using namespace std;
main()
{
int N,M;
int dollar_rate;
int salarypermonth;
float salaryperyear;
float gross_income;
float tax;
float annual_income;
float rent;
float yearly_savings;
float daily_savings;
cout<<"Enter projects per month: ";
cin>>N;
cout<<"Enter dollars per project: ";
cin>>M;
cout<<"Enter dollar rate in pkr";
cin>>dollar_rate;
salarypermonth=N*M;
salaryperyear=salarypermonth*12;
gross_income=salaryperyear+(salarypermonth*2);
tax=gross_income*0.18;
annual_income=gross_income-tax;
rent=annual_income*0.30;
yearly_savings=(annual_income-rent)*dollar_rate;
daily_savings=yearly_savings/365;
cout<<"Annul gross salary: "<<gross_income<<endl;
cout<<"Tax amount is : "<<tax<<endl;
cout<<"Net annual income : "<<annual_income<<endl;
cout<<"Amount spend on rent: "<<rent<<endl;
cout<<"Final rmaining yearly savings in Pkr: "<<yearly_savings<<endl;
cout<<" average daily  savings  in Pkr: "<<daily_savings<<endl;
}