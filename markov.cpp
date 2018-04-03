#include<stdio.h>
#include<iostream>
#define SIZE 4
using namespace std;
double start[SIZE]={0.3,0.3,0.2,0.2};
double state_change[SIZE][SIZE]={{0.5,0.5,0.0,0.0},
                                 {0.0,0.0,0.33,0.67},
						         {0.25,0.75,0.0,0.0},
						         {0.0,0.0,0.2,0.8}
					            };
char state[SIZE]={'A','B','C','D'};//A:00,B:01,C:10,D:11
double stable_state[SIZE]={0.0,0.0,0.0,0.0};//initialize for the output

void change();//
void clear();//clear the array
void output();//output
int main(){
	int count;//count for times
	//int last;
	//int current;
	cout<<"Please input the number of transmitting:"<<endl;
	while(cin>>count){
	  if(count<=0){
	  	cout<<"Input error"<<endl;
	  	break;//break
	  }
	  for(int i=0;i<count;i++){
	  	 change();//do the transmittion 
	  }
	  cout<<"End!"<<endl;
	  cout<<"The probability of the states are:"<<endl;
	  for(int n=0;n<SIZE;n++){
	    stable_state[n]=start[n];//
	  }
	  double sum=0.0;
	  for(int n=0;n<SIZE;n++){
	  	sum+=stable_state[n];
	  }
	  for(int n=0;n<SIZE;n++)
	  {  
	    cout<<state[n]<<":"<<stable_state[n]/sum<<endl;
	  }
	  //cout<<endl;
	  clear();
	  cout<<"Please input the number of transmitting:"<<endl;
	}
     // 
	return 0;
} 
void change(){
	int n=0;
	for(int j=0;j<SIZE;j++){
	  	 for(int m=0;m<SIZE;m++){
	  	 	  stable_state[j]+=start[m]*state_change[m][j];
		   }
	  }
	for(n=0;n<SIZE;n++){
		start[n]=stable_state[n];//
	}// 
	for(n=0;n<SIZE;n++){
	    stable_state[n]=0.0;
	}
}// 
void clear(){
  int n;
  for(n=0;n<SIZE;n++){
	    stable_state[n]=0.0;}
  start[0]=0.3;
  start[1]=0.3;
  start[2]=0.2;
  start[3]=0.2;
}
void output(){
}
