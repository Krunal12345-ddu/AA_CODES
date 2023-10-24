//rabin-karp

)#include <bits/stdc++.h>

using namespace std;
void find_subString(string text, string pattern,int q){
	int m = pattern.size();
	int n= text.size();
    
	//preprocessing step:
	int P=0, t0=0, d=10;
	for(int i=0;i<m;i++){
    	P = (d*P+(pattern[i]-'0'))%q;
    	t0 = (d*t0+(text[i]-'0'))%q;
	}
     cout<<P<<" "<<t0<<endl;

	//matching:
	double b = m-1;
	int h = ((int)pow(10.0,b));

    printf("Pattern occurred at indexes :");
	for(int s=0;s<=n-m;s++){

	
	if(P == t0){
	    if( pattern == text.substr(s, m)){
	        printf("%d ",s+1);
	    }
	}
	
	if(s<(n-m)){
	    	t0 = (((t0-((text[s]-'0')*h))*d)+(text[s+m]-'0'))%q;

	while(t0<0){
	t0 += q;
	}
	}
	}
    
    
}

int main()
{
	string T;
	string p ;
	int q ;
	
	cout<<"Enter the string : "<<endl;
	cin>>T;
	
	cout<<"Enter the pattern : "<<endl;
	cin>>p;
	
	cout<<"Enter any prime number : "<<endl;
	cin>>q;
    
	find_subString(T,p,q);

	return 0;
}