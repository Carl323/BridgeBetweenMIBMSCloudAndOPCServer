![](https://img.shields.io/badge/State-Abandoned-red.svg)

# BridgeBetweenMIBMSCloudAndOPCServer
实现和OPCServer的连接，同时实现和XSuNet的连接，为PLC OPCServer与基于XSuNet1.x的MIBMSCloud服务器进行通讯提供支持的中间件程序
(BridgeBetweenMIBMSCloudAndOPCServer已被废弃,请使用支持XSuNet2+版本的XSuNetBridgeForOPCServer，如果你正在使用BridgeBetweenMIBMSCloudAndOPCServer，请及时迁移你的应用依赖项至新的组件)

## 将PLC物理层寄存器值的集合转化为逻辑抽象层的控制对象（Device设备）

1.通过Bridge.ini配置文件定义不同的设备对应在PLC控制器上的寄存器值和对应传感器数据、设备控制变量等进行分组和绑定。

2.Bridge会通过OPCServer读取预定义的值，并按照变量的分组（属于哪一个设备）生成Device对象（程序层面）并向XSuNet Server逐个进行设备注册。

