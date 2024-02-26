#include <stdio.h>

// 매크로 함수
#define CHANGE(data1, data2) {int temp; temp = data1; data1 = data2; data2 = temp;}

void show(int* ar, int n) {
	for (int i = 0; i < n; i++) {
		printf("%2d ", ar[i]);
	}
	printf("\n");
}

void bubbleSort(int* ar, int n) { // 배열 주소, n은 요소의 갯수
	// 버블 정렬 코드 구현
	show(ar, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (ar[j] > ar[j + 1]) {
				//int temp = ar[j];
				//ar[j] = ar[j + 1];
				//ar[j + 1] = temp;
				CHANGE(ar[j], ar[j + 1]);
				show(ar, n);
			}
		}
	}
}

void selectionSort(int* ar, int n) {
	int min;
	show(ar, n);
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i; j < n; j++) {
			if (ar[min] > ar[j]) {
				min = j;
			}
		}
		CHANGE(ar[min], ar[i]);
		show(ar, n);
	}
}

void insertionSort(int* ar, int n) {
	show(ar, 10);
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j > 0; j--) {
			if (ar[j] < ar[j - 1]) { // 앞쪽 원소가 더 크면
				CHANGE(ar[j], ar[j - 1]);
				show(ar, 10);
			}
			else {
				break;
			}
		}
	}
}

int main() {
	int ar[10] = { 10, 4, 5, 8, 1, 2, 6, 7, 9, 3 };
	int ar2[10] = { 10,9,8,7,6,5,4,3,2,1 };
	bubbleSort(ar, 10);
	printf("\n");
	selectionSort(ar2, 10);
	//insertionSort(ar, 10);
	return 0;
}