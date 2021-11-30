class shape{
  protected:
  double x;
  double y;
  public:
  virtual void get_data();
  virtual void  display(){};
};
class triangle:public shape{
public:
void display();
void get_data();
};
class rect:public shape{
public:
void display();
};
void fun1();