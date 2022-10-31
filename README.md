# 使用Clion进行STC8单片机开发
本仓库提供了Clion开发STC单片机的模板，下载到本地后只需要少量修改即
可进行STC单片机的开发
# 需要的开发环境

- SDCC
- Clion

在命令行中输入如下命令查看是否安装SDCC并添加进环境变量
```
sdcc -v
```

# 修改CMakeLists.txt
由于Clion本身无法识别sdcc的库，因此需要手动将sdcc的库添加进CMakeLists。
不添加库也是可以的，代码能正常编译但是Clion会产生大量的错误提示。

把CMakeLists.txt中该指令的路径替换成自己电脑中SDCC的include
路径
```
set(SDCC_INCLUDE_DIR E:/SDCC/include)
```
# 烧录
点击编译即可在Clion的编译文件夹下看到hex文件，这个文件即是烧录到
STC单片机中的文件。

可通过配合**STC-ISP**烧录软件完成一键烧录的功能，即只需点击编译
就能完成编译到下载的流程。

# 使用的库

该模板使用到了用于开发STC8的开源库**fw_lib**，并做了少量修改
避免Clion产生错误提示。

Github链接:https://github.com/IOsetting/FwLib_STC8