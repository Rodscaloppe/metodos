#include <iostream>
#include <cmath> 
using namespace std;


double funcao (double x){ 

return (4*sin(x)- exp(x));


}


main(){
double a, erro, e, f_a, b, f_b, c, f_c, i=0;
cout<<"                          METODO DA SECANTE"<<endl;
cout<<"\nDigite o valor de 'a':"<<endl;
cin>>a;
cout<<"\nDigite o valor de 'b':"<<endl;
cin>>b;
cout<<"\nInforme a precisao desejada:"<<endl;
cin>>e;

    if(a==b){
        cout<<"\nOs valores devem ser diferentes. Digite um novo valor para 'b':"<<endl;
        cin>>b;
        }
    else{

        f_a=funcao(a);
        f_b=funcao(b);
        c=(a*f_b - b*f_a)/(f_b-f_a);
                erro=abs(b-a);
                i++;
                while(erro>e){ 
                        i++;
                            a=b;
                            b=c;
                            f_a=funcao(a);
                            f_b=funcao(b);
                            c=(a*f_b - b*f_a)/(f_b-f_a);
                            erro=abs(b-a);
                            f_c=funcao(c);

                }
                  cout<<"\nA raiz eh:"<<c<<endl;
                  cout<<"\nO erro eh:"<<erro<<endl;
                  cout<<"\nO numero de iteracoes eh: "<<i<<endl;

        }

    }

