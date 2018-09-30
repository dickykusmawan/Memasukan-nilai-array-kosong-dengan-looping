#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

array1(){
	int a[11];
	int i,j;
	j=5;
	
	for(i=1;i<11;i++)
	{
		a[i]=j;
		cout<<j<<" Merupakan nilai index ke "<<i<<endl;
		j=j+3;
	}
}

array2(){
	int a[10];
	int i,j;
	j=5;
	
	for(i=0;i<=10;i++)
	{
		a[i]=j;
		cout<<j<<" Merupakan nilai index ke "<<i<<endl;
		j=j+3;
	}
}

array3(){
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

array4(){
	int a[10];
	int i,j,k;
	j=200;
	k=5;
	for(i=0;i<=10;i++)
	{
		a[i]=j;
		cout<<j<<" Merupakan nilai index ke "<<i<<endl;
		j=j-k;
		k=k+5;
	}
}

void bersih()
{
	system("cls");
}

main()
{
	menu:
	int pilih;
	cout<<"Latihan array 1"<<endl;
	cout<<"Latihan array 2"<<endl;
	cout<<"Latihan array 3"<<endl;
	cout<<"Latihan array 4"<<endl;	
	cout<<"Masukan Pilihan Anda :";
	cin>>pilih;
	
	if(pilih==1)
	{
		bersih();
		array1();
		getch(); bersih(); goto menu;
	}
	else if(pilih==2)
	{
		bersih();
		array2();
		getch(); bersih(); goto menu;
	}
	else if(pilih==3)
	{
		bersih();
		array3();
		getch(); bersih(); goto menu;
	}
	else if(pilih==4)
	{
		bersih();
		array4();
		getch(); bersih(); goto menu;
	}
	else
	{
		cout<<"Pilihan Salah"<<endl;
	}
	getch();
}
