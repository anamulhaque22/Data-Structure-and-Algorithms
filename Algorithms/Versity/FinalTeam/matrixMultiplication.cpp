#include <iostream>
using namespace std;

void multiplication(int mat1Row, int mat1Col, int mat2Col)
{
    int A[mat1Row][mat1Col];
    int B[mat1Col][mat2Col];
    int C[mat1Row][mat2Col];

    cout<<"Enter first matrix value"<<endl;
    for (int i = 0; i < mat1Row; i++)
    {
        for (int j = 0; j < mat1Col; j++)
        {
            cin>>A[i][j];
        }
        
    }

    cout<<"Enter second matrix value"<<endl;
    for (int i = 0; i < mat1Col; i++)
    {
        for (int j = 0; j < mat2Col; j++)
        {
            cin>>B[i][j];
        }
        
    }

    for (int i = 0; i < mat1Row; i++)
    {
        for (int j = 0; j < mat2Col; j++)
        {
            C[i][j] = 0;
        }
        
    }
    for (int i = 0; i < mat1Row; i++)
    {
        for (int j = 0; j < mat2Col; j++)
        {
            for (int k = 0; k < mat1Col; k++)
            {
                C[i][j]+=A[i][k] * B[k][j];
            }
            
        }
        
    }
    for (int i = 0; i < mat1Row; i++)
    {
        for (int j = 0; j < mat2Col; j++)
        {
            cout<<C[i][j]<<"    ";
        }
        cout<<endl;
    }
    
    
}

int main()
{
    int mat1Row, mat1Col,mat2Col;
    cout<<"Enter Frist Matrix rows size: ";
    cin>>mat1Row;
    cout<<"Enter Frist Matrix columns size: ";
    cin>>mat1Col;
    cout<<"Enter second Matrix columns size: ";
    cin>>mat2Col;

    multiplication(mat1Row, mat1Col, mat2Col); 
    return 0;
}