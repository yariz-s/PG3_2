#include <stdio.h>

template <typename Type1, typename Type2>

Type1 add(Type1 a, Type2 b) {

	///関数テンプレート
	if (b<a) {
		return b;
	}
	if (a<b){
		return a;
	}
}

template <>
char add<char>(char a, char b) {
	return printf("数字以外は代入できません\n");
}

int main() {


	//計算と結果出力
	printf("%d\n", add<int,float>(128, 256.0f));
	printf("%d\n", add<char,char>(110,110));
	printf("%lf\n", add<double,double>(3.14159265, 2.7182818281));

	return 0;
}


///source-charset:utf-8