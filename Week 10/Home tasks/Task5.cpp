 #include<iostream>
 using namespace std;
 int calculateSalary(float base, int score, int experience){
    float bonus = 0;
  if (score >= 90 ){
    bonus = bonus + (0.20*base);
  }
  else if (score >= 75 && score <= 89 ){
    bonus = bonus + (0.10*base);
  }
  else {
    bonus = bonus + (0.05*base);
  }
  if (experience >= 5){
    bonus = bonus + (0.05*base);
  }
  float finalSalary = base + bonus;
  return finalSalary;
 }
 main(){
    int b,s,e;
    cout<<"Enter base, score and experience in years: ";
    cin>>b;
    cin>>s;
    cin>>e;
   cout<<"Final Salary: "<<calculateSalary(b,s,e);

 }