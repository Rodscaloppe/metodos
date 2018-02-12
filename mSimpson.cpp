#include <iostream>
#include <cmath> 
using namespace std;

double funcao(double x){
return ((4+8*x)*cosh(2*x));
}

main(){
int i, n;
double a, b, h, aux;
cout<<"                                1/3 DE SIMPSON\n"<<endl;
cout<<"Digite o valor de a"<<endl;
cin>>a;
cout<<"Digite o valor de b"<<endl;
cin>>b;
cout<<"Digite o numero de intervalos. Obs: O numero deve ser par."<<endl;
cin>>n;
 if(a>b){ ///condição para que o valor de b seja sempre o maior valor
        aux=a;
        a=b;
        b=aux;
    }
double x[n], y[n], I=0;
h=(b-a)/n;
for(i=0;i<=n;i++){
    x[i]=a+h*i;
    y[i]= funcao(x[i]);
}
for(i=1;i<n;i++){
        if(i%2==0){
                 I= I + 2*y[i];
        }
        else{
                 I= I + 4*y[i];

        }

}

I= I + y[0]+y[n];
I=(h/3)*I;
cout<<"\n\nO valor aproximado da integral eh "<<I<<endl;
}
