/*#include<iostream>

using namespace std;

int main() {
	int n, m;
	int** arr;
	// Có thể hiểu arr là mảng n phần tử, mỗi phần tử là 1 con trỏ kiểu int*

	cin >> n >> m;
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			sum = sum + arr[i][j];
		}
		cout << sum << endl;
	}
	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* arr = new int[n];
	cout << "Nhap cac phan tu cua mang: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int x, k;
	cout << "Nhap x va k: ";
	cin >> x >> k;
	for (int i = n; i >= k+1; i--) {
		arr[i] = arr[i - 1];
	}
	arr[k] = x;
	n++;
	for (int i = 0; i < n; i++) {
		cout << arr[i]<<" ";
	}
}*/
/*#include <iostream>
using namespace std;
int main() {
	int n;
	int k;
	cout << "Nhap so phan tu cua mang: "<<endl;
	cin >> n;
	int* arr = new int[n];
	cout << "Nhap cac phan tu cua mang: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Mang da nhap la: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Nhap phan tu muon xoa: " << endl;
	cin >> k;
	for (int i = k -1; i < n; i++) {
		arr[i] = arr[i + 1];
	}
	n--;
	cout << "Mang sau khi xoa la: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr;
}*/
/*#include <iostream>
#include <list>
using namespace std;

struct node {
	int data;
	node* next;
};

node* createNode(int x) {
	node* temp = new node;
	temp->data = x;
	temp->next = NULL;
	return temp;
}

node* addElement(node* p, int x) {
	node* temp = createNode(x);
	p->next = temp;
	return temp;
}

node* getNode(node* l, int k) {
	node* p = l;
	for (int i = 0; i < k; i++) {
		if (p == NULL) {
			return NULL; // Handle the case when k is out of bounds
		}
		p = p->next;
	}
	return p;
}

int main() {
	int x, n;
	cin >> n;
	cin >> x;
	node* p = createNode(x);
	node* a = p;
	for (int i = 1; i < n; i++) {
		cin >> x;
		a = addElement(a, x);
	}
	int k;
	cin >> k;
	a = getNode(p, k);
	cout << a->data;

	return 0; // Don't forget to return a value from main
}*/
/*#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {
	int index;
	for (int i = 0; i < n - 1; i++) {
		index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[index]) {
				index = j;
			}
		}
		if (index != i) {
			swap(arr[i], arr[index]);
		}
	}
}
int main() {
	int n;
	cin >> n;
	int* arr=new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	selectionSort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}*/
/*#include <iostream>
using namespace std;
int partition(int arr[], int start, int end) {
	int pindex = start;
	int pivot = arr[end];
	for (int i = start; i <= end - 1; i++) {  // Sửa lỗi ở đây
		if (arr[i] <= pivot) {
			swap(arr[i], arr[pindex]);
			pindex++;
		}
	}
	swap(arr[end], arr[pindex]);
	return pindex;
}

void QuickSort(int arr[], int i, int j) {
	if (i < j) {
		int pindex = partition(arr, i, j); // Gán giá trị trả về của partition vào pindex
		QuickSort(arr, i, pindex - 1);     // Sửa ở đây
		QuickSort(arr, pindex + 1, j);     // Sửa ở đây
	}
}

int main() {
	int n;
	cout << "Nhap so phan tu cua mang: " << endl;
	cin >> n;
	cout << "Nhap cac phan tu cua mang: ";
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	QuickSort(arr, 0, n - 1);
	cout << "Mang sau khi sap xep bang Quicksort la: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i]<<" ";
	}
	cout << endl;
	for (int i = 1; i < n; i++) {
		if (arr[i] - arr[i - 1] > 1) {
			for (int j = arr[i]; j <= arr[i - 1]-1; j++) {
				cout << j << " ";
			}
		}
	}
}*/
#include <iostream>
using namespace std;
struct node {
	int data;
	node* left;
	node* right;
};
node* insert(node* t, int x) {
	if (t == NULL) {
		node* temp = new node;
		temp->data = x;
		temp->left = NULL;
		temp->right = NULL;
		return temp;
	}
	else {
		if (x < t->data) {
			t->left = insert(t->left, x);
		}
		else {
			t->right = insert(t->right, x);
		}
	}
	return t;
}
void printTree(node* t) {
	if (t != NULL) {
		printTree(t->left);
		cout << t->data << " ";
		printTree(t->right);
	}
}
int treeLevel(node* t) {
	if (t == NULL) {
		return -1;
	}
	return 1 + max(treeLevel(t->left), treeLevel(t->right));
}
node* turnLeft(node* a) {
	node* b = a->right;
	node* c = b->left;
	a->right = c;
	b->left = a;
	return b;
}
node* turnRight(node* a) {
	node* b = a->left;
	node* c = b->right;
	a->left = c;
	b->right = a;
	return b;
}
bool isAVL(node* t) {
    if (t == NULL) {
        return true; // Cây rỗng được coi là cây AVL
    }

    int leftHeight = treeLevel(t->left);
    int rightHeight = treeLevel(t->right);

    if (abs(leftHeight - rightHeight) > 1) {
        return false; // Cây mất cân bằng
    }

    return isAVL(t->left) && isAVL(t->right); // Kiểm tra cả hai nhánh con
}

bool checkAVL(node* t) {
    return isAVL(t);
}


node* updateAVL(node* t) {
	if (t == NULL) {
		return t; // Trường hợp cơ sở: cây rỗng
	}

	// Cập nhật độ cao của cây con bên trái và bên phải
	int leftHeight = treeLevel(t->left);
	int rightHeight = treeLevel(t->right);

	if (abs(leftHeight - rightHeight) > 1) { // Cây mất cân bằng
		if (leftHeight > rightHeight) { // Cây mất cân bằng về phía trái
			node* p = t->left;
			if (treeLevel(p->left) >= treeLevel(p->right)) {
				t = turnRight(t);
			}
			else {
				t->left = turnLeft(t->left);
				t = turnRight(t);
			}
		}
		else { // Cây mất cân bằng về phía phải
			node* p = t->right;
			if (treeLevel(p->right) >= treeLevel(p->left)) {
				t = turnLeft(t);
			}
			else {
				t->right = turnRight(t->right);
				t = turnLeft(t);
			}
		}
	}

	// Duyệt cây tiếp tục đối với cả hai nhánh con
	t->left = updateAVL(t->left);
	t->right = updateAVL(t->right);

	return t;
}
void printTreeWithSpaces(node* t, int depth) {
	if (t == NULL) {
		return;
	}
	depth += 5; // Tăng khoảng cách giữa các cấp
	printTreeWithSpaces(t->right, depth);
	cout << endl;
	for (int i = 5; i < depth; i++) {
		cout << " ";
	}
	cout << t->data << "\n";
	printTreeWithSpaces(t->left, depth);
}
int main() {
	int x, n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	node* t = NULL;
	cout << "Nhap cac phan tu cua cay: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> x;
		t = insert(t, x);
	}
	cout << endl;
	printTreeWithSpaces(t,0);
	cout << endl;
	if (!checkAVL(t)) {
		cout << "Cay da cho khong phai la cay AVL!!" << endl;
		cout << "Bac cua cay la: " << treeLevel(t)<<endl;
		while(!checkAVL(t)){
			t = updateAVL(t);
		}
		cout << "Cay sau khi update thanh AVL: " << endl;
		printTreeWithSpaces(t, 0);
		cout<<endl<<"co bac la : " << treeLevel(t);
	}else{
		cout << "Cay da cho la cay AVL co bac la: " << treeLevel(t);
	}

}
