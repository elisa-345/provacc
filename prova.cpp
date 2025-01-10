#include <iostream>
using namespace std; 

int main()
{
   int m1[5][2];
  
    int i,j;
    
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
             cout<<"inserisci elemento"<<i<<" e "<<j<<endl;
             cin >> m1[i][j];
             if(m1[i][j]==3){cout<<"nella matrice è presente il numero 3 \n";}

        }}
        cout<<"la matrice è";
        cout<<endl;
        for(i=0;i<5;i++){
        for(j=0;j<2;j++){
             cout<< m1[i][j]<<" ";
        
    }
       cout<<endl;}      
}
