#include <QGraphicsView>
#include <QObject>

#ifndef __VIEW_H
#define __VIEW_H

class MyView : public QGraphicsView
{
  // enum is used to switch the drawing output between shapes and colors
  enum Shape{s_rect, s_circle, s_tri};
  enum Color{};
  Q_OBJECT
  private:
    int m_color;
  public:
  // shape is used with the mouse click and enum calls above to change color and shape
    Shape shape;
    MyView();
    void mousePressEvent(QMouseEvent* event);
  public slots:
  // Slots to connect buttons to functions
    // File functions
    void newDrawing();
    void save();
    void open();
    void exit();
    
    // Shape functions
    void rectangle(); 
    void circle(); 
    void triangle();

    // Color functions
    void red();
    void orange();
    void yellow();
    void green();
    void blue();
    void purple();
    void black();
};

#endif

