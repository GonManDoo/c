#include <stdio.h>
#include <string.h>

/* 오목 만들기 */
/* 지휘 모듈은 함수만을 이용해서 움직임 */
/* 기존에 복잡한 식을 작성해서 만든 각각의 모듈을 함수로 선언해서 만들 것*/ 

//바둑판 그리기 함수
//틱텍토때 썻던 모듈 재활용하기-사실 이것도 좌설 배열 모듈 재활용 
int main(){
	const char* board[19][19]; //2차원 배열 모듈
    int a, b ;
    
    	for(a=0; a<19; a++){
		for(b=0; b<19; b++){
			board[a][b]="+";}
				printf(" 보드[%d][%d]=%c\n", a, b, board[a][b]); //확인 모 듈  
				
				}} //여기에 ┼ 이거만 넣으면 됨. 
			
			
