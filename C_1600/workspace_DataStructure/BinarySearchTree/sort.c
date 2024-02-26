#include<stdio.h>
#define CHANGE(data1,data2){int temp; temp=data1; data1=data2; data2=temp;} // 매크로함수 코드

void show(int* ar, int n) {
	for (int i = 0; i < n; i++) {
		printf("%2d ", ar[i]);
	}
	printf("\n");
}
void bubble_sort(int* ar, int n) { //배열 주소, n은 요소의 개수
	show(ar, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (ar[j] > ar[j + 1]) {
				//int temp = ar[j];
				//ar[j] = ar[j + 1];
				//ar[j + 1] = temp;     // 주석처리한 해당 부분을 매크로 함수로 만들어 사용해보자!
				CHANGE(ar[j], ar[j + 1]); // 매크로 함수
				show(ar, n);
			}
		}
	}
}

//void bubbleSort(int* ar, int n) { //배열 주소, n은 요소의 개수
//	// 버블정렬 코드 구현
//	int temp;
//	for (int i = 0; i < n-1; i++) {
//		for (int j = 1; j < n; j++) {
//			if (ar[i] > ar[j]) {
//				return;
//			}
//			else {
//				temp = ar[i];
//				ar[i] = ar[j];
//				ar[j] = temp;
//			}
//			n--;
//		}
//	}
//
//	show(ar, n);
//}


//선택정렬
void select_sort(int* ar, int n) {
	int min;
	show(ar, n);
	for (int i = 0; i < n-1; i++) {
		min = i;
		for (int j = i; j < n; j++) {
			if (ar[min]>ar[j]) {
				min = j;
			}
		}
		CHANGE(ar[min], ar[i]);
		show(ar, n);
	}
}

// 삽입정렬
void insert_sort(int* ar, int n) {
	show(ar, n);
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j > 0; j--) {
			if (ar[j] < ar[j-1]) {
				CHANGE(ar[j], ar[j-1]);
				show(ar, 10);
			}
			else {
				break;
			}
		}
	}
}

int main() {
	int ar[10] = { 10,4,5,8,1,2,6,7,9,3 };
	int ar2[10] = { 10,9,8,7,6,5,4,3,2,1 };
	bubble_sort(ar, 10);
	printf("\n");
	select_sort(ar2, 10);
	//insert_sort(ar, 10);

	return 0;
}