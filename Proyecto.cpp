#include <iostream>
//dos matrices (una general y preferencial)
//

using namespace std;

main()
{
   
    int silleteria2 [11][20];
    int  fila, columnas; 
  
    int op; //opción
    cout<<"bienvenido a mi venta de silleteria de mi servicio\n";
    cout<<"Selecciona una opción: ";
    
    int i=0, j=0;
    cout<<""<<endl;
     cout<<"\n 1. RESETEAR LA SILLETERIA POR FAVOR  \n";
    do
    {
        cout<<"\n###################################";
        cout<<"###################################";
        cout<<"\n2. Mostrar la sillteria\n";
        cout<<"3. hacer reserva \n";
        cout<<"4. Calcular el valor de toda la silleteria\n";
        cout<<// agregar opcion y nombre de 
        cout<<"5. Salir\n";
        cin>>op;
       
        switch (op)
        {
          case 1:
          {
            for (i=0 ; i<11 ; i++)
            {
                for (j=0; j<20 ; j++)
                {
                    silleteria2 [i][j]=0;
                }
            }
            cout<<" La silleteria ha sido reseteada";    
          }break;
          case 2:
          {
             cout<<"A continuación se presenta las silleterias: \n";
                
             for (i=0 ; i<11 ; i++)
            {
                for (j=0; j<20 ; j++)
                {
                    cout<<silleteria2 [i][j];
                }
                cout<<endl;  // cout<<"\n";
            }
          }break;
          case 3:
          {
             
              cout<<"Ingresa el número de la fila (1-11): ";
              cin>>i;
              cout<<"Ingresa el número de la columna: (1-20)";
              cin>>j;
              silleteria2 [i-1][j-1]=1;
          }break;
          case 4:
          {
            int acum=0;
            for (i=0 ; i<11 ; i++)
            {
                for (j=0; j<20 ; j++)
                {
                    if (i<=3)
                        acum=acum+silleteria2 [i][j]*11000;
                    else
                        acum=acum+silleteria2 [i][j]*8000;
                }
            }
            cout<<"el precio de su recervación es de : "<<acum<<endl;
          }break;
          default:
          {
              cout<<"Intenta nuevamente,";
          }
        };
       
    }while (op != 5);
    cout<<" Gracias por usar mi app";
}