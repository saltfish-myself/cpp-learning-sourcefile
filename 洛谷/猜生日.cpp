#include<iostream>
using namespace std;
int main(){
	int date = 0;
	char answer;
	
	//第一次询问 
	cout<<"Is your birth date in this set?"<<endl;
	cout<<" 1  3  5  7"<<endl;
	cout<<" 9 11 13 15"<<endl;
	cout<<"17 19 21 23"<<endl;
	cout<<"25 27 29 31"<<endl;
	cout<<"Enter N for No and Y for Yes:"<<endl;
	cin >>answer;
	if (answer == 'Y'){
		date += 1;
	}
	
	cout<<endl;
	
		//第二次询问 
	cout<<"Is your birth date in this set?"<<endl;
	cout<<" 2  3  6  7"<<endl;
	cout<<"10 11 14 15"<<endl;
	cout<<"18 19 22 23"<<endl;
	cout<<"26 27 30 31"<<endl;
	cout<<"Enter N for No and Y for Yes:"<<endl;
	cin >>answer;
	if (answer == 'Y'){
		date += 2;
	}
	
	cout<<endl;
	
			//第三次询问 
	cout<<"Is your birth date in this set?"<<endl;
	cout<<" 4  5  6  7"<<endl;
	cout<<"12 13 14 15"<<endl;
	cout<<"20 21 22 23"<<endl;
	cout<<"28 29 30 31"<<endl;
	cout<<"Enter N for No and Y for Yes:"<<endl;
	cin >>answer;
	if (answer == 'Y'){
		date += 4;
	}
	
	cout<<endl;
	
				//第四次询问 
	cout<<"Is your birth date in this set?"<<endl;
	cout<<" 8  9 10 11"<<endl;
	cout<<"12 13 14 15"<<endl;
	cout<<"24 25 26 27"<<endl;
	cout<<"28 29 30 31"<<endl;
	cout<<"Enter N for No and Y for Yes:"<<endl;
	cin >>answer;
	if (answer == 'Y'){
		date += 8;
	}
	
	cout<<endl;
	
					//第五次询问 
	cout<<"Is your birth date in this set?"<<endl;
	cout<<"16 17 18 19"<<endl;
	cout<<"20 21 22 23"<<endl;
	cout<<"24 25 26 27"<<endl;
	cout<<"28 29 30 31"<<endl;
	cout<<"Enter N for No and Y for Yes:"<<endl;
	cin >>answer;
	if (answer == 'Y'){
		date += 16;
	}
	
	cout<<endl;
	
	cout<<"Your birth date is "<<date<<endl;
	return 0;
}
