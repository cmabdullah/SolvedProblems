/*
 ============================================================================
 Name        : ArmstrongNumber.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Following program printing all Armstrong number except 153.but //why
// i can not fix it.needed help
int main() {
	int cnt = 1, tc;
	int l,w,h;

	scanf("%d",&tc);
	while(tc--){
		scanf("%d %d %d",&l,&w,&h);

		printf("Case %d: ",cnt++);
		if(l<=20 && w<=20 && h<=20) printf("good\n");
		else printf("bad\n");
	}

	return 0;
}
