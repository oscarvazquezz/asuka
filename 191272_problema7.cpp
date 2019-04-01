#include <iostream>
using namespace std;

float precio [6]={1879,2435,6190,573.90,9490,878.70};
void menu ();
float cambio (float total,int eleccion);

int main ()
{
	 menu ();
}

void menu ()
{
	 int opcion,res,decision,clientes=2;
	 float total=0,cantidad;
	 int eleccion;

	 cout << "                        oferta de clase"<<endl;
	 cout << "------------------------------------------------------------------"<<endl;
	 cout << "| 1.-combo estudio (escritorio para computo + silla secretarial) |"<<endl;
	 cout << "| 2.-combo dibujo (mesa de dibujo + banco metalico)              |" <<endl;
	 cout << "| 3.-laptop HP (procesador celeron , RAM 4 GB)                   |" <<endl;
	 cout << "| 4.-laptop HP (procesador core i3, RAM 4 GB)                    |" <<endl;
	 cout << "------------------------------------------------------------------"<<endl;
	 
	  while (decision!=2 && clientes!=0) 
	 {  
         while (opcion<=0 || opcion>4  || opcion==res)
	 	 {
		     cout << "que producto deseas:"<<endl;
			 cin >> opcion;	
		 }
	     res=opcion;
		 switch (opcion)
		     {
			 	 case 1:
	                 cantidad=precio[0];
	                 cout << "el precio del combo de estudio es de:$"<<cantidad<<endl;
			 	 break;
			     case 2:
			     	 cantidad=precio[1];
	                  cout << "el precio del combo de dibujo es de:$"<<cantidad<<endl;		    
			 	 break;
			 	 case 3:
			 	 do
			 	 {
			 	 	 cout << "lo deseas pagar a contado(1) o a credito(2) la laptop HP"<<endl;
	                 cin >> eleccion;
	 
				 }while (eleccion!=1 && eleccion!=2);   
			 	 	
				 if (eleccion<=1)
				 {
					 cantidad=precio[2];
					 cout << "el precio de tu lapto HP es de:$"<<cantidad<<endl;
				 }
				 else 
				 {
					 cantidad=precio[3];
					 cout << "el precio de tu lapto HP es de:$"<<cantidad<<endl;
				 }
			     break;
			 	 case 4:
			     do
			 	 {
			 	 	 cout << "lo deseas pagar a contado(1) o a credito(2) la laptop HP"<<endl;
	                 cin >> eleccion;
	 
				 }while (eleccion!=1 && eleccion!=2);   
			 	 	
				 if (eleccion<=1)
				 {
					 	 cantidad=precio[4];
						 cout << "el precio de tu lapto HP es de:$"<<cantidad<<endl;
				 }
				 else 
				 {
					 cantidad=precio[5];
					 cout << "el precio de tu lapto HP es de:$"<<cantidad<<endl;
				 }	
			 	 break;
		     }
		 clientes=clientes-1;
		 total=total+cantidad;
		 do
		 {
		     cout<< "deseas comprar otro producto si(1) o no (2)"<<endl;
		     cin >> decision;
		 }while (decision!=1 && decision!=2);   
	 }
	 cambio (total,eleccion);
	  
}

float cambio (float total,int eleccion)
{
	 float dinero,cambio_total;

     cout << "tu total de tu compra es de:$"<<total <<endl;	
	 while (dinero<total) 
	  {
	  	 cout<< "ingrese la cantidad que deseas pagar"<<endl;
	     cin >> dinero;
	  }
	 cambio_total=dinero-total;
	 cout << "tu cambio es de:$ "<<endl<<cambio_total<<endl;
	 if (eleccion>=2)
  	 {
		cout << "ahora te falta de realizar 11 pagos en tu producto de a credito"<<endl;
	 }	
	 return cambio_total;
}

