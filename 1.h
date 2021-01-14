#include<iostream>
class GAT1400Server
{
public:
    GAT1400Server(std::string &url); //初始化服务器的地址IP:port
    ~GAT1400Server();
    bool Register();   //向服务器注册，返回对错
    bool Unregister(); //向服务器注销，返回对错
    bool Keepalive();  //向服务器保活，返回对错
private:
    const std::string url_;
};
GAT1400Server::GAT1400Server(){
    
};
GAT1400Server::~GAT1400Server(){

};
GAT1400Server::Register(){

};
GAT1400Server::Unregister(){

};
GAT1400Server::Keepalive(){

};
class GAT1400Face
{
};
class GAT1400Person
{
};
class GAT1400Vehicle
{
};
