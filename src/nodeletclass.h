#include <nodelet/nodelet.h>
 
class nodeletclass :public nodelet::Nodelet  //继承父类nodelet::Nodelet
{
public:
  nodeletclass();         //构造函数，可有可无？
public:
  virtual void onInit();   //这个虚函数，在启动本Nodelet节点时，自动调用
};
