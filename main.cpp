#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
int main()
{

    int rows, cols;
        int mul = 0;
        cout << "Enter row and column for multiplication tables: \n";
        cin >> rows;
        cin >> cols;
        cout << "Multiplication tables for " << rows << " by " << cols << "\n";

           // declaration of matrix (vector of vectors) that will store the multiplication table
           vector <vector <int> > multi_matrix ;

        multi_matrix.resize(rows+1);     //  row vector 
        for(int i=0; i<multi_matrix.size(); ++i)
        multi_matrix[i].resize(cols+1);   //  column vector
        cout<<"X";
          for (int i = 1;  i<=cols; ++i)
       {
        cout<<" "<<i;
       }
        cout<<endl;
           for (int i = 1;  i<=rows; ++i)
     {
            cout<<" "<<i;
             for (int j = 1; j<=cols; ++j)
     {
                   mul = i*j;
                   multi_matrix[i][j] = mul;
                   cout<<" "<<multi_matrix[i][j];
     }
                   cout<<endl;
     } 
     return 0;
     }
