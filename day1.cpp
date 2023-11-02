#include <bits/stdc++.h>
using namespace std;

// int fact(int n){
//     int fact = 1;
//     if (n<0){
//         cout<< "Factorial of negative number does'nt exit."<<endl;
//     }
//     else{
//   for (int i=1; i<=n; i++){
//         fact = fact*i;
//     }

//     }

// return fact;


// }



int main (){


// // To print hello world...
//     cout << "Hello World.";




// // To printing basic calc..

// int a;
// cout<< "int value of a: "<<endl;
// cin>>a;
// int b;
// cout<< "int value of b: "<<endl;
// cin>>b;
// int c;
// cout<< "int value of c: "<<endl;
// cin>>c;

// int sum = a+b+c;
// cout << "sum of all numbers: "<<sum<<endl;


// int sub = a-b;
// int sub1= b-c;
// cout << "subtraction of a & b:  " << sub<<endl;
// cout << "subtraction of b & c:  " << sub1<<endl;


// int mul = a*b*c;
// cout << "Multiplication of a&b&c: "<< mul <<endl;


// int div = a/b;
// int div1 = b/c;
// cout << "Division of a & b: "<< div << endl;
// cout<<  "Division of b & c: "<< div1 << endl;








// To find factorial calc

// int n;
// cout << "Enter the number: ";
// cin>> n;
// int ans = fact(n);
// cout<< "fatorial of "<<n << " is: "<<ans<<endl;


// to ffffffff
// int n;
// cout<<"Enter value of n"<<endl;
// cin>>n;

// int d1=0;
// int d2=1;

// if (n==1)
// {
//     cout<<0<<" ";
// }

// if(n==2){
//     cout<<0<<" "<<1<<" ";
// }

// int d3;

// if(n>2){
//     cout<<d1<<" "<<d2<<" ";
//     for (int i = 3; i <=n; i++){
//         d3=d1+d2;
//         cout<<d3<<" ";
//         d1=d2;
//         d2=d3;
//     }
// }









// pallllll

string s1="abcbag";

int length=s1.length();

if((length % 2) == 0){
    cout<<"String is not palindrome.";
  return 0;  
}

string s2=s1;
reverse(s1.begin(), s1.end());  // reverse the string s1


if(s1==s2){
    cout<<"String is palindrome.";
}else{
    cout<<"String is not palindrome.";
}














}