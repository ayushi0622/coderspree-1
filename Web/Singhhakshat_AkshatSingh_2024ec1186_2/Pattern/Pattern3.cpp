#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
   for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf("\t");
        }
        for(int j=1; j<=i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    
}