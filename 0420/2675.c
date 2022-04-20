#include <stdio.h>
#include <string.h>	//strlen 사용 헤더파일 

int main(void){
	int T, R, len;
	char S[21]={0};
	scanf("%d",&T); 	//전체 반복 횟수 T에 입력	 
	for(int i = 0; i < T; i++){		//전체 반복 횟수 만큼 for문 반복	 
		scanf("%d",&R);
		scanf("%s",S);
		len=strlen(S);
		for(int j = 0; j < len; j++){		//입력받은 S 문자열의 길이 만큼 for문 반복 
			for(int k = 0; k < R; k++){		//입력받은 R 반복값 만큼 for문 반복	 
				printf("%c",S[j]);			//입력받은 S문자열의 j번째 값 출력  
			}
		}
		printf("\n");
	}
	return 0;
	
}
