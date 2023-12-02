#include<iostream>
#include<vector>
using namespace std;
int returnB(vector<char>s,int &ind,int k){
    int n,c=0;
    n=s.size();
    ind=n-1;
    while(c<k && ind>=0){
        if(s[ind]=='B')
            c++;
        ind--;
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int i,o,nB,n,k,ind=0;
        char c;
        cin>>n;
        cin>>k;
        vector<char>s(n);
        for(int p=0;p<n;p++)
            cin>>s[p];
        nB=returnB(s,ind,k);
        if(nB==0){
            o=1;
            i=k;
            c='B';
        }
        else if(k<nB){
            o=1;
            i=ind;
            c='A';
        }
        else if(k==nB){
            o=0;
        }
        else{
            int count=0,check=(k-nB);
            i=0;
            while(count!=check && i<n){
                if(s[i]=='A')
                    count++;
                i++;
            }
            o=1;
            c='B';
        }
        if(o>0)
        cout<<o<<endl<<i<<" "<<c<<endl;
        else
        cout<<o<<endl;
    }
    return 0;
}