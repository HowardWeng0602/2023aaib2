#include <stdio.h>
#include <string.h>
int main()
{
	int a[7] = {};
	char s[200];
	scanf("%s", s);
	int N = strlen(s);
	for(int i=0; i<N; i++){
		for(int d=1; d<=6; d++){
			if(s[i]=='0'+d) a[d]++;
		}
	}
	for(int d=1; d<=6; d++){
		printf("%d:%d\n", d, a[d]);
	}
}