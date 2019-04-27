#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main() {
char kode;
cout<<"Masukan kode barang[A..C] : ";
cin>>kode;
switch(kode)
{
case 'A':
case 'a' :
cout<<"Alat olahraga";
break;
case 'B':
case 'b' :
cout<<"Alat Elektronik";
break;
case 'C':
case 'c' :
cout<<"Alat Masak";
break;
default;
cout<<"Anda salah memasukan kode ";
break;
}
getch();
return 0;
}
