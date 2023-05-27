// Bai 1
/*#include <stdio.h>
void main() {
	int n;
	printf("nhap n : ");
	scanf_s("%d", &n);
	if (n % 2 == 0) {
		printf(" n la so chan");
	}
	else printf("n la so le");
}*/
// Bai 2
/*#include <stdio.h>
void main() {
	int n;
	printf("nhap n: ");
	scanf_s("%d", &n);
	while (n == 0) {
		printf("moi nhap lai n: ");
		scanf_s("%d", &n);

	}
	

}*/
//Bai 3
/*#include <stdio.h>
void main() {
	float index;
	float cost = 100;
	printf("Enter index (0-30): ");
	scanf_s("%f", &index);
	if (index > 0 && index <= 10) {
		cost = cost + 3;
		printf("Cost: %f", cost);
	}
	else if (index > 10 && index <= 20) {
		cost = cost * 2;
		printf("Cost: %f", cost);
	}
	else if (index > 20 && index <= 30) {
		cost = cost / 1.5;
		printf("Cost: %0.1f", cost);
	}
	else printf("Invalid index entered");
}*/
//bai 4
/*
#include <stdio.h>;
void main() {
	int n;
	int tong=0;
	printf("Enter n: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		tong = tong + i;

	}
	printf("Summary from 1 to n is : %d", tong);
}*/
// xac dinh mot so co phai la so nguyen to
/*
#include <stdio.h>
#include <math.h>
void main() {
	int a; 
	int b;
	printf("nhap a: ");
	scanf_s("%d", &a);
	b = (int)sqrt(a);
	if (a < 2) {
		printf("Number entered invalid ");
	}
	else for (int i = 2; i <= b;i++) {
		if (a % i == 0) {
			printf("a khong la so nguyen to\n");
			break;
		}
		else printf("a la so nguyen to");
		break;

	}
}*/
/*#include <stdio.h>
void main() {
	char id[10];
	float fee=0;
	printf("Nhap ma dinh danh : ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%c", &id[i]);
	}
	printf("Nhap so tien kham benh: ");
	scanf_s("%f", &fee);
	char age = id[0];
	char gender = id[1];
	if (age == 'A') {
		fee = fee -(fee * 80 / 100);
	}
	else if (age == 'C' || age == 'E') {
		fee = fee - (fee * 95 / 100);
	}
	else printf("Sai ma dinh danh");
	if (gender == 'M') {
		printf("Gioi tinh: Nam\n");
	}
	else printf("Gioi tinh: Nu\n");
	
	printf("So tien can phai tra la: %0.f", fee);
}*/
/*#include<stdio.h>

int main() {
	int n;
	int a = 0;
	while (a >= 0) {
		int giaithua = 1;
		printf("\nEnter n: ");
		scanf_s("%d", &n);
		while (n >= 0) {
			for (int i = 1; i <= n; i++) {
				giaithua = giaithua * i;

			}
			printf("\n%d", giaithua);
			break;
			return 0;

		}
		a++;
		if (n < 0) {
			printf("\nMoi nhap lai: ");
		}
	}

	
	return 0;
	
}*/
/*#include <stdio.h>
void main() {
	int n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n ; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
		}
	}
}*/
/*#include<stdio.h>

int main() {
	int a, b;
	printf("Enter a,b: ");
	scanf_s("%d%d", &a, &b);
	while (a <= b) {
		if (a % 3 == 0 & a % 5 == 0) {
			printf("%d ", a);

		}
		a++;
	}
	return 0;
}*/
/*#include<stdio.h>

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			continue;
		}
		printf("%d ", i);

	}
	return 0;
}*/
/*#include<stdio.h>

int main() {
	int a[10];
	int sum = 0;
	printf("Nhap 10 so: ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
		sum = sum + a[i];
	}
	printf("Tong 10 so da nhap la :  %d", sum);
	return 1;
}*/
/*#include<stdio.h>

int main() {
	int a[999];
	int n;
	printf(" Nhap cac so :  ");
	scanf_s("%d", &n);
	int max;
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	max = a[0];
	for (int i = 0; i < n; i++) {

		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("So lon nhat trong cac so la: %d ", max);
	return 0;
}*/	
/*#include<stdio.h>

int main() {
	int x[20];
	int n;
	int k;
	int count = 0;
	printf("Nhap so phan tu trong mang:  ");
	scanf_s("%d", &n);
	printf("Nhap k: ");
	scanf_s("%d", &k);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &x[i]);
		if (x[i]==k ) {
			count++;
		}
	}
	printf("So phan tu bang k la: %d", count);

	return 0;
}*/	
/*#include<stdio.h>

int maxofArray(int a[], int n) {
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
int main() {
	int a1[1000];
	int a2[1000];
	int n1, n2;
	printf("Nhap so phan tu cua mang 1: ");
	scanf_s("%d", &n1);
	printf("Nhap so phan tu cua mang 2: ");
	scanf_s("%d", &n2);
	for (int i = 0; i < n1; i++) {
		scanf_s("%d", &a1[i]);
	}
	for (int j = 0; j < n2; j++) {
		scanf_s("%d", &a2[j]);
	}
	printf("Gia tri lon nhat cua mang 1 la : %d\n", maxofArray(a1,n1));
	printf("Gia tri lon nhat cua mang 2 la : %d", maxofArray(a2,n2));
	return 0;
}*/
/*int countOdd(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			count++;
		}
	}
	return count;
}
int main() {
	int n;
	int a[1000];
	printf("Nhap so phan tu trong mang :  ");
	scanf_s("%d", &n);
	printf("Nhap cac phan tu trong mang: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	printf("So phan tu le trong mang da nhap la: %d", countOdd(a, n));
	return 0;
}*/
/*#include <stdio.h>
#include <math.h>
float haron(float a, float b, float c) {
	float p;
	p = (a + b + c) / 2;
	float x = p - a;
	float y = p - b;
	float z = p - c;
	double ketqua=sqrt(p * x * y * z);
	return ketqua;
}
int main() {
	float a, b, c;
	printf("Nhap so do 3 canh cua tam giac: ");
	scanf_s("%f%f%f", &a, &b, &c);
	printf("Dien tich cua tam giac la: %f ", haron(a, b, c));
	return 0;
}*/
/*int main() {
	int decimal, index = 0;
	int binary[32];
	printf("Enter decimal number: ");
	scanf_s("%d", &decimal);
	while (decimal > 0) {
		binary[index] = decimal % 2;
		decimal = decimal / 2;
		index++;
	}
	for (int i = index - 1; i >= 0; i--) {
		printf("%d", binary[i]);
		
	}
	return 0;
}*/		
/*#include <stdio.h>;
int main() {
	int n;
	int count = 0;
	printf("Nhap n: ");
	scanf_s("%d",&n);
	for (int i = 0; i <= n; i++) {
		for (int j = i+1; j <= n; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (i * i + j * j == k * k) {
					count++;
				}
			}
		}
	}
	printf("%d", count);
	return 0;
	
}*/	
/*#include <stdio.h>
int main() {
	int arr[1000];
	int n;
	printf("Nhap so phan tu cua mang:");
	scanf_s("%d", &n);
	printf("Nhap cac phan tu cua mang: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i =0;i<n;i++){
		for (int j = i + 1; j < n; j++) {
				if (arr[i] > arr[j]) {
					int temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		printf("%d ", arr[i]);
	}


	return 0;
}*/


