#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

using namespace std; 

int main(Nmax=101){
int k;
int j;
    
float v_old[101][101];
float v_new[101][101];
float e[101][101]
while (e<0.002){   
for(k=0;k<=Nmax;k++){
    for(j=0;j<=Nmax;j++){
        if (j==41 && 20>k<80){
                v_old[k][j]=100;
            }
        else{
            v_old[k][j]=0;
            }
        }
    }
    
 for(k=0;k<=Nmax;k++){
     for(j=0;j<=Nmax;j++){
         if (j==0 || j==61 || j==41 && k==0 || 20<k<80){
         v_new[k][j]=1/4*(v_old[k+1][j]+v_old[k-1][j]+v_old[k][j+1]+v_old[i][j-1]);
         }
     }
}

for(k=0;k<=Nmax;k++){
     for(j=0;j<=Nmax;j++){
         if (j==41 && 20<k<80){
             e = 
         }
    
}
}
}
