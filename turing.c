#include<stdio.h>
char inp[20];
int state = 0, head = 0;
int main(){
	scanf("%s",&inp);
    while(1){
        if (state == 0 && inp[head] == '0'){
            inp[head] = 'x';
            state = 1; //move right
            head++;
        }
        else if (state == 1 && (inp[head] == '0' || inp[head]== 'y')){
            //printf("Show\n");
			if(inp[head]=='0'){
				inp[head]='0';
			}
			else if (inp[head] == 'y'){
				inp[head] = 'y' ;
			}
            state = 1;
            if(inp[head] != '1'){
                head++;
            }
        }
        else if (state == 1 && inp[head] == '1'){
            inp[head] = 'y';
            state = 2;
            head--;
        }
        else if (state == 2 && (inp[head]=='0' || inp[head]=='y')){
			if(inp[head] =='0'){
				inp[head]= '0';
			}
			else if(inp[head] == 'y'){
				inp[head]='y';
			}
            while(inp[head] != 'x'){
                head--;//move left
                state = 2;
            }
        }
        else if(state == 2 && inp[head]=='x'){
        		inp[head] = 'x';
         	 head++;
            state = 0;
        }
		else if(state ==0 && inp[head] == 'y'){
			state = 3;// move right
			head++;
		}
		else if(state ==3&&inp[head]=='y'){
			while(inp[head]   == 'y'){
				head++;
			}
			if(inp[head]=='\0'){
				state = 4;
			}
		}
        else{
            break;
        }
    }// while loooop end
	if (state == 4){
		printf("accept\n");
	}
	else{
		printf("Reject\n");
	}
return 0;
}
