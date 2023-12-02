
//											De on tap 1: 16-17
//Câu 1:Cho chuỗi bit biểu diễn số nhị phân có chiều dài n.
//Hãy vẽ sơ đồ khối flowchart để biểu diễn thuật toán đổi chuỗi bit ở trên thành số thập phân.

//Ví dụ : Cho chuỗi bit có chiều dài 8 là “01100011”, thuật toán phải tính được số thập phân tương ứng là 99.

/*
#include <stdio.h>
#include <string.h>

int binarytoDecimal(char binary[]) {
    int len = strlen(binary);
    int decimal = 0;
    int exponent = 1;

    for (int i = len - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += exponent;
        }
        exponent *= 2;
    }

    return decimal;
}

int main() {
    char binary[32];
    int decimal = 0;

    printf("Nhap so nhi phan: ");
	fgets(binary, sizeof(binary), stdin);
    binary[strcspn(binary, "\n")] = '\0';
    decimal = binarytoDecimal(binary);
    printf("\n%d", decimal);

    return 0;
}*/
//Câu 2:Giả sử cách tính thuế thu nhập cá nhân dựa trên biểu thuế như sau:

/*Ví dụ, nếu thu nhập cá nhân một tháng là 16 triệu thì thuế thu nhập cá nhân được tính như sau :
Từ 0 - 15 triệu được miễn thuế
Từ 10 - 15 triệu thì đóng thuế 5 % .Vì vậy cá nhân đóng khoảng này là
5 triệu * 5 % = 250 ngàn đồng
Từ 15 - 20 triệu thì đóng thuế 10 % .Vì vậy, cá nhân đóng khoảng này là
1 triệu * 10 % = 100 ngàn đồng
Do đó cá nhân đóng thuế thu nhập là 250 + 100 = 350 ngàn đồng
Hãy viết chương trình cho phép nhập thu nhập cá nhân của một tháng và tính thuế thu nhập cá nhân của tháng đó.Chương trình thực hiện đến khi nào người dùng nhập 0.
Lưu ý : số tiền tính thu nhập thuế không < 0*/
//Code:
/*#include <stdio.h>
int main() {
	int salary;
	do {
		int fee = 0;
		printf("\nNhap thu thap 1 thang theo tien trieu tu 1->30 (nhap 0 de dung chuong trinh): ");
		scanf_s("%d", &salary);
		if (salary == 0) {
			break;
		}
		if (10 < salary && salary <= 15) {
			fee = (5 * (salary - 10));
		}
		if (15 < salary && salary <= 20) {
			fee = (10 * (salary - 15)) + 5 * 5;
		}
		if (20 < salary&& salary<=30) {
			fee = (5 * 5 + 10 * 5 + 15 * (salary - 20));
		}
		if (salary < 0 || salary >30) {
			printf("So tien da nhap khong hop le");
		}	else if ( 0 < salary&& salary <= 10) {
			printf("Duoc mien thue");
		}else
			printf("So tien thue la: %d0 nghin dong ", fee);

	} while (1);
	return 0;
}*/
//Câu 3: 
/*Cho danh sách các môn học bao gồm mã môn học và tên môn học sau :

Mã môn học	Tên môn học
MTH00055	Cơ sở lập trình
TTH105		Toán rời rạc
TTH802		Mạng máy tính
TTH573		Lập trình web

Sử dụng mảng để lưu trữ danh sách mã môn học và tên các môn học ở trên.Hãy viết chương trình cho phép nhập vào mã một môn học và in ra tên môn học tương ứng.*/
/*#include <stdio.h>
#include <string.h>
struct danhsachmonhoc {
	char id[100];
	char subjectname[100];
};
int main() {
	struct danhsachmonhoc monhoc[] = {
		{"MTH00055","Co so lap trinh"}
		,{"TTH105","Toan roi rac"}
		,{"TTH802","Mang may tinh"}
		,{"TTH573","Lap trinh web"}
	};
	char mamonhoc[10];
	printf("Nhap ma mon hoc: ");
	gets(mamonhoc);
	for (int i = 0; i < 4; i++) {
		if (strcmp(monhoc[i].id, mamonhoc) == 0) {
			printf("Ten mon hoc la: %s", monhoc[i].subjectname);
		}
	}
	return 0;
}*/
//Câu 4: Viết chương trình cho phép nhập một mảng số nguyên. Sau đó, chương trình tính mean (trung bình) của mảng trên và đồng thời đế được có bao nhiêu phần tử lớn hơn mean của mảng.
//Yêu cầu chương trình phải phân rã thành các hàm, ví dụ : hàm tính mean, hàm đếm số phần tử lớn hơn mean của mảng, hàm nhập mảng, ...
/*#include <stdio.h>
int enterArray(int a[],int b) {

	printf("Nhap cac phan tu cua mang: ");
	for (int i = 0; i < b; i++) {
		scanf_s("%d", &a[i]);
	}
	return a[100];
}
int avr (int a[],int b) {
	int tong = 0;
	for (int i = 0; i < b; i++) {
		tong = tong + a[i];
	}
	
	return tong/b;
}
int aboveMean(int arr[], int a,int b) {
	int count = 0;
	for (int i = 0; i < a; i++) {
		if (arr[i] > b) {
			count++;
		}
	}
	printf("\nSo phan tu lon hon mean la: %d", count);
}


int main() {
	int mean = 0;
	int arr[100]; 
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf_s("%d", &n);
	enterArray(arr,n);
	mean = avr(arr,n);
	printf("Gia tri trung binh mean cua mang la: %d", mean);
	aboveMean(arr, n, mean);
	return 0;
}*/
//Câu 5:Hãy viết hàm cho phép đảo thứ tự các ký tự của chuỗi. Sau đó viết chương trình cho phép nhập một chuỗi và in ra chuỗi bị đảo ngược.
/*#include <Stdio.h>
#include <string.h>
char reverse(char a[]) {
	int len = strlen(a);
	for (int i = len - 1; i >= 0; i--) {
		printf("%c", a[i]);
	}
}
int main(){
	char string[100];
	printf("Nhap chuoi: ");
	gets(string);
	reverse(string);
}*/
//							De on tap 2
//Câu 1:Câu 1: 
//Hãy vẽ sơ đồ khối flowchart và viết chương trình C để biểu diễn thuật toán cho phép người dùng nhập số thập phân và chuyển đổi sang chuỗi nhị phân có chiều dài là 8
//Ví dụ : Số thập phân là 99 sẽ có chuỗi bit có chiều dài 8 là “01100011”
/*#include <stdio.h>
int main() {
	int binary[8] = {""};
	int index=0;
	int decimal;
	printf("Nhap so thap phan: ");
	scanf_s("%d", &decimal);
	while(decimal>0) {
		binary[index] = decimal % 2;
		decimal = decimal / 2;
		index++;
	}
	for (int i = index ; i >= 0; i--) {
		printf("%d", binary[i]);
	}
	return 0;
}*/
//Câu 2: Câu 2: (2 điểm)
/*Một công ty bán hàng khuyến mãi dựa trên số lượng mặt hàng được đặt hàng như sau
Số lượng mặt hàng được đặt		Mức độ khuyến mãi(%)
		1 – 10							0
		11 – 24							5
		25 – 50							10
		Trên 50							15

Ví dụ, nếu bạn mua hàng của công ty với số lượng mặt hàng là 30 thì mức độ khuyến mãi sẽ là 10 % .
Vẽ sơ đồ khối flowchart và viết chương trình thể hiện thuật toán tính mức độ khuyến mãi dành cho khách hàng khi biết số lượng mặt hàng do khách hàng mua
Thực hiện lặp cho đến khi người dùng chọn “No” sau mỗi lần chương trình hỏi người dùng có muốn tiếp tục hay không.*/
/*#include <stdio.h>
#include <string.h>

int main() {
	int number;
	char choice[4];

	do {
		printf("Nhap so luong mat hang: ");
		scanf_s("%d", &number);
		getchar();

		if (number >= 1 && number <= 10) {
			printf("Muc do khuyen mai: 0%%\n");
		}
		else if (number >= 11 && number <= 24) {
			printf("Muc do khuyen mai: 5%%\n");
		}
		else if (number >= 25 && number <= 50) {
			printf("Muc do khuyen mai: 10%%\n");
		}
		else if (number > 50) {
			printf("Muc do khuyen mai: 15%%\n");
		}
		else {
			printf("So luong mat hang khong hop le.\n");
		}

		printf("Ban co muon tiep tuc khong? (Yes/No): ");
		fgets(choice, sizeof(choice), stdin);
		choice[strcspn(choice, "\n")] = '\0';

	} while (strcmp(choice, "Yes") == 0 || strcmp(choice, "yes") == 0);

	if (strcmp(choice, "No") == 0 || strcmp(choice, "no") == 0) {
		printf("Program stopped!.\n");
	}

	return 0;
}*/
//Câu 4: (2 điểm)
//Viết chương trình cho phép nhập một mảng số nguyên không quá 100 phần tử.Sau đó người dùng chọn 1 vị trí bất kỳ trong mảng và thay thế thành một con số khác.
//Yêu cầu chương trình phải phân rã thành các hàm.
/*#include <stdio.h>
int enter(int a[], int n) {
	printf("Nhap cac phan tu cua mang: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	return enter;
}
int xuat(int arr[], int n) {
	printf("Mang da nhap la: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return xuat;
}
int pick(int arr[], int n) {
	int k;
	printf("\nChon vi tri muon thay doi: ");
	scanf_s("%d", &k);
	return k;
}
int replace(int arr[], int k) {
	int a;
	printf("Nhap so muon thay doi: ");
	scanf_s("%d", &a);
	arr[k - 1] = a;
	return replace;
}
int main() {
	int arr[100];
	int n;
	int k;
	printf("Nhap so phan tu trong mang: ");
	scanf_s("%d", &n);
	enter(arr, n);
	xuat(arr,n);
	k= pick(arr, n);
	replace(arr, k);
	xuat(arr, n);
}*/
//Câu 5: (2 điểm)
//Hãy viết hàm kiểm tra số lần xuất hiện của một ký tự bất kỳ trong chuỗi
//Sau đó viết chương trình cho phép nhập một chuỗi và in ra ký tự có số lượng xuất hiện nhiều nhất.
/*#include <Stdio.h>
#include <string.h>
int check(char a[], char b ) {
	int count = 0;
	int len = strlen(a);
	for (int i = 0; i < len; i++) {
		if (a[i] == b) {
			count++;
		}
	}
	printf("So lan xuat hien cua ky tu %c la: %d", b, count);
	return count;
}
int find(char a[]) {
	int count[100] = {""};
	int len = strlen(a);
	char most;
	int maxcount = 0;
	for (int i = 0; i < len; i++) {
		int count = 0;
		for (int j = 0; j < len; j++) {
			if (a[j] == a[i]) {
				count++;
			}
		}
		if (count > maxcount) {
			maxcount = count;
			most = a[i];
		}
	}
	
	printf("\nKy tu xuat hien nhieu nhat la %c voi so lan xuat hien la: %d", most, maxcount);


	return find;
}
int main() {
	char word[100];
	char a;
	printf("Nhap mot chuoi: ");
	fgets(word, sizeof(word), stdin);
	word[strcspn(word, "\n")] = '\0';
	printf("Nhap ky tu can kiem tra: ");
	scanf_s("%c", &a);
	check(word, a);
	find(word);
	return 0;
}*/
// Đề 3 17-18
//Câu 1:
//Câu 1: (2 điểm)
//Hãy vẽ sơ đồ khối flowchart và viết chương trình C để cho phép người dùng nhập 3 số thực a, b, c sau đó giải phương trình bậc 2: ax ^ 2 + bx + c = 0
/*#include <stdio.h>
#include <math.h>
int main() {
	double delta = 0.;
	float a, b, c;
	float x,x1, x2 = 0.;
	printf("Nhap a,b,c de giai phuong trinh bac 2 ax^2 + bx + c = c :");
	scanf_s("%f %f %f", &a, &b, &c);
	delta = b * b - 4 * a * c;
	if (delta < 0) {
		printf("Phuong trinh vo nghiem");
	}
	else if (delta == 0) {
		x = -b / (2 * a);
		printf("Phuong trinh co nghiem kep la: x=x1=x2= %f", x);
	}
	else if (delta > 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("Phuong trinh co 2 nghiem phan biet la:\n x1= %f \n x2= %f", x1, x2);
	}
	return 0;
}*/
//Câu 2: (2 điểm)
//Giả sử học phí của một trường học là $8000 / năm.Học phí hằng năm tăng đều đặn thêm 10 % .
//Vẽ sơ đồ khối flowchart tính học phí của trường trong n năm tiếp theo với n là số nguyên dương được nhập từ bàn phím(n ≤ 100).Chương trình dừng lại khi người dùng nhập 0.
/*#include <Stdio.h>
int main() {
	do {
		int fee = 8000;
		int n;
		printf("\nNhap so nam de tinh hoc phi sau so nam do: ");
		scanf_s("%d", &n);
		if (n < 0 || n>100) {
			printf("\nSo nam khong hop le, vui long nhap lai!");
		}
		else if (n == 0) {
			break;
		}
		else if (n > 0 && n <= 100) {
			fee = fee + fee * n * 0.1;
			printf("\nHoc phi cua truong sau %d nam la: %d$ ", n, fee);
		}
	} while (1);
	return 0;
}*/
//Câu 3:
/*Một công ty muốn thống kê số lượng người phụ thuộc của nhân viên của mình.Người phụ thuộc của nhân viên có thể là con còn nhỏ, cha mẹ hết tuổi lao động, … Giả sử rằng công ty không có nhân viên nào có quá 5 người phụ thuộc, thì một báo cáo thường có dạng như sau :
Số người phụ thuộc		Số lượng nhân viên
		0						43
		1						35
		2						24
		3						11
		4						5
		5						7

Bảng dữ liệu cho thấy rằng số lượng nhân viên có 2 người phụ thuộc là 24 nhân viên.
Hãy viết chương trình cho phép nhập lần lượt số người phụ thuộc của  từng nhân viên.
Số người phụ thuộc nhập vào phải nằm trong khoảng từ 0 đến 5, ngược lại thì chương trình sẽ  dừng nhập rồi in ra bảng thống kê như ví dụ trên.*/
/*#include <stdio.h>
int main() {
	int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
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
}*/
//Câu 4: (2 điểm)
//Hãy viết 1 hàm nhận 2 tham số là 2 chuỗi và so sánh 2 chuỗi xem có giống nhau hay không.
// Nếu 2 chuỗi truyền vào giống nhau thì hàm trả về 1, ngược lại thì trả về 0. 
// Sau đó viết chương trình cho phép nhập 2 chuỗi, xuất ra “Giống nhau” nếu 2 chuỗi giống nhau và xuất ra “Khác nhau” nếu 2 chuỗi khác nhau.
//Lưu ý, không sử dụng hàm strcmp
/*#include <stdio.h>
#include <string.h>
int check(char a[], char b[]) {
	int len1 = strlen(a);
	int len2 = strlen(b);
	int count = 0;
	if (len1 != len2) {
		return 0;
	}
	else if (len1 == len2) {
		for (int i = 0; i < len1; i++) {
			for (int j = 0; j < len2; j++) {
				if (a[i] == b[j]) {
					count++;
				}
			}
		}
		if (count == len1 && count == len2) {
			return 1;
		}
	}
}
int main() {
	char a[100];
	char b[100];
	printf("Nhap chuoi 1: ");
	fgets(a, sizeof(a), stdin);
	a[strcspn(a, "\n")] == '\0';
	printf("Nhap chuoi 2: ");
	fgets(b, sizeof(b), stdin);
	b[strcspn(b, "\n")] == '\0';
	int value = check(a, b);
	if (value == 1) {
		printf("Giong nhau");
	}
	else printf("Khac nhau");

	return 0;
}*/
/*Câu 5: (2 điểm)
Hãy viết chương trình cho phép nhập một số chuỗi bất kỳ.Giả sử người dùng nhập 4 chuỗi sau, mỗi chuỗi ứng với một hàng :

Tôi muốn tắt nắng đi
Cho màu đừng nhạt mất
Tôi muốn buộc gió lại
Cho hương đừng bay đi

Sau đó, chương trình cho phép nhập 1 số trong khoảng từ 1 đến 4 (tương ứng với thứ tự số chuỗi vừa nhập) và in ra chuỗi tương ứng.
Ví dụ, người dùng nhập vào số 2 thì chương trình in ra :
“Cho màu đừng nhạt mất”

Hãy cài đặt chương trình C gồm một hàm main() và 2 hàm phụ tên hàm input và getString, trong đó :
input: dùng để nhập một số chuỗi bất kỳ
getString : dùng để trả về một chuỗi tương ứng với con số truyền vào*/

