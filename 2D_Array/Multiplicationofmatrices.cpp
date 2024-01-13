// #include<iostream>
// using namespace std;

// int main(){

//     int r1,c1;
//     cin>>r1>>c1;
//     int r2,c2;
//     cin>>r2>>c2;

//     int matrix1[r1][c1];
//     int matrix2[r2][c2];

//     cout<<"Enter elements of 1 matrix : "<<endl;
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             cin>>matrix1[i][j];
//         }
//     }

//     cout<<"Enter elements of 2 matrix : "<<endl;
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             cin>>matrix2[i][j];
//         }
//     }

//     int ansmatrix[r1][c2];
//     if(r2==c1){
//         for(int i=0;i<r1;i++){
//             for(int j=0;j<c2;j++){
//                 int ans=0;
//                 for(int k=0;k<c2;k++){
//                     ans+=matrix1[i][k]*matrix2[k][j];
//                 }
//                 ansmatrix[i][j]=ans;
//             }
//         }
//     }

//     cout<<"Multiplication of 2 matrix : "<<endl;
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             cout<<ansmatrix[i][j]<<" ";
//         }cout<<endl;
//     }

// }

