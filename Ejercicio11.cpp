// 11. Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares



#include<iostream>
  
   using namespace std; 
      int main(){
      	int saldoinicial = 1000,opc,extra,b,saldo_inicial_suma = 0, saldo_inicial_resta;
      	
      	
      	
      
      	cout<<"Bievenido a su cajero automatico, por favor realice la transaccion"<<endl; 
		cout<<"Tenga en cuenta que su saldo inicial es de $1000."<<endl;
      	cout<<"1. Ingresar dinero en su cuenta"<<endl;
      	cout<<"2. Retirar dinero en su cuenta"<<endl;
      	cout<<"3. Salir"<<endl;
      	cout<<"Opcion: "<<endl;
      	cin>>opc;
      	
      switch(opc){
      	
      	case 1: cout<<"Ingresar la cantidad de dinero que desea depositar: ";
		        cin>>extra;	
		        
				saldo_inicial_suma = (saldoinicial + extra);
      	
		        
		        cout<<"El nuevo monto de su cuenta es de: "<<saldo_inicial_suma<<endl; break;
		        
		    
      	case 2: cout<<"Ingresar la cantidad de dinero que quiere retirar: ";
      	        cin>>b; 
      	        
      	       if( b > saldoinicial){
      	       	
      	       	
      	       	cout<<"No dispone de esa cantidad de dinero"<<endl;
      	       	
      	       	
      	       	
				 }
      	        else{
      	        	
      	        	saldo_inicial_resta = (saldoinicial - b);
      	        	
      	        	cout<<"El valor de su cuenta luego de la transaccion es de: "<<saldo_inicial_resta<<endl; break;
      	        	
				  }
				  
				  
      	case 3: cout<<"Buenas Tardes"<<endl; break;

      	
	  }
           
    
    
    
    
    
    return 0;
	}
