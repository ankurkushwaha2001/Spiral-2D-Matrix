#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int start=0;
    int end=m-1;
    int top=0;
    int bottom=n-1;
    while(start<=end){
        for(int i=start;i<end;i++){
            cout<<a[top][i]<<" ";
        }
        for(int i=top;i<bottom;i++){
            cout<<a[i][end]<<" ";
        }
        for(int i=end;i>start;i--){
            cout<<a[bottom][i]<<" ";
        }
        for(int i=bottom;i>top;i--){
            cout<<a[i][start]<<" ";
        }
        if((start==end)&&(top==bottom)){
            cout<<a[start][end]<<" ";
        }
        start++;
        top++;
        bottom--;
        end--;
    }

    return 0;
}
