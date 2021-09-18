#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	
		string name;
		int height;
		int weight;
		bool flag = true;
		string con;
	
	do{
	
		
		cout<<"Enter your name:";
		cin>>name;
		cout<<"Enter your height: (cm)";
		cin>>height;
		cout<<"Enter your weight: (kg)";
		cin>>weight;
		
		float bmi = weight/pow((height/100.0),2.0);
		
		//cout<<bmi;
	
		cout<<"Hi "<<name<<"!\n";
		if (bmi< 18.5) cout<<"You're underweight!";
		else if(bmi< 25) cout<<"You're normal!";
		else if (bmi< 30) cout<<"You're overweight!";
		else if (bmi< 35) cout<<"You're obese!";
		else cout<<"You're extremely obese!";
		
		cout<<"\nContinue? (Y for yes, others for no)";
		cin>> con;
		
		if (con=="Y") flag=true;
		else flag=false;
	
}while(flag);
	
	return 0;
}
