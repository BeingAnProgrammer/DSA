// #include<bits/stdc++.h>
// using namespace std;


// string reverseName(string name, int n){
   
//    int left=0;
//    int right=n-1;
//    while(left<right){
//      swap(name[left++],name[right--]);
//    }


// }
// int main()
// {
    
//     string name;
//     cout<<"Enter a name:\n";
//     cin>>name;
//     int n=name.size();
   
//     reverseName(name,n);
//     cout<<name;


// return 0;
// }

// #include <iostream>
// #include <string>

// int main() {
//     std::string str = "Nitesh";

//     // Get the length of the string
//     int length = str.length();

//     // Swap the elements in the string  
//     for (int i = 0; i < length / 2; i++) {
//         std::swap(str[i], str[length - i - 1]);
//     }

//     std::cout << str << std::endl;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cout<<"ENter an name "<<endl;
    cin >> name ;

    string temp=name;

    reverse(temp.begin(),temp.end());
    if(name==temp)
    cout<<"Yes"<<endl;
    else
    cout<<"No";

return 0;
}