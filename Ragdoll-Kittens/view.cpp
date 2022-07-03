#include "view.h"
#include <QPoint>
#include <QMouseEvent>
#include <QPen>
#include <QBrush>
#include <iostream>
#include <QGraphicsItem>

using namespace std;

MyView::MyView() : QGraphicsView()
{ }

// File functions
void MyView::newDrawing()
{
   this->scene()->addRect(0, 0, 800, 800, QPen(Qt::black), QBrush(Qt::white));
}

void MyView::save()
{

}

void MyView::open()
{

}

void MyView::exit()
{

}

// Shape functions
void MyView::rectangle()
{ 
  shape = s_rect;
}

void MyView::circle()
{ 
  shape = s_circle;
}

void MyView::triangle()
{ 
  shape = s_tri;
}

// Color functions
void MyView::red()
{
  m_color = 0xFF0000;
}

void MyView::orange()
{
  m_color = 0xFF9400;
}

void MyView::yellow()
{
  m_color = 0xFAFF00;
}

void MyView::green()
{
  m_color = 0x07FF00;
}

void MyView::blue()
{
  m_color = 0x000EFF;
}

void MyView::purple()
{
  m_color = 0x4C04B9;
}

void MyView::black()
{
  m_color = 0x0;
}

void MyView::mousePressEvent(QMouseEvent *event)
{
  // Sets x and y coordinates to be where the user clicks with the cursor
  QPoint p = event->pos();
  QPointF q = mapToScene(p);
  qreal x = q.x();
  qreal y = q.y();
  QPen drawPen(m_color);
  drawPen.setWidth(1);

  // Code of the path of the Triangles
  QPainterPath path;
  path.moveTo(x, y);
  path.lineTo(x+20, y+20);
  path.lineTo(x-20, y+20);

  // Code to draw Rectangles
  if(shape == s_rect)
  {
    this->scene()->addRect(QRectF(x-2, y-2, 21, 21), drawPen, QBrush(m_color));
  }

  // Code to draw Circles
  else if(shape == s_circle)
  {
    this->scene()->addEllipse(x-2, y-2, 21, 21, drawPen, QBrush(m_color));
  }

  // Code to draw Triangles
  else if(shape == s_tri)
  {
    this->scene()->addPath(path, drawPen, QBrush(m_color));
  }
}