/*#include <stdio.h>

void sortArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				int index = arr[i];
				arr[i] = arr[j];
				arr[j] = index;
			}
		}
	}
}

int main() {
	int n;
	int arr[1000];
	printf("Nhap so phan tu trong mang: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	sortArray(arr, n);
	printf("Thu tu tu lon den nho la : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}*/
/*#include <stdio.h>
int main() {
	int salary;
	int fee = 0;
	printf("Nhap thu thap 1 thang theo tien trieu: ");
	scanf_s("%d", &salary);
	if (0 < salary && salary <= 10) {
		fee = 0;
	}
	if (10 < salary && salary <= 15) {
		fee = (5 * (salary - 10));
	}
	if (15 < salary && salary <= 20) {
		fee = (10 * (salary - 15)) + 5 * 5;
	}
	if (20 < salary) {
		fee = (5 * 5 + 10 * 5 + 15 * (salary - 20));
	}
	printf("So tien thue la: %d0 nghin dong ", fee);
	return 0;
}*/
#include <stdio.h>
int main() {
	int count0=0, count1=0, count2=0, count3=0, count4=0, count5=0;
	int a;
	do {
		printf("Nhap so nguoi phu thuoc cua nhan vien: ");
		scanf_s("%d", &a);
		if (a == 0) {
			count0++;
		}
		if (a == 1) {
			count1++;
		}
		if (a == 2) {
			count2++;
		}
		if (a == 3) {
			count3++;
		}
		if (a == 4) {
			count4++;
		}
		if (a == 5) {
			count5++;
		}


	} while (a >= 0 && a <= 5);
	printf("So nguoi phu thuoc      So luong nhan vien\n");
	printf("        0			%d\n", count0);
	printf("        1			%d\n", count1);
	printf("        2			%d\n", count2);
	printf("        3			%d\n", count3);
	printf("        4			%d\n", count4);
	printf("        5			%d\n", count5);


}