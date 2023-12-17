/* Construct a class matrix with data member m which is a two dimensional array.
 Add the member functions read(), display() and operator function + to add two matrices.
 Write appropriate main() to add two matrices.*/

 #include<iostream>
 using namespace std;

 class Matrix
 {
    public:
    
    
    void read( int n)
    {
        int m[n][n];
        
        for (int  i = 0; i < n; i++)
        {
            for (int  j = 0; j < i; j++)
            {
                cout<<"enter element: ";
                cin>>m[i][j];
            }
            
        }
        
    }

    void addMatrix(int mat1[n][n],int mat2[n][n])
    {

    }

    void display()
    {

    }


 };
 int main()
 {
    Matrix mat1,mat2,result;
    int n;
    cout<<"enter size of matrix"<<endl;
    cin>>n;

    cout<<"enter data for matrix 1"<<endl;
    mat1.read(n);

    cout<<"enter data for matrix 2"<<endl;
    mat2.read(n);


   result.addMatrix(mat1,mat2);

    
    

  return 0;
 }