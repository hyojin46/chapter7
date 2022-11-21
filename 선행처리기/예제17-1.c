//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	char op;
//	int input;
//
//	do 
//	{
//		printf("프로그램 시작(종료는 99) : ");
//		scanf_s("%d", &input);
//
//		if (input == 99)
//			break;
//		getchar();
//		
//		printf("알파벳 입력: ");
//		scanf_s("%c", &op, sizeof(op));
//
//		if (isupper(op))
//			op = tolower(op);
//		else if (islower(op))
//			op = toupper(op);
//
//		printf("대소 문자 변환 : %c \n\n", op);
//		getchar();
//	} while (1);
//
//	printf("프로그램을 종료합니다.\n");
//	return 0;
//}