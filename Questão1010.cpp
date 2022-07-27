#include <bits/stdc++.h>
using namespace std;

/* A questão quer sabe o codigo, o numero e o preço do produto 1 e de 
2 
então será dividindo me preço, numero de coisas e valor do prod.
*/
int main(){
int c, n;//produto 1( number =  a quantidade de coisas)
int c2, n2;//produto 2
float paid, p, p2;//Quer saber o total do valor a ser pago

cout <<"Produto 1 \n";
cin>> c;//codigo do prod 01
cin>> n;//quantidades de coisas
cin>> p;// valor do prod

cout <<"Produto 2 \n";
cin>> c2;//codigo do prod 01
cin>> n2;//quantidades de coisas
cin>> p2;// valor do prod

paid = ((p*n)+(p2*n2));

cout<<"VALOR A PAGAR: R$ "<< fixed << setprecision(2) <<paid <<endl;
return 0;
}
/*The input file contains two lines of data. In each 
line there will be 3 values: two integers and a floating
 value with 2 digits after the decimal point.

 VERIFICAR ESSA PARTE!
*/