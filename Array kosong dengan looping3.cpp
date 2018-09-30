#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int a[10];
	int i,j,k;
	j=5;
	k=3;
	for(i=0;i<=10;i++)
	{
		a[i]=j;
		cout<<j<<" Merupakan nilai index ke "<<i<<endl;
		j=j+k;
		k=k+2;
	}
}
