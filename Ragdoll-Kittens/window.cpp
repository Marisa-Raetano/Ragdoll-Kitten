#include "window.h"
#include "view.h"
#include <QGraphicsScene>
#include <QRectF>
#include <QGraphicsRectItem>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMenu>
#include <QMenuBar>
#include <QMainWindow>
#include <QWidget>
#include <iostream>

// Main window of graphic project
Window::Window() : QMainWindow()
{
  m_layout = new QVBoxLayout;
  m_toolbar = new QToolBar(this);
 
  // Sets the border of the canvas to be drawn on 
  m_scene = new QGraphicsScene(this);
  m_scene->addRect(0, 0, 800, 800, QPen(Qt::black), QBrush(Qt::white));
  
  m_view = new MyView();
  m_view->setScene(m_scene);
  setCentralWidget(m_view);

  // Adds new drop down menus
  m_menubar = new QMenuBar(this);
  m_menu = new QMenu(tr("File"));
  m_colorMenu = new QMenu(tr("Colors"));

  // Sets the color menu and file menu as drop down menus
  setMenuBar(m_menubar);
  m_menubar->addMenu(m_menu);
  m_menubar->addMenu(m_colorMenu);

  // Adds the file options to the file drop down menu
  m_menu->addAction("New", (MyView*)m_view, SLOT(newDrawing()));
  m_menu->addAction("Save", (MyView*)m_view, SLOT(save()));
  m_menu->addAction("Open", (MyView*)m_view, SLOT(open()));
  m_menu->addAction("Exit", (MyView*)m_view, SLOT(exit()));

  // Adds color options to the color drop down menu
  m_colorMenu->addAction("Red", (MyView*)m_view, SLOT(red()));
  m_colorMenu->addAction("Orange", (MyView*)m_view, SLOT(orange()));
  m_colorMenu->addAction("Yellow", (MyView*)m_view, SLOT(yellow()));
  m_colorMenu->addAction("Green", (MyView*)m_view, SLOT(green()));
  m_colorMenu->addAction("Blue", (MyView*)m_view, SLOT(blue()));
  m_colorMenu->addAction("Purple", (MyView*)m_view, SLOT(purple()));
  m_colorMenu->addAction("Black", (MyView*)m_view, SLOT(black())); 

  // Adds shape options to the tool bar under the drop down menus
  m_toolbar->addAction("Circle", (MyView*)m_view, SLOT(circle()));
  m_toolbar->addAction("Rectangle", (MyView*)m_view, SLOT(rectangle()));
  m_toolbar->addAction("Triangle", (MyView*)m_view, SLOT(triangle()));


  // Write the toolbars and sets size of the screen
  addToolBar(m_toolbar);
  this->show();
  this->resize(800,800);
}

// Destructor for Window
Window::~Window()
{
  delete m_layout;
  delete m_toolbar;
  delete m_scene;
  delete m_view;
  delete m_menubar;
  delete m_menu;
}