/*#include <Stdio.h>
#include <string.h>
void input(char arr[][100],int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap hang %d : ", i+1);
		fgets(arr[i], 100, stdin);
	}
}
char getString(char arr[][100], int temp, int n) {
	if (temp<0 || temp>n) {
		printf("So da nhap khong hop le");

	}
	else printf("\n%s", arr[temp - 1]);
}
int main() {
	int n;
	char arr[100][100];
	int temp;
	printf("Nhap so hang muon nhap: ");
	scanf_s("%d", &n);
	getchar();
	input(arr,n);
	printf("Nhap hang muon in ra: ");
	scanf_s("%d", &temp);
	getString(arr, temp, n);
}*/
//  Đề ôn tập 4
//Câu 1:
/*#include <Stdio.h>
int main() {
	int values[8] = { 126,64,32,16,8,4,2,1 };
	int decimal = 224, index = 0;
	int binary;
	while (index < 8) {
		if (decimal >= values[index]) {
			decimal = decimal - values[index];
			binary = 1;
		}
		else binary = 0;
		printf("%d", binary);
		index++;
	}
	return 0;
}*/
//Kết quả chương trình: 11100010
//Đây là một chương trình chuyển số thập phân sang nhị phân. Theo chương trình thì đầu vào là số 224,
//sau đó cho chạy vòng lặp theo index được cho bằng 0 với điều kiện index <8
// Nếu decimal lớn hơn số đầu trong mảng index là 126 thì sẽ trừ decimal cho số đó và gán binary là 1. In số binary là 1 ra sau đó tiếp tục vòng lặp.
// Nếu decimal bé hơn số trong mảng theo thứ tự thì binary sẽ gán bằng 0 và in ra.
// Giải tích 224 = 11100010:
// 224>index[0]=126 => decimal = 224-126= 98 -> in số '1'
// 98>index[1]=64 =>decimal = 98-64=34-> in số '1'
// 34>index[2]=32=>decimal = 34-32=2-> in số '1'
// 2 < index[3]=16-> in số '0'
// 2< index[4]=8 -> in số '0'
// 2< index[5]=4 -> in số '0'
// 2>index[6]=2-> decimal= 2-2=0-> in số '1'
// 0< index[7] = 1 -> in số '0'
/*
Câu 2: (2 điểm)
Viết chương trình nhập 1 ma trận vuông(giá trị nguyên) với kích thước do người dùng nhập(< 100).
Sau đó kiểm tra ma trận vừa nhập có đối xứng qua đường chéo chính không ?
*/
/*#include <stdio.h>
int main() {
	int arr[100][100];
	int count=0;
	int n;
	printf("Nhap cap cua ma tran vuong: ");
		for (int j = 0; j < n; j++) {
			printf("Nhap arr[%d][%d]: ",i+1,j+1);
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
	printf("Ma tran da nhap la: \n");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf(" %d ", arr[i][j]);
			}
			printf("\n");
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] != arr[j][i]) {
					count++;
				}
			}
		}
		if (count != 0) {
			printf("Ma tran khong doi xung qua duong cheo chinh!\n");
		}
		else printf("Ma tran doi xung qua duong cheo chinh!");
		return 0;
}*/



	/*Câu 3 : (3 điểm)
	Một công ty điện thoại di động tính phí nhắn tin đã gửi hàng tháng của một thuê bao như sau :
• Hàng tháng một thuê bao phải đóng phí cơ bản là 50 ngàn đồng.Và 100 tin nhắn đầu tiên được miễn phí.
• Sau tin nhắn thứ 100, cho đến tin nhắn thứ 200, mỗi tin nhắn bị tính phí là 300 đồng.• Sau tin nhắn thứ 200, mỗi tin nhắn bị tính phí là 400 đồng.
Thực hiện các yêu cầu sau đây :
a) Vẽ sơ đồ khối flowchart và viết chương trình thể hiện việc cho phép người dùng nhập vào số lượng tin nhắn đã gửi của  một tháng của một thuê bao.Tính phí mà thuê bao đó phải trả trong tháng đó.
b) Vẽ sơ đồ và viết chương trình C với yêu cầu tương tự ở câu a nhưng qua mỗi lần nhập chương trình cần xác nhận từ phía người dùng rằng có muốn chương trình tiếp tục thực hiện hay không.Chương trình dừng khi người dùng lựa chọn phương án dừng chương trình.
*/
/*#include <stdio.h>
int main() {
		int messenge;
		float fee = 0.;
		int basic = 50;
		printf("\nNhap so tin nhan da gui trong thang: ");
		scanf_s("%d", &messenge);
		if (messenge < 0) {
			printf("So tin nhan da nhap khong hop le");

		}
		else if (messenge >= 0 && messenge <= 100) {
			fee = basic;
		}
		else if (messenge > 100 && messenge <= 200) {
			fee = basic + 0.3 * (messenge - 100);
		}
		else if (messenge > 200) {
			fee = basic + 100 * 0.3 + 0.4 * (messenge - 200);
		}
		printf("So tien thue bao phai tra la: %f ngan dong ", fee);
}*/
/*#include <stdio.h>
#include <string.h>
int main() {
	int messenge;
	char answer[4];
	do {
		float fee = 0.;
		int basic = 50;
		printf("\nNhap so tin nhan da gui trong thang: ");
		scanf_s("%d", &messenge);
		getchar();
		if (messenge < 0) {
			printf("So tin nhan da nhap khong hop le");

		}
		else if (messenge >= 0 && messenge <= 100) {
			fee = basic;
		}
		else if (messenge > 100 && messenge <= 200) {
			fee = basic + 0.3 * (messenge - 100);
		}
		else if (messenge > 200) {
			fee = basic + 100 * 0.3 + 0.4 * (messenge - 200);
		}
		printf("So tien thue bao phai tra la: %f ngan dong ", fee);
		printf("\nCo muon tiep tuc hay khong (Yes/No): ");
		fgets(answer, sizeof(answer),stdin);
		answer[strcspn(answer, "\n")] = '\0';
		
	} while (strcmp(answer,"Yes")==0||strcmp(answer,"yes")==0);
}*/



