/* Construct a class matrix with data member m which is a two dimensional array.
 Add the member functions read(), display() and operator function + to add two matrices.
 Write appropriate main() to add two matrices.*/

 #include<iostream>
 using namespace std;
 const int max_size= 100 ;
 class Matrix
 {
    private:
    int size;
    int m[max_size][max_size];

    
    public:
    
    
    void read( int n)
    {
        size=n;
        
        for (int  i = 0; i < n; i++)
        {
            for (int  j = 0; j < i; j++)
            {
                cout<<"enter element: ";
                cin>>m[i][j];
            }
            
        }
        
    }

    Matrix operator +(Matrix ma)
    {
        Matrix temp;
        
        for (int  i = 0; i < size; i++)
        {
            for (int  j = 0; j < i; j++)
            {
                temp.m[i][j]= m[i][j]+ma.m[i][j];
            }
            
        }

        return temp;
        
          
    }

    void display()
    {
        for (int  i = 0; i < size; i++)
        {
            for (int  j = 0; j < i; j++)
            {
               cout<<m[i][j]<<" ";
            }
            cout<<"\n";
            
        }

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


   result= mat1+mat2;

   cout<<"matrix 1"<<endl;
   mat1.display();

   cout<<"matrix 2"<<endl;
   mat2.display();

    cout<<"sum of matrix is "<<endl;
    result.display();
    

  return 0;
 }