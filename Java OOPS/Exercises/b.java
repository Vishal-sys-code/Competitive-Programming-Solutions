import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*<applet code="Exam" height=600 width=600>
  </applet>*/
public class Exam extends Applet implements ActionListener
{
  Button house,car,circle;
  int ch=0;
  public void init()
  {
    house=new Button("House");
    car=new Button("Car");
    circle=new Button("Circle");
    add(house);
    add(car);
    add(circle);
    house.addActionListener(this);
    car.addActionListener(this);
    circle.addActionListener(this);
   }
   public void actionPerformed(ActionEvent evt)
   {
     String cmd=evt.getActionCommand();
     if(cmd.equals("House"))
      ch=1;
     else if(cmd.equals("Car"))
      ch=2;
     else if(cmd.equals("Circle"))
      ch=3;
     repaint();
    }
    public void paint(Graphics g)
   {
     switch(ch)
     {
       case 1:drawHouse(g);
              break;
       case 2:drawCar(g);
              break;
       case 3:drawCircle(g);
      }
     }
     public void drawHouse(Graphics g)
     {
    int x[]={100,600,350,100};
    int y[]={200,200,50,200};
    int x1[]={300,300,400,400};
    int y1[]={400,275,275,400};
    g.drawPolygon(x,y,4);//roof
    g.drawLine(175,200,175,400);//left wall
    g.drawLine(525,200,525,400);//right wall
    g.drawRect(100,400,500,70);//base
    g.drawPolygon(x1,y1,4);//door
   }
   public void drawCar(Graphics g)
   {
     int x[]={50,150,200,400,450,550,550,50,50};
    int y[]={250,250,175,175,250,250,325,325,250};
    g.drawPolygon(x,y,x.length);//car
    g.drawOval(125,325,100,60);//left wheel
    g.drawOval(375,325,100,60);//right wheel
   }
   public void drawCircle(Graphics g)
   {
     g.setColor(Color.blue);
     g.fillOval(100,100,200,200);
    }
  }