#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;
vector<int> vec1(10,4);//vector1
vector<int> vec2(vec1);//vector2

int main(){
     int m,n;
	 m=0;
	 n=vec1.size();//solve for the size
	 printf("vec1:\n");
	  for(m=0;m<n;m++){
	 	cout<<vec1[m];
	 }
	 cout<<"\n";
	 printf("vec2:\n");
	 vector<int>::const_iterator iterator = vec2.begin();//get the first iterator
	 for(;iterator!=vec2.end();iterator++){
	 	cout<<*iterator;//
	 }
	 return 0;
	
}