/*Câu 4: (3 điểm)
Các tiểu bang của Mỹ được viết tắt bằng 2 kí tự như sau :
Tiểu bang của Mỹ 			Viết tắt
Alabama						 AL
Alaska 					   	AK
Arizona 					AZ
Arkansas					 AR
California 					CA
…					...
Hãy viết chương trình theo trình tự yêu cầu bên dưới, cho phép nhập bảng dữ liệu như ở trên, sau đó cho phép tra cứu tên tiểu bang của Mỹ dựa vào tên viết tắt :

a / Hãy viết một hàm có tham số là một mảng các chuỗi, sau đó cho phép người dùng lưu vào mảng tên các tiểu bang được nhập từ bàn phím.
Mô tả hàm như sau :
void inputStates(char states[][80], int n);
với:
n: số tiểu bang có trong mảng states
Tương tự, hãy viết một hàm có tham số là một mảng các chuỗi, sau đó cho phép người dùng lưu vào mảng đó tên viết tắt các tiểu bang được nhập vào từ bàn phím.
void inputAbbreviation(char abbr[][3], int n);

b / Hãy viết một hàm tra cứu tên tiểu bang dựa trên tên viết tắt, dựa trên dữ liệu của 2 mảng ở trên.
Ví dụ, hàm nhận chuỗi “CA” thì sẽ trả về chuỗi “Califonia”.
Mô tả hàm như sau :
char* lookup(char* s, char abbr[][3], char states[][80], int n);

với:
s: chuỗi viết tắt.Ví dụ “CA”.
abbr : mảng các tên viết tắt của các tiểu bang.
states : mảng các tên tiểu bang.
n : số tiểu bang có *rong mảng states.
hàm trả về tên tiểu bang nếu tìm thấy, NULL nếu không tìm thấy.

c / Hãy viết chương trình chính, 
dùng một mảng để lưu tên các tiểu bang, và một mảng để lưu tên viết tắt.Sau đó, gọi hàm ở câu a để nhập tên và viết tắt các tiểu bang.Rồi cho phép người dùng nhập tên viết tắt và gọi hàm tra cứu ở câu b để in ra tên đầy đủ của tiểu bang.
*/
//Câu a)
#include <stdio.h>
#include <string.h>
void inputStates(char states[][80], int n) {
	for (int i = 0; i < n; i++) {
			printf("Nhap ten bang %d: ", i + 1);
			getchar();
			fgets(states[i], 80, stdin);
			states[i][strcspn(states[i], "\n")] = '\0';
	}
}
void inputAbbreviation(char abbr[][3], int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap ten viet tat cua bang %d: ", i + 1);
		getchar();
		fgets(abbr[i],4 , stdin);
		abbr[i][strcspn(abbr[i], "\n")] = '\0';

	}
}
char* lookup(char* s[], char abbr[][3], char states[][80], int n) {
	while (s != '0') {
		printf("Nhap ten viet tat can tra cuu (nhap 0 de dung chuong trinh): ");
		fgets(s, 3, stdin);
		for (int i = 0; i < n; i++) {
			if (strcmp(s, abbr[i]) == 0) {
				return states[i];
			}
			else return NULL;
		}
	}
}
int main() {
	char states[80][80];
	int n;
	char abbr[80][3];
	char* s="";
	printf("Nhap so bang can nhap: ");
	scanf_s("%d",&n);
	inputStates(states, n);
	inputAbbreviation(abbr, n);
	getchar();
	char* statename = lookup(s, abbr, states, n);


}