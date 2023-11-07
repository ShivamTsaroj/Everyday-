#include <iostream>
using namespace std;




int main() {
  int arr[]= {1,2,5,8,9,22,55,66};
  int size = 8;
  int key= 12;
  bool flag=0;
  // 0 -> not found
  // 1 -> found

  // linear search
  for( int i=0; i<size; i++){
      if ( arr[i]==key)
      flag=1;
  }
  if (flag)
  cout<< "Present"<<endl;
  else cout<< "Absent"<<endl;







// find duplicate numbers
int arr [] = {1, 2, 3, 4, 2, 7, 8, 8, 3};
  int size =9;
  for (int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if( arr[i]==arr[j])
        cout<<"duplicat number: "<<arr[i]<<endl;
      
    }
  }
  









return 0;
}
