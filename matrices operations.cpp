#include <iostream>
using namespace std;
int main()
{
int E;
do{
        int x;
        cout<<"which equation you want to calculat....?"<<endl;
        cout<<"enter (1) for calculat inner product of vec"<<endl;
        cout<<"enter (2) for calculate outer product of vec"<<endl;
        cout<<"enter (3) for calculate vex*matrix"<<endl;
        cout<<"entre (4) for calculate mtrix*vec"<<endl;
        cout<<"entre (5) for calculate matrix*matrix"<<endl;
        cout<<"entre (6) for transpose your matrix"<<endl;
        cout<<"entre (7) to sum 2 matrix"<<endl;
        cin>>x;
 //inner product of vector
    if(x==1){
        int n,inner=0;
        cout<<"enter size of each matrix"<<endl;
        cin>>n;
        int A[n],B[n];
        cout<<"enter the first matrix values"<<endl;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        cout<<"enter the second matrix values"<<endl;
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        for(int i=0;i<n;i++){
            inner+=A[i]*B[i];
        }
        cout<<"inner product is equal="<<inner<<endl;

    }
 //outer product of vector
    else if(x==2){
        int n,m;
        cout<<"enter size of first matrix then second one(same size)"<<endl;
            cin>>n>>m;
        int A[n],B[m],C[n][m];
            cout<<"enter values of first matrix"<<endl;
        for(int i=0;i<n;i++)
            cin>>A[i];
        cout<<"enter values of second matrix"<<endl;
        for(int i=0;i<1;i++){
            for(int j=0;j<m;j++){
                cin>>B[j];
            }
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
            C[i][j]=A[i]*B[j];
            }
        cout<<"matrix1*matrix2 is ="<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            cout<<C[i][j]<<"  ";
            }
        cout<<endl;
    }
}
//(Vector*Matrix
else if(x==3){
        int n1,m1,l1,y1=0;
        cout<<"entre size of vec X"<<endl;
           cin>>n1;
        cout<<"entre the size of matrix A"<<endl;
           cin>>l1;
        int X[n1],A[n1][l1];
        cout<<"entre values of vec X"<<endl;
        for(int i=0;i<n1;i++){
            cin>>X[i];
        }
        cout<<"enter values of matrix A"<<endl;
        for(int i=0;i<n1;i++)
            for(int j=0;j<l1;j++){
              cin>>A[i][j];
            }
        for(int j=0;j<l1;j++)
            for(int i=0;i<n1;i++){
                y1+=X[i]*A[i][j];
            }

        cout<<"vec*matrix="<<y1<<endl;
}
//matrix*vector operation
else if(x==4){
        int n2,m2,y2=0;
        cout<<"entre the size of matrix A"<<endl;
            cin>>n2;
        cout<<"enter the size of vec X"<<endl;
            cin>>m2;
        int A[n2][m2],X[m2];
        cout<<"enter the values of matrix A"<<endl;
        for(int i=0;i<n2;i++)
            for(int j=0;j<m2;j++){
                cin>>A[i][j];
            }
      cout<<"enter the values of vec X"<<endl;
      for(int j=0;j<m2;j++){
        cin>>X[j];
      }
      cout<<"matrix*vector="<<endl;
      for(int i=0;i<n2;i++)
        for(int j=0;j<m2;j++){
          y2+=A[i][j]*X[j];
        }
        cout<<y2<<endl;
}
//matrix*matrix operation
else if(x==5){
      int n3,m3,l3;
      cout<<"enter the size of first matrix A"<<endl;
          cin>>n3>>m3;
      cout<<"enter size of second matrix B"<<endl;
          cin>>l3;
      int A[n3][m3],B[m3][l3],c[n3][l3];
      cout<<"enter values matrix A"<<endl;
        for(int i=0;i<n3;i++)
            for(int j=0;j<m3;j++){
                cin>>A[i][j];
            }
      cout<<"enter values matrix B"<<endl;
        for(int i=0;i<m3;i++)
            for(int j=0;j<l3;j++){
                cin>>B[i][j];
            }
        for(int i=0;i<l3;i++)
            for(int j=0;j<m3;j++){
                c[i][j]=0;
            }
      cout<<"your new matrix is ="<<endl;
        for(int i=0;i<n3;i++){
            for(int j=0;j<m3;j++){
                for(int k=0;k<l3;k++){
                    c[i][j]+=A[i][k]*B[k][j];
                }
            cout<<"  "<<c[i][j];
            }
        cout<<endl;
        }
}
//Transpose Operation
else if(x==6){
      int n,m;
      cout<<"enter the size of matrix A"<<endl;
        cin>>n>>m;
      int A[n][m];
      cout<<"enter values of matrix A"<<endl;
      for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
      cout<<"tarnspose is ="<<endl;
      for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout<<" "<<A[i][j];
        }
      cout<<endl;
      }
}
//sum of two matrices
else if(x==7){
      int n,m;
      cout<<"entre the size of to matrix (the same size)"<<endl;
        cin>>n>>m;
      int A[n][m],B[n][m],C[n][m];
      for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            C[i][j]=0;
        }
      cout<<"enter values of first matrix A"<<endl;
      for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
     cout<<"enter values of matrix B"<<endl;
     for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>B[i][j];
        }
     cout<<"the summttion of two matrix is ="<<endl;
     for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<" "<<C[i][j];
        }
        cout<<endl;
    }
}
//to make repeation
cout<<"Do you want to do another operation....?"<<endl<<"enter '0' for exit or '1' for reapet"<<endl;
cin>>E;
}
while(E==1);
return 0;
}
