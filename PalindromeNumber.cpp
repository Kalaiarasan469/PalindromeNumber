#include <iostream>
using namespace std;
class Number
{
int n,s,i=0,j=0,ar[5];
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>n;
	}
bool chck()
{
    	cout<<"OUTPUT"<<endl;
    	s=n;
while(s%10!=0)
    {
i++;
s=s/10;
}
s=n;
while(s%10)
{
    ar[j]=s%10;
    s=s/10;
    j++;
    }
    for(int j=0;j<i;j++)
    {
        i--;
        if(ar[j]!=ar[i])
        {
            return false;
            }
        }
        return true;
}
};
int main()
{
Number n;
n.get();
if(n.chck())
{
    cout<<"yes";
    }
    else
    {cout<<"no";
    }
return 0;
}