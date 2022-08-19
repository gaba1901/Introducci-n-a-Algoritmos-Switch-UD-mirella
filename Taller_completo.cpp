#include<iostream>
#include <stdio.h>
#include <windows.h>
#include<conio.h>
#include<iomanip>
#include<cstring>
#include<string.h>
//Variables Primer ejercio y funciones.:D 
using namespace std;
int L;
int P1=-1,P2=-1,P3=-1,B,p1,p2,p3;
int i;
bool N=true;
int n1,n2,n3;
int T(int Q, int W, int E){
	int TT= Q + W + E;
	return TT;
}
//Variables Segundo ejercio y funciones.:D 
int Suma(int g, int l){
	return g+l;
}
//Variables tercer ejercio y funciones.:D 
float F[10], DM[10],G[10];
float A3[10],A4[10],A5[10],A6[10],A7[10],A8[10],A9;
int E;	
long B234=0.0;
//Variables Cuarto ejercio y funciones.:D 
char Palabra[20];
string nombre;
int Longitud;
int Q = 0;
int P,Q2;
float P22;
//Variables de este ejercicio
int op;
int main()
{
setlocale(LC_ALL, "spanish");
while(op != 1 && op != 2 && op != 3 && op != 4 && op != 5){
		cout<<"¿Que ejercicio desea realizar?(Digite el numero):\n";
		cout<<"1. EJERCICIO 1 CENTRO COMERCIAL"<<endl;
		cout<<"2. EJERCICIO 2 SUCESION DE FIBONACCI"<<endl;
		cout<<"3. EJERCICIO 3 PROBLEMA DE FORMULA MATEMATICA"<<endl;
		cout<<"4. EJERCICIO 4 PALINDROMOS"<<endl;
		cout<<"5. SALIR"<<endl;
		cin>>op;
		//Si el usuario digita una opcion no valida
		if(op != 1 && op != 2 && op != 3 && op != 4 && op != 5)
		{cout<<"Dijite de nuevo una opcion"<<endl;
		system("PAUSE");system("cls");}
	}
	switch(op)
	{
	case 1:	
	{
					cout<<"--------------------------------------------";
					cout<<"--PRORGRAMA-DE-CENTRO-COMERCIAL--";
					cout<<"-------------------------------------------"<<endl;
					system("color 5F");
	 				while (P1<6 or P1>30){
					//Para poder saber la cantidad de locales que tiene el
					//1 piso del centro comercial.	
  					cout <<"Ingrese la cantidad de locales ";
					printf("del piso 1");
					cout <<""<< endl;
					scanf("%d", &P1);
									}
					while (P2<0 or P2>30)
					{
					//Para poder saber la cantidad de locales que tiene el
					//2 piso del centro comercial.
					cout <<"Ingrese la cantidad de locales ";
					printf("del piso 2");
					cout <<""<< endl;
					scanf("%d", &P2);
					}
					while(P3<0 or P3>30)
					{
					//Para poder saber la cantidad de locales que tiene el
					//3 piso del centro comercial.
					cout <<"Ingrese la cantidad de locales ";
					printf("del piso 3");
					cout <<""<< endl;
					scanf("%d", &P3);
				
					}
					for (i=1;i<=P1;i++){
						//El solitar el dinero del piso 1, y de cada uno de los locales 
					cout<<"Ingrese el dinero recaudado por el local "<<i<<" En el piso 1."<< endl; 
					scanf("%d", &B);
					if(B<500000)
					{
						cout<<"El dinero recaudado es muy poco,consulte de nuevo la contabilidad "<<endl;
						cout<<"Vuelva a intentarlo"<<endl;
						i-=1;
						B=0;
					}
					if(B>=10000000)
					{
					cout<<"El dinero recaudado es mucho,esta de casualidad labando activos"<<endl;
					cout<<"Vuelva a intentarlo"<<endl;
					i-=1;
					B=0;
					}
					if(B<0)
					{
						cout<<"Es un numero negativo"<<endl;
						cout<<"Vuelva a intentarlo"<<endl;
						i-=1;
						B=0;
					}
					p1=Suma(p1,B);
					}
					cout <<"El dinero reolectado por el piso 1 es de:"<<p1<<endl;
					system("PAUSE");	
					    cout<<"--------------------------------------------";
						cout<<"--PORGRAMA-DE-CENTRO-COMERCIAL--";
						cout<<"--------------------------------------------"<<endl;
					for (i=1;i<=P2;i++){
						//El solitar el dinero del piso 2, y de cada uno de los locales 
						cout<<"Ingrese dinero recolectado por el local"<<i<<" En el piso 2."<< endl; 
						scanf("%d", &B);
						if(B<500000)
						{
							cout<<"El dinero recaudado es muy poco,consulte de nuevo la contabilidad "<<endl;
							cout<<"Vuelva a intentarlo"<<endl;
							i-=1;
							B=0;
						}
						if(B>=10000000)
						{
						cout<<"El dinero recaudado es mucho,esta de casualidad labando activos"<<endl;
						cout<<"Vuelva a intentarlo"<<endl;
						i-=1;
						B=0;
						}
						if(B<0)
						{
						cout<<"Es un numero negativo"<<endl;
						cout<<"Vuelva a intentarlo"<<endl;
						i-=1;
						B=0;
						}
						p2=Suma(p2,B);
						}
						cout <<"El dinero reolectado por el piso 2 es de:"<<p2<<endl;
						system("PAUSE");
						system("cls");
							cout <<"El dinero reolectado por el piso 1 es de:"<<p1<<endl;
						system("PAUSE");	
						for (i=1;i<=P3;i++){
							//El solitar el dinero del piso 3, y de cada uno de los locales 
							cout<<"Ingrese dinero recolectado por el local"<<i<<" En el piso 3."<< endl; 
							scanf("%d", &B);
							if(B<500000)
							{
						cout<<"El dinero recaudado es muy poco,consulte de nuevo la contabilidad "<<endl;
						cout<<"Vuelva a intentarlo"<<endl;
						i-=1;
						B=0;
					}
					if(B>=10000000)
					{
						cout<<"El dinero recaudado es mucho,esta de casualidad labando activos"<<endl;
						cout<<"Vuelva a intentarlo"<<endl;
						i-=1;
						B=0;
					}
					if(B<0)
					{
						cout<<"Es un numero negativo"<<endl;
						cout<<"Vuelva a intentarlo"<<endl;
						i-=1;
						B=0;
					}
					p3=Suma(p3,B);
				}
				cout <<"El dinero reolectado por el piso 3 es de:"<<p3<<endl;
				system("PAUSE");
			    cout<<"--------------------------------------------";
				cout<<"--PORGRAMA-DE-CENTRO-COMERCIAL--";
				cout<<"--------------------------------------------"<<endl;
				L= T(p1,p2,p3);
			  cout <<"El total del centro comercial es de:"<<L<< endl;	
			  break;
		}
	case 2:
	{
	
				system("color 5F");
			    cout<<"--------------------------------------------------";
				cout<<"--SERIE-FIBONACCI--";
				cout<<"--------------------------------------------------"<<endl;
			          int i,a=0,b=1,c,n;
			          cout <<"ingresa la cantidad de numeros que deseas ver:";
			         scanf("%d", &n);
			         if(n<0)
					 {
					cout<<"Es un numero negativo"<<endl;
					cout<<"Vuelva a intentarlo"<<endl;
					 }
					 if(n>100)
					 {
					cout<<"El numero es absurdo"<<endl;
					cout<<"Vuelva a intentarlo"<<endl;
					 }
					else{
					//debe de ser 1 por que si no me mostraria mas numeros 
					//por ejemplo 7 me mostraria 8 numeros de la succecion
			          for(i=1;i<=n;i++){
			             cout<<a<<" ";
			             c=Suma(a,b);
		             a=b;
		             b=c;
		          }
		      }
		          cout <<""<<endl;
		          system("PAUSE");
		          break;
		}
	
	case 3:
		{	int P234,Q234;
	float A2;
	system("color 5F");
	cout<<"Cuantas veces quiere que se resuelva la serie: "<<endl;
	scanf("%d", &P234);
	cout<<"Ipotencia;ngrese el numero de n: "<<endl;
	scanf("%d", &Q234);
	for(int i=1;i<=P234;i++)
	{
		//factorialdel numerando 
		int n=1;
		for(int S=1;S<=i+1;S++){
			n*=S;
			}
	
		F[i]=n;
		//cout<<"Factorial"<<F[i]<<endl;
		//El elevado de la divicion
		int D=i*2;
		D += 1;
		int auxiliar = D;		
		for(int l=0; l< Q234 - 1; l++){			
			D *= auxiliar;
		}
		DM[i] = D;
		//cout<<"Divisor"<<DM[i]<<endl;
		A2=F[i]/DM[i];
		//cout<<"Solucion divicion"<<A2<<endl;
		A3[i]=A2;
		E=Q234+1;
		float B234 = A3[i];
		while(E>1)
		{
			B234=B234*A3[i];
			E--;
		}
		//cout<<"potencia"<<fixed <<setprecision(11)<<B234<<endl;
		G[i]=B234;
		if(i%2!=0)
		{
			
			A6[i]=G[i];
			A7[i]=+A6[i];
		}
		else
		{
			A5[i]=G[i]*-1;
			A8[i]=+A5[i];
		}
		A9=A8[i]+A7[i];
	}
	cout<<"Solucion de la formula:"<<fixed <<setprecision(11)<<A9<<endl;
	system("pause");
	break;
	}
	
	case 4:	system("color 5F");
		    cout<<"--------------------------------------";
			cout<<"--PROGRAMA-PARA-LAS-PALABRAS-PALINDROMAS--";
			cout<<"--------------------------------------"<<endl;
		    cout << "Inserte la palabra:";
		    scanf("%s",Palabra);
		    Longitud=strlen(Palabra);
    
		    for(i=0;i<Longitud ;i++){
		        if(Palabra[i] != Palabra[Longitud-i-1]){
		            Q = 1;
		            break;
		           }
		        }
		    
		    if (Q==1) {
		        cout << Palabra << " Esta palaba NO es palindroma " << endl; 
		    }    
		    else {
		        cout << Palabra << " Esta palaba SI es palindroma " << endl; 
		    }
   			 system("pause");
   			 break;
	case 5:
	cout<<"\nGracias por usar este programa vuelva pronto"<<endl;
		break;
	}
	
	
	
}
	
