// ����ʶ��.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "LPR.h"


int main()
{
	LPR lpr;//Ҳ����LPR lpr(path);
	String path = "D:/Github/LPR/pictures/car.bmp";//ͼƬ·��
	lpr.load(path);//����ͼƬ
	lpr.showSrc();//��ʾԭͼ
	lpr.processing();//ʶ����
	waitKey(0);
    return 0;
}

