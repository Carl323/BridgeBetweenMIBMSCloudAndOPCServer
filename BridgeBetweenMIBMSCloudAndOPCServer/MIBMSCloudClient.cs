using System.Collections;
using System.Net;
using System.Net.Sockets;


namespace BridgeBetweenMIBMSCloudAndOPCServer
{
    internal class MIBMSCloudClient
    {
        private string _ip = string.Empty;
        private int _port = 0;
        private Socket _socket;
        private byte[] buffer = new byte[1024 * 1024 * 2];
        private Thread t;

        /// <summary>
        /// 构造函数
        /// </summary>
        /// <param name="ip">连接服务器的IP</param>
        /// <param name="port">连接服务器的端口</param>
        public MIBMSCloudClient(string ip, int port)
        {
            this._ip = ip;
            this._port = port;
        }
        public MIBMSCloudClient(int port)
        {
            this._ip = "127.0.0.1";
            this._port = port;
        }

        /// <summary>
        /// 开启服务,连接服务端
        /// </summary>
        public void Init()
        {
            //1 实例化套接字(IP4寻址地址,流式传输,TCP协议)
            _socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            //2 创建IP对象
            IPAddress address = IPAddress.Parse(_ip);
            //3 创建网络端口包括ip和端口
            IPEndPoint endPoint = new IPEndPoint(address, _port);
            //4 建立连接
            _socket.Connect(endPoint);
            Console.WriteLine("连接MIBMSCloud成功！");


        }
        public void Process()
        {
            byte[] recvbuf = new byte[1024];
            Init();
            ArrayList ServerList = new ArrayList();
            ServerList.Add(_socket);
            while (true)
            {
                Socket.Select(ServerList, null, null, 1000);
                _socket.Receive(recvbuf);
                Handler(recvbuf);
            }
        }

        private void Handler(byte[] recvbuf)
        {
            string str = System.Text.Encoding.Default.GetString(recvbuf);
        }
        public void StartClient()
        {
            t = new Thread(Process);
            t.Start();
        }
        public void ReStartClient()
        {
            t = new Thread(Process);
            t.Start();
        }
        public void SendInfo(string STR)
        {
            byte[] byteArray = System.Text.Encoding.Default.GetBytes(STR);
            _socket.Send(byteArray);
        }
    }
}
