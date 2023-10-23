//Naive

#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a string :"<<endl;
    string s;
    cin>>s;
    cout<<"Enter pattern :"<<endl;
    string p;
    cin>>p;
    int n = s.size();
    int m = p.size();
    
 int flag;
    cout<<"Pattern occurred at indexes : ";
    for(int i=0;i<=n-m;i++){
          flag=0;
        for(int j=0;j<m;j++){
            if(s[i+j]==p[j])
              flag++;
        }
        if(flag==m){
            cout<<i+1<<" ";
        }
        
    }

    return 0;
}
