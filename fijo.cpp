	#include <iostream>
    #include <cstdlib>
    #include <cmath>
    #include <iomanip>
  
    using namespace std;

    float calculos(float xi, float val, float xa, float iter);

    int main()
{
  
    float xi, val, xa=100, raiz;
    int iter;
    cout<<"\t\t\tMETODO DE ITERACION DE PUNTO FIJO\n"<<endl;
    cout<<"PARA LA FUNCION: (e^-x)-x\n\n"<<endl;
    cout<<"Introduce El valor de Xo para evaluar: ";
    cin>>xi;
    cout<<"Introduce x verdadero: ";
    cin>>val;
    cout<<"Introduce numero de iteraciones: ";
    cin>>iter;
    cout<<endl;
    cout<<"\tXi+1"<<"\t\t\tEv"<<"\t\t\tEa"<<endl;
    raiz=calculos(xi,val,xa,iter);
    cout<<endl;
    cout<<"\nLa raiz es: "<<raiz<<"\n"<<endl;
    system("pause");

    return 0;
}

    float calculos(float xi, float val, float xa, float iter)
{
    float xr=xi, ev, ea;
    int num=0;
    do
    {
      cout<<endl;
      if(num!=0)
      {
      xr=exp(-x);
      ea=fabs((xr-xa)/xr)*100;
      }
      ev=fabs((val-xr)/val)*100;
      cout<<num<<"\t"<<fixed<<setprecision(8)<<xr<<"\t\t"<<ev<<"%"<<"\t\t"<<ea<<"%"<<endl;
      num++;
      xa=xr;
    }
    while((fabs(xr)!=val)&&(num<=iter));
    return xr;
}
