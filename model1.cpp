#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
#include<cstdio>
#define MAX 6
using namespace std;

void rand_test(int n);//test function
void display(int n);
void delay();
vector<int>count(6,0);//vector fot counting
int main(){
	int num;
	cout<<"Please input the number of random numbers:"<<endl;
	while(cin>>num){
	  cout<<"Time:"<<num<<endl;
	  rand_test(num);
	  display(num);
	  cout<<"End"<<endl;
	  delay();
	  cout<<"Please input the number of random numbers:"<<endl; 
	}
	return 0;
}
void rand_test(int n){
	int output=0;
    srand((unsigned)time(NULL));//set the seed
	for(int i=0;i<n;i++){
		output=1+rand()%MAX;//give the random number 
		switch(output){
		  case 1:cout<<"001"<<' ';count[0]++;break;
		  case 2:cout<<"010"<<' ';count[1]++;break;
		  case 3:cout<<"011"<<' ';count[2]++;break;
		  case 4:cout<<"100"<<' ';count[3]++;break;
		  case 5:cout<<"101"<<' ';count[4]++;break;
		  case 6:cout<<"110"<<' ';count[5]++;break;
		  default:break; 
	    }
	}
	 cout<<endl;
	 cout<<"Probability:"<<endl;
    //cout<<"end"<<endl;
}
void display(int n){
	printf("001:%.5f\n",((double)count[0])/n);
	printf("010:%.5f\n",((double)count[1])/n);
	printf("011:%.5f\n",((double)count[2])/n);
	printf("100:%.5f\n",((double)count[3])/n);
	printf("101:%.5f\n",((double)count[4])/n);
	printf("110:%.5f\n",((double)count[5])/n);
	for(int j=0;j<MAX;j++){
	   	count[j]=0;//clear the counter 
	}
}
void delay(){
	for(int q=0;q<10;q++){
		for(int p=0;p<125;p++);
	}
}

