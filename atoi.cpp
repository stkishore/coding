{
 #include <bits/stdc++.h>
using namespace std;
int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method */
int atoi(string str)
{
    //Your code here
 int count=0,c=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='-')
        {
        c++;
        ++i;
        }
        if(!isdigit(str[i]))
        return -1;
       
        if((str[i]>='a'&&str[i])<='z'||(str[i]<='A'&&str[i]>='Z'))
        {
      
        
        count=(count*10)+str[i]-'0';
        }
    }
    if(c==0)
    return count;
    else
    return -count;
    
}