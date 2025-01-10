#include <iostream>
using namespace std; 

int main()
{
   int m1[2][2];
   int m2[2][2];
   int m3[2][2];
    int i,j,p;
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
             cout<<"inserisci elemento"<<i<<" e "<<j<<endl;
             cin >> m1[i][j];

        }
          
        }
        
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
             cout<<"inserisci elemento"<<i<<" e "<<j<<endl;
             cin >> m2[i][j];

        }
          
        }
         for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            p=m1[i][j]*m2[i][j];
            m3[i][j]=p ;

        }
          
        }

        
        cout<<"la matrice è";
        cout<<endl;
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
             cout<< m1[i][j]<<" ";
        
    }
            cout<<endl;}
            cout<<"la matrice è";
        cout<<endl;
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
             cout<< m2[i][j]<<" ";
        
    }
            cout<<endl;
        }
        
          cout<<"la matrice è";
        cout<<endl;
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
             cout<< m3[i][j]<<" ";
        
    }
            cout<<endl;
        }
        }
