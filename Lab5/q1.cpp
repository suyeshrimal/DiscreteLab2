#include<iostream>
using namespace std;
int main(){
	int n,index,index1,temp;
	cout<<"Enter the no of digits in the number: ";
	cin>>n;
	int a[n];
	cout<<"Enter the number digit wise: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	system("CLS");
	cout<<"Next permutation in lexicographic order.: ";
	for(int i=n-1;i>=0;i--){
		if(a[i-1]<a[i]){
			index=i-1;
			break;
		}
	}
		for(int i=n-1;i>=0;i--){
		if(a[index]<a[i]){
			index1=i;
			break;
		}
	}
	temp=a[index];
	a[index]=a[index1];
	a[index1]=temp;
	for(int i=0;i<n;i++){
		
		if(i<=index){
			cout<<a[i];
		}
		
	}
	for(int i=n-1;i>=0;i--){
		if(i>index){
			cout<<a[i];
		}
	}
return 0;
}
 