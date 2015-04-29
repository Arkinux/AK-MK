# AK-MK
    AK-MK将项目的C源文件和.h头文件分别放置不同目录进行管理， 使用Makefile规则构建编译，将生成的.o等中间文件集中管理，以避免其散在源文件中

### 1、将.h文件放置include目录下，将.c文件放到src目录下
### 2、将src目录下所有的.c 文件追加到SRC，要修改target.mk文件：
SRC :=<br>
SRC += SRCDIR/xx.c

### 3、make编译
$ make<br> 
PROJ    : AK-MK<br>
BINNAME : AK-MK.bin<br>
mkdir -p ./obj.AK-MK<br>
mkdir -p ./bin.AK-MK<br>
make[1]: Entering directory `/home/Arkinux/AK-MK' <br>
[Compiling ./src/hello.c] <br>
Linking console executable: ./bin.AK-MK/AK-MK.bin <br>
 Linking Complete! <br>
make[1]: Leaving directory `/home/Arkinux/AK-MK' <br>
 make all done! <br>
$ ls<br>
bin.AK-MK  include  Makefile  obj.AK-MK  src  target.mk<br>
生成的obj.AK-MK目录保存编译产生的.o等中间文件，生成的bin.AK-MK目录保存编译产生的可执行文件

### 4、执行
$ cd bin.AK-MK<br>
$ ./AK-MK.bin 
