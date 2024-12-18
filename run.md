
可以在项目目录中新建一个build文件夹

```cmake
mkdir build
cd build
```

然后在其中构建上层目录中的项目

```sh
cmake .. -G "MinGW Makefiles"
mingw32-make
```

注意使用的是 GB 2312 编码

两处要改为自己的地址
1. main.cpp / 10行 / String path = "D:/Github/LPR/pictures/car.bmp";//图片路径
2. LPR.cpp / 82行 / stream << "D:/Github/LPR/pictures/num_";

openCV版本是 4.5.5