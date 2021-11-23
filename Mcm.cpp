/**#include<bits/stdc++.h>
#define MOD INT_MAX
using namespace std;

int findMcm(int arr[],int n){
    int dp[n][n];
    int i,j,k,l,p;
    for(i=1;i<n;i++)
        dp[i][i]=0;
        cout<<dp[i][i]<<" ";
    for(l=2;l<n;l++){
        for(i=1;i<n-l+1;i++){
            j=i+l-1;
            dp[i][j]=MOD;
            for(k=i;k<j;k++){
                p=dp[i][k]+dp[k+1][j]*arr[i-1]*arr[k]*arr[j];
                dp[i][j]=min(dp[i][j],p);
            }
            cout<<dp[i][j]<<" ";
        }
    }
    
    return dp[1][n-1];
}

int main(){
    int arr[] = {30,20,15,5,10,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findMcm(arr,n)<<" "<<endl;
    return 0;
}*/
/**#include<bits/stdc++.h>
using namespace std;

int mcm(int p[],int n)
{
    int m[n][n];
    int i,j,k,l,q;
    for(i=1;i<n;i++){
        m[i][i]=0;
        cout<<m[i][i]<<" "<<endl;
    }
    for(l=2;l<n;l++)
    {
        for(i=1;i<n-l+1;i++)
        {
            j=i+l-1;
            m[i][j]=INT_MAX;
            for(k=i;k<j;k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                m[i][j]=min(m[i][j],q);
            }
            cout<<m[i][j]<<" ";
        }cout<<"mala"<<endl;
    }
    return m[1][n-1];

}
int main()
{
      int arr[] = {10,20,30,20,30};
      int n = sizeof(arr)/sizeof(arr[0]);
      cout<<mcm(arr,n)<<" operations";
      return 0;
}*/
#include<bits/stdc++.h>
#define MOD INT_MAX
using namespace std;

int mcm(int arr[],int n)
{
    int m[n][n];
    int i,j,p,k,l;
    for(int i=1;i<n;i++){
        m[i][i]=0;
    }
    for(l=2;l<n;l++){
        for(i=1;i<n-l+1;i++){
            j=i+l-1;
            m[i][j]=MOD;
            for(k=i;k<j;k++){
                p=m[i][k]+m[k+1][j]+arr[i-1]*arr[k]*arr[j];
                m[i][j]=min(m[i][j],p);
            }
        }
    }
    return m[1][n-1];
}
int main()
{
    int arr[]={10,20,30,20,30};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<" number of operation needed :"<<mcm(arr,n)<<endl;
    return 0;
}
