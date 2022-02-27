![](https://img.shields.io/badge/State-Abandoned-red.svg)

⚠BridgeBetweenMIBMSCloudAndOPCServer即将废弃

请使用会在稍晚些时候发布的支持XSuNet2+版本的XSuNetBridgeForOPCServer，
如果你正在使用BridgeBetweenMIBMSCloudAndOPCServer，届时请及时迁移至XSuNetBridgeForOPCServer！

# BridgeBetweenMIBMSCloudAndOPCServer
实现和OPCServer的连接，同时实现和XSuNet的连接，为PLC OPCServer与基于XSuNet1.x的MIBMSCloud服务器进行通讯提供支持的中间件程序


## 将PLC物理层寄存器值的集合转化为逻辑抽象层的控制对象（Device设备）

1.通过Bridge.ini配置文件定义不同的设备对应在PLC控制器上的寄存器值和对应传感器数据、设备控制变量转化为C++中的抽象Device对象。

2.向XSuNet Server将Device逐个进行注册。

3.按照周期上报和接受数据。

