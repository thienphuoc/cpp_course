#include <iostream>
#include <vector>

struct Hero {

	std::string name;
	int hp;//[0,100]
};


std::string getName(int index) {

	//dung switch case hoac if


	if (index == 3) {
		return "phuoc";
	}

	//id 0 -> TuCoNy
	//id 1 -> chaubacho
	//id 2 -> docCoCauBai
	//id 3 -> phuoc
	//id 4 -> ten may dua
	return std::string("phuoc");
}

int randomHP(int a,int b) {

	//wirte your code here 

	return 100;
}

void damge(int damgeNumber, Hero &doithu) 
{
	doithu.hp = doithu.hp - damgeNumber;

	if (doithu.hp < 0) {
		doithu.hp = 0;
	}
}

bool coChetKhong(Hero& doithu) {

	//neu mau <=0 -> thi chet 
	//wirte your code here 

	return false;
}


void showMinMaxHeros(Hero dsDoithu[5]) {


	std::cout << "cau4" << std::endl;;
}

void decimaToBinary(Hero dsDoithu[5]) {

	std::cout << "cau5" << std::endl;;

	for (int i = 0; i < 5; i++) {

		int mau = dsDoithu[i].hp;

		// chyen doi decima to binary o day.

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

		std::cout << dsDoithu[i].name << " " <<  dsDoithu[i].hp << std::endl;//hien thong tin len man hinh.

		damge(10, dsDoithu[i]); //minh danh no -> no bi mat mau.

		std::cout << dsDoithu[i].name << " " << dsDoithu[i].hp << std::endl;//cap nhat lai thong tin len man hinh.
	}


	//kiem tra co chet ko

	for (int i = 0; i < soluongDoiThu; i++) {

		if (coChetKhong(dsDoithu[i])) {

			std::cout << dsDoithu[i].name << "da chet!";
		}
	}

	//4
	showMinMaxHeros(dsDoithu);

	//5.

	decimaToBinary(dsDoithu);


}

