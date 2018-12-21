#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(int argc, char *argv[])
{
double x;
x=atof(argv[1]);

int nLow=0, nHigh=1, dLow=1, dHigh=0,nMed, dMed;
do{
   nMed=(nLow+nHigh);
   dMed=(dLow+dHigh);
   
  if(dMed*x >nMed)
   {
    nLow=nMed;
    dLow=dMed;
    
   }

    else
   {
    nHigh = nMed;
    dHigh = dMed;
    
  
    
   }
   
}    while(dMed <= 1000000 && fabs(x *dMed-nMed)>=dMed*(1E-6));
    cout << nMed <<"/"<< dMed<<endl;
   
    return 0;
   }

