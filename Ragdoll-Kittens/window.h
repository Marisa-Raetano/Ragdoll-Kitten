#include "view.h"
#include <QWidget>
#include <QMainWindow>
#include <QToolBar>

#ifndef __WINDOW_H
#define __WINDOW_H

class QGraphicsScene;
class QPushButton;
class QVBoxLayout;
class QMouseEvent;
class QToolBar;

class Window : public QMainWindow
{
  Q_OBJECT
  private:
    // Creates menus, displays, and toolbars
    QGraphicsScene* m_scene;
    MyView* m_view;
    QMenuBar *m_menubar;
    QMenu *m_menu;
    QMenu *m_colorMenu;
    QToolBar *m_toolbar;    
    
    // Buttons for shapes
    QPushButton* m_triangle;
    QPushButton* m_circle;
    QPushButton* m_rectangle;
    
    // Buttons for colors
    QPushButton* m_red;
    QPushButton* m_orange;
    QPushButton* m_yellow;
    QPushButton* m_green;
    QPushButton* m_blue;
    QPushButton* m_purple; 
    QPushButton* m_black;

    // Sets widgets to line up vertically
    QVBoxLayout* m_layout;
 
  public:
    // Constructor and Destructor for Window
    Window();
    ~Window();
};

#endif

