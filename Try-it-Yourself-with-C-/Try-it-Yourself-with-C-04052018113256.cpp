#include <iostream>
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    bool flg = true;
    int i = 0;
    while(i < str.length()/2)
    {
            if(str[i] != str[str.length()-i-1])
               flg = false;
        i++;
    }
    if(flg)
    cout << "YES" << endl;
    else
    cout<< "NO" << endl;
    return 0;
	
	
}