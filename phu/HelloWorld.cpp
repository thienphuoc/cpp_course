#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

struct Hero {

	std::string name;
	int hp;//[0,100]
};


std::string getName(int index) {

	//id 0 -> TuCoNy
	//id 1 -> chaubacho
	//id 2 -> docCoCauBai
	//id 3 -> phuoc
	//id 4 -> ten may dua

	if (index == 0) {
		return "TuCoNy";
	
	}if (index == 1) {
		return "chauBacHo";
	}if (index == 2) {
		return "docCoCauBai";
	}if (index == 3) {
		return "phuoc";
	}if (index == 4) {
		return "phu";
	}

	switch (index)
	{
	case	0:
		return "TuCoNy";
	default:
		break;
	}
	
	return std::string("phuoc");
}

int randomHP(int a,int b) {

	//wirte your code here 
	int randomNumber = std::rand() %100;//thu vien c++.

	return randomNumber;
}

void damge(int damgeNumber, Hero &doithu) 
{
	doithu.hp = doithu.hp - damgeNumber;

	if (doithu.hp < 0) {
		doithu.hp = 0;
	}
}

bool coChetKhong(Hero & doithu) {

	if (doithu.hp  <= 0) {
		return true;
	}
	return false;
}


void showMinMaxHeros(Hero dsDoithu[5]) {

	//c1:

	int max = dsDoithu[0].hp;
		for (int i = 0; i <= 5; i++) {
			if (dsDoithu[i].hp > max){
				max = dsDoithu[i].hp;
			}
	 }
	int min = dsDoithu[0].hp;
	for (int i = 0; i <= 5; i++) {
		if (dsDoithu[i].hp < min) {
			min = dsDoithu[i].hp;
			}
		}

	// c2: loop 1 lan -> ton cpu

	// c3: https://www.techiedelight.com/find-minimum-maximum-value-array-cpp/ it cpu.


	std::cout << "HP lon nhat la: " << max << std::endl<<"HP nho nhat la: "<< min<<std::endl;;
}

void decimaToBinary(Hero dsDoithu[5]) {

	std::cout << "cau5" << std::endl;;

	for (int i = 0; i < 5; i++) {

		int mau = dsDoithu[i].hp;
		int binary[32];
		int index = 0;
		std::cout << "Mau: " << mau <<" ";
		while (mau > 0) {
			binary[index] = mau % 2;
			//std::cout << binary[index];
			mau = mau / 2;
			index++;
		}

		for (int i = index - 1; i >= 0; i--) {
			std::cout << binary[i];;
		}

		std::cout << std::endl;

	}
}



int main()
{
	const int soluongDoiThu = 5;

	Hero dsDoithu[soluongDoiThu];

	//vua vao tran random mau tu 0,100
	for (int i = 0; i < soluongDoiThu; i++) {

		dsDoithu[i].name = getName(i);
		dsDoithu[i].hp = randomHP(0,100); 

		std::cout << "HP ban dau: "<< dsDoithu[i].name << " " << dsDoithu[i].hp << std::endl;//hien thong tin len man hinh.

		damge(10, dsDoithu[i]); //minh danh no -> no bi mat mau.

		std::cout << "HP con lai: " << dsDoithu[i].name << " " << dsDoithu[i].hp << std::endl;//cap nhat lai thong tin len man hinh.
	}


	//kiem tra co chet ko

	for (int i = 0; i < soluongDoiThu; i++) {

		if (coChetKhong(dsDoithu[i])==true) {

			std::cout << dsDoithu[i].name << " da chet!"<<std::endl;
		}
	}

	//4
	showMinMaxHeros(dsDoithu);

	//5.

	decimaToBinary(dsDoithu);


}

