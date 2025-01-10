#include <iostream>
using namespace std; 

int main()
{
   int m1[5][2];
  
    int i,j;
    
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            m1[i][j] = std::rand() % 100 + 1;

             if(m1[i][j]==3){cout<<"il numero 3 si trova "<<i<<" e "<<j<<"\n";}

        }}
        cout<<"la matrice è";
        cout<<endl;
        for(i=0;i<5;i++){
        for(j=0;j<2;j++){
             cout<< m1[i][j]<<" ";
        
    }
       cout<<endl;}      
}
