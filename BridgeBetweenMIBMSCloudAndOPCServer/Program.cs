// See https://aka.ms/new-console-template for more information
using BridgeBetweenMIBMSCloudAndOPCServer;
public class Program
{
    static void Main() 
    {
        OPCUAClient OClient = new OPCUAClient();
        string OURL = "opc.tcp://127.0.0.1:49320";
        Task task = OClient.ConnectServer(OURL);
        //task.Start();
        MIBMSCloudClient MClient = new MIBMSCloudClient(10000);
        MClient.StartClient();
        while (true)
        {

        }
    }
}
