/* Read input from STDIN. Print your output to STDOUT*/
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char *a[])
{
    //Write code here
    int T,N,i,j,k,x,temp;
    cin>>T;
    while(T--)
    {
    int flag=0;
    cin>>N;
    int E[N],P[N];
    for(i=0;i<N;i++)
    {
        cin>>E[i];
    }
    for(j=0;j<N;j++)
    {
        cin>>P[j];
    }
    for(i=0;i<N;i++)
    {
        for(k=i+1;k<N;k++)
        {
            if(E[i]<E[k])
            {
                temp=E[i];
                E[i]=E[k];
                E[k]=temp;
            }
        }
    }
    /*for(i=0;i<N;i++)
		cout<<E[i]<<"\t";*/
    for(j=0;j<N;j++)
    {
        for(x=j+1;x<N;x++)
        {
            if(P[j]<P[x])
            {
                temp=P[j];
                P[j]=P[x];
                P[x]=temp;
            }
        }
    }
    /*for(j=0;j<N;j++)
		cout<<P[j]<<"\t";*/
    for(i=0;i<N;i++)
    {
        if(P[i]>E[i])
        {
            flag++;
            //cout<<flag<<endl;
        }
        //cout<<flag<<endl;
    }
    //cout<<flag<<endl;
    if(flag==N)
    {
        cout<<"WIN\n";
    }
    else
    {
        cout<<"LOSE\n";
    }
    }
}
