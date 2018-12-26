#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int n;
	char arr[7000];
	char cad[7000];
	
	scanf("%d",&n);
	scanf("%s",arr);
	scanf("%s",cad);
	
	int total = 0;
	
	for(int i=0; i<n; i++){
		int a = arr[i] - '0';
		int b = cad[i] - '0';
		total += min( abs(a-b),10-max(a,b) + min(a,b));
	}
	
	printf("%d",total);
	
	return 0;
}
