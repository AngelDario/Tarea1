#include <iostream>

using namespace std;

int main()
{
/*
//ejersicio1
    int edad;

    cout<<"Ingrese su edad : ",cin>>edad, cout<<"\n";

    if(edad>=18){
        cout<<"Es mayor de edad"<<endl;

    } else {
         cout<<"Es menor de edad"<<endl;
    }

//ejersicio2
    int n, i;

    i=1;

    cout<<"Ingresa un numero : ",cin>>n;

    cout<<i<<",";

    while(i!=n){
        i++;
        cout<<i;
        if(i!=n){
            cout<<",";
        }
    }

//ejersicio3

    int x, y;
    float promedio;

    promedio=(float)(x+y)/2;

    cout<<"Ingresa el primer numero : ", cin>>x;
    cout<<"Ingresa el segundo numero : ", cin>>y;

    if (x>y){

        cout<<"El mayor es : "<<x<<endl;
        cout<<"El menor es : "<<y<<endl;

    }else{

        cout<<"El mayor es : "<<y<<endl;
        cout<<"El menor es : "<<x<<endl;

    }

    cout<<"El promedio es : "<<promedio<<endl;

//ejersicio4

    int numero1, numero2, cuadrado;

    cout<<"Ingresar el primer numero : ", cin>>numero1;
    cout<<"Ingresar el segundo numero : ", cin>>numero2;

    if(numero1%2==0 && numero2%2==0){
        cout<<"Ambos numeros son multiplos de 2"<<endl;
    }else if(numero1%2!=0 && numero2%2!=0) {
        cout<<"Ambos numeros no son multiplos de 2"<<endl;
    }else if(numero1%2==0 && numero2%2!=0){
        cout<<numero1<<" es multiplo de dos"<<endl;
        cout<<numero2<<" no es multiplo de dos"<<endl;
    }else{
        cout<<numero1<<" es multiplo de dos"<<endl;
        cout<<numero2<<" no es multiplo de dos"<<endl;
    }

    if(numero2%numero1==0){
        cout<<numero1<<" es multiplo de "<<numero2<<endl;
    }else if(numero1%numero2==0){
        cout<<numero2<<" es multiplo de "<<numero1<<endl;
    }

    cuadrado=numero1*numero1;

    if(cuadrado==numero2){
        cout<<"el primer numero elevado al cuadrado es igual al segundo"<<endl;
    }

//ejercicio 5
    int a, i;
        cout<<"Ingrese un numero : ", cin>>a;

    for(i=2; i!=a; i++){
        if(a%i==0){
            cout<<"no es primo";
            break;
        }else if(i+1==a){
            cout<<"es primo";
            break;
        }else if(i==2){
            cout<<"es primo";
            break;
        }else if(i==1){
            cout<<"es primo";
            break;
        }
    }



//ejrcicio 6
    int n;
    cout<<"Ingrese un numero : ", cin>>n;

    for (int j=2;j<=n;j++){
        int a=0;
        for(int i=1;i<=n;i++){
            if(j%i==0){
            a++;
            }
        }
        if (a==2){
            cout<<j<<'\t';
        }
    }


// ejercicio 7
   int numero5d, res, ent, cont=5;

    cout<< "ingrese un numero de 5 digitos", cin>>numero5d;

    cout<<numero5d%10<<'\t';

    while(cont!=1){

        numero5d=numero5d/10;
        res=numero5d%10;
        cout<<res<<'\t';
        cont=cont-1;

    }
//Ejercicio9


	int a;
	cout<<"Ingrese un anio : ", cin>>a;

	if(a%100==0){
        if(a%400==0){
            cout<<"El anio es bisiesto"<<endl;
        }else{
            cout<<"El anio no es bisiesto"<<endl;
        }
    }else if (a%4==0){
        cout<<"Es bisiesto"<<endl;
    }else{
        cout<<"El anio no es bisiesto"<<endl;
    }

//Ejericcio10

    int x,a,b,c;

    cout<<"Ingrese un numero : ", cin>>x;

    x=x-3;
    a=0;
    b=1;

    cout<<a<<","<<b<<",";

    for(int i=0;i<=x;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<",";
    }
*/
//Ejercicio Extra

    int n, l=1;

    cout<<"Ingrese un numero : ", cin>>n;

    for(int i=1; i<=n; i++){
        l=l*i;
    }
    cout<<"Factorial : "<<(long long) l;
}


