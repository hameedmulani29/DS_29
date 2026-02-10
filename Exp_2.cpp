#include <iostream>
using namespace std;

int main()
{
int A[2][2], B[2][2], C[2][2];
int i, j, choice;
cout << "Enter elements of first matrix:\n";
for(i=0;i<2;i++)
    for(j=0;j<2;j++)
        cin >> A[i][j];

cout << "Enter elements of second matrix:\n";
for(i=0;i<2;i++)
    for(j=0;j<2;j++)
        cin >> B[i][j];

cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Identity Matrix\n";
cout << "Enter choice: ";
cin >> choice;
switch(choice) {
case 1: 
cout << "Addition:\n";
for(i=0;i<2;i++){
for(j=0;j<2;j++){
C[i][j] = A[i][j] + B[i][j];
cout << C[i][j] << " ";
}
cout << endl;
}
break;
case 2: 
cout << "Subtraction:\n";
for(i=0;i<2;i++){
for(j=0;j<2;j++){
C[i][j] = A[i][j] - B[i][j];
cout << C[i][j] << " ";
}
cout << endl;
}
break;
case 3: 
cout << "Multiplication:\n";
for(i=0;i<2;i++){
for(j=0;j<2;j++){
C[i][j] = 0;
for(int k=0;k<2;k++)
C[i][j] += A[i][k] * B[k][j];
cout << C[i][j] << " ";
}
cout << endl;
}
break;
case 4: 
cout << "Transpose of first matrix:\n";
for(i=0;i<2;i++){
for(j=0;j<2;j++)
cout << A[j][i] << " ";
cout << endl;
}
break;
case 5: 
cout << "Identity Matrix:\n";
for(i=0;i<2;i++){
for(j=0;j<2;j++){
if(i==j) cout << "1 ";
else cout << "0 ";
}
cout << endl;
}
break;
default:
cout << "Invalid input";
}
return 0;
}