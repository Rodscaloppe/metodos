#include <iostream>
#include <cmath> 
using namespace std;

double funcao( double x ){

return((4+8*x)*cosh(2*x));

}

main(){
int i, n;
double a, b, aux;
cout<<"                              METODO DOS TRAPEZIOS"<<endl;
cout<<"Digite o valor de a"<<endl;
cin>>a;
cout<<"Digite o valor de b"<<endl;
cin>>b;
cout<<"Digite o valor de n"<<endl;
cin>>n;
if(a>b){ ///condição para que o valor de b seja sempre o maior valor
        aux=a;
        a=b;
        b=aux;
    }
double x[n], y[n], h, I;
h=(b-a)/n;
for(i=0;i<=n;i++){
    x[i]=a+i*h;
    y[i]=funcao(x[i]);
}
I=(y[0]+y[n])/2;
for(i=1;i<n;i++){
 I=I+y[i];
}
I=h*I;
cout<<"\nA aproximacao da integral numerica eh "<<I<<endl;
}
