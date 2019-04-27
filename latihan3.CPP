#include<conio.h>
#include<iostream.h>
main() {
int Op1,Op2,pilih;
float Hasil;
cout<<"Operator 1: ";
cin>>Op1;
cout<<"Operator 2: ";
cin>>Op2;
cout<<"1. Oprator +\n";
cout<<"2. Operator -\n";
cout<<"3. Operator *\n";
cout<<"4. Operator /\n";
cout<<"Pilih Operatorv: ";cin>>pilih;
switch (pilih) {
case 1 : {Hasil = Op1 + Op2; break;}
case 2 : {Hasil = Op1 - Op2; break;}
case 3 : {Hasil = Op1 * Op2; break;}
case 4 : {if (Op2 !=0)
cout<<Op1/Op2;
else
cout<<"Error";
break;}
}
cout<<"Hasil dari perhitungan tersebut adalah "<<Hasil;
getch();
return 0;
}
