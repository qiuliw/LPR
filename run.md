
��������ĿĿ¼���½�һ��build�ļ���

```cmake
mkdir build
cd build
```

Ȼ�������й����ϲ�Ŀ¼�е���Ŀ

```sh
cmake .. -G "MinGW Makefiles"
mingw32-make
```

ע��ʹ�õ��� GB 2312 ����

����Ҫ��Ϊ�Լ��ĵ�ַ
1. main.cpp / 10�� / String path = "D:/Github/LPR/pictures/car.bmp";//ͼƬ·��
2. LPR.cpp / 82�� / stream << "D:/Github/LPR/pictures/num_";

openCV�汾�� 4.5.5