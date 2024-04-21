#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpagelayout.h>
#include <qpageranges.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qthread.h>
#include <qurl.h>
#include <qwebenginecontextmenurequest.h>
#include <qwebenginehistory.h>
#include <qwebenginehttprequest.h>
#include <qwebenginepage.h>
#include <qwebengineprofile.h>
#include <qwebenginesettings.h>
#include <qwebengineurlrequestjob.h>
#include <qwebengineurlscheme.h>
#include <qwebengineurlschemehandler.h>
#include <qwebengineview.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtWrapper_QWebEngineUrlScheme : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Flag SpecialPort Syntax )
Q_FLAGS(Flags )
enum Flag{
  SecureScheme = QWebEngineUrlScheme::SecureScheme,   LocalScheme = QWebEngineUrlScheme::LocalScheme,   LocalAccessAllowed = QWebEngineUrlScheme::LocalAccessAllowed,   NoAccessAllowed = QWebEngineUrlScheme::NoAccessAllowed,   ServiceWorkersAllowed = QWebEngineUrlScheme::ServiceWorkersAllowed,   ViewSourceAllowed = QWebEngineUrlScheme::ViewSourceAllowed,   ContentSecurityPolicyIgnored = QWebEngineUrlScheme::ContentSecurityPolicyIgnored,   CorsEnabled = QWebEngineUrlScheme::CorsEnabled,   FetchApiAllowed = QWebEngineUrlScheme::FetchApiAllowed};
enum SpecialPort{
  PortUnspecified = QWebEngineUrlScheme::PortUnspecified};
enum class Syntax{
  HostPortAndUserInformation = static_cast<int>(QWebEngineUrlScheme::Syntax::HostPortAndUserInformation),   HostAndPort = static_cast<int>(QWebEngineUrlScheme::Syntax::HostAndPort),   Host = static_cast<int>(QWebEngineUrlScheme::Syntax::Host),   Path = static_cast<int>(QWebEngineUrlScheme::Syntax::Path)};
Q_DECLARE_FLAGS(Flags, Flag)
public slots:
QWebEngineUrlScheme* new_QWebEngineUrlScheme();
QWebEngineUrlScheme* new_QWebEngineUrlScheme(const QByteArray&  name);
QWebEngineUrlScheme* new_QWebEngineUrlScheme(const QWebEngineUrlScheme&  that);
void delete_QWebEngineUrlScheme(QWebEngineUrlScheme* obj) { delete obj; }
   int  defaultPort(QWebEngineUrlScheme* theWrappedObject) const;
   QWebEngineUrlScheme::Flags  flags(QWebEngineUrlScheme* theWrappedObject) const;
   QByteArray  name(QWebEngineUrlScheme* theWrappedObject) const;
   bool  __ne__(QWebEngineUrlScheme* theWrappedObject, const QWebEngineUrlScheme&  that) const;
   QWebEngineUrlScheme*  operator_assign(QWebEngineUrlScheme* theWrappedObject, const QWebEngineUrlScheme&  that);
   bool  __eq__(QWebEngineUrlScheme* theWrappedObject, const QWebEngineUrlScheme&  that) const;
   void static_QWebEngineUrlScheme_registerScheme(const QWebEngineUrlScheme&  scheme);
   QWebEngineUrlScheme  static_QWebEngineUrlScheme_schemeByName(const QByteArray&  name);
   void setDefaultPort(QWebEngineUrlScheme* theWrappedObject, int  newValue);
   void setFlags(QWebEngineUrlScheme* theWrappedObject, QWebEngineUrlScheme::Flags  newValue);
   void setName(QWebEngineUrlScheme* theWrappedObject, const QByteArray&  newValue);
   void setSyntax(QWebEngineUrlScheme* theWrappedObject, QWebEngineUrlScheme::Syntax  newValue);
   QWebEngineUrlScheme::Syntax  syntax(QWebEngineUrlScheme* theWrappedObject) const;
};





class PythonQtShell_QWebEngineUrlSchemeHandler : public QWebEngineUrlSchemeHandler
{
public:
    PythonQtShell_QWebEngineUrlSchemeHandler(QObject*  parent = nullptr):QWebEngineUrlSchemeHandler(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineUrlSchemeHandler() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void requestStarted(QWebEngineUrlRequestJob*  arg__1) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEngineUrlSchemeHandler : public QWebEngineUrlSchemeHandler
{ public:
inline void py_q_requestStarted(QWebEngineUrlRequestJob*  arg__1) { this->requestStarted(arg__1); }
};

class PythonQtWrapper_QWebEngineUrlSchemeHandler : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineUrlSchemeHandler* new_QWebEngineUrlSchemeHandler(QObject*  parent = nullptr);
void delete_QWebEngineUrlSchemeHandler(QWebEngineUrlSchemeHandler* obj) { delete obj; }
   void requestStarted(QWebEngineUrlSchemeHandler* theWrappedObject, QWebEngineUrlRequestJob*  arg__1);
   void py_q_requestStarted(QWebEngineUrlSchemeHandler* theWrappedObject, QWebEngineUrlRequestJob*  arg__1){  (((PythonQtPublicPromoter_QWebEngineUrlSchemeHandler*)theWrappedObject)->py_q_requestStarted(arg__1));}
};





class PythonQtShell_QWebEngineView : public QWebEngineView
{
public:
    PythonQtShell_QWebEngineView(QWebEnginePage*  page, QWidget*  parent = nullptr):QWebEngineView(page, parent),_wrapper(nullptr) {};
    PythonQtShell_QWebEngineView(QWebEngineProfile*  profile, QWidget*  parent = nullptr):QWebEngineView(profile, parent),_wrapper(nullptr) {};
    PythonQtShell_QWebEngineView(QWidget*  parent = nullptr):QWebEngineView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
QWebEngineView*  createWindow(QWebEnginePage::WebWindowType  type) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  e) override;
void dragLeaveEvent(QDragLeaveEvent*  e) override;
void dragMoveEvent(QDragMoveEvent*  e) override;
void dropEvent(QDropEvent*  e) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  arg__1) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEngineView : public QWebEngineView
{ public:
inline void promoted_closeEvent(QCloseEvent*  arg__1) { this->closeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { this->contextMenuEvent(arg__1); }
inline QWebEngineView*  promoted_createWindow(QWebEnginePage::WebWindowType  type) { return this->createWindow(type); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { this->dragEnterEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { this->dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { this->dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { this->dropEvent(e); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void py_q_closeEvent(QCloseEvent*  arg__1) { QWebEngineView::closeEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  arg__1) { QWebEngineView::contextMenuEvent(arg__1); }
inline QWebEngineView*  py_q_createWindow(QWebEnginePage::WebWindowType  type) { return QWebEngineView::createWindow(type); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  e) { QWebEngineView::dragEnterEvent(e); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  e) { QWebEngineView::dragLeaveEvent(e); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  e) { QWebEngineView::dragMoveEvent(e); }
inline void py_q_dropEvent(QDropEvent*  e) { QWebEngineView::dropEvent(e); }
inline bool  py_q_event(QEvent*  arg__1) { return QWebEngineView::event(arg__1); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QWebEngineView::hideEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QWebEngineView::showEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QWebEngineView::sizeHint(); }
};

class PythonQtWrapper_QWebEngineView : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineView* new_QWebEngineView(QWebEnginePage*  page, QWidget*  parent = nullptr);
QWebEngineView* new_QWebEngineView(QWebEngineProfile*  profile, QWidget*  parent = nullptr);
QWebEngineView* new_QWebEngineView(QWidget*  parent = nullptr);
void delete_QWebEngineView(QWebEngineView* obj) { delete obj; }
   void py_q_closeEvent(QWebEngineView* theWrappedObject, QCloseEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_closeEvent(arg__1));}
   void py_q_contextMenuEvent(QWebEngineView* theWrappedObject, QContextMenuEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_contextMenuEvent(arg__1));}
   QMenu*  createStandardContextMenu(QWebEngineView* theWrappedObject);
   QWebEngineView*  createWindow(QWebEngineView* theWrappedObject, QWebEnginePage::WebWindowType  type);
   QWebEngineView*  py_q_createWindow(QWebEngineView* theWrappedObject, QWebEnginePage::WebWindowType  type){  return (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_createWindow(type));}
   void py_q_dragEnterEvent(QWebEngineView* theWrappedObject, QDragEnterEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dragEnterEvent(e));}
   void py_q_dragLeaveEvent(QWebEngineView* theWrappedObject, QDragLeaveEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dragLeaveEvent(e));}
   void py_q_dragMoveEvent(QWebEngineView* theWrappedObject, QDragMoveEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dragMoveEvent(e));}
   void py_q_dropEvent(QWebEngineView* theWrappedObject, QDropEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dropEvent(e));}
   bool  py_q_event(QWebEngineView* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_event(arg__1));}
   QWebEngineView*  static_QWebEngineView_forPage(const QWebEnginePage*  page);
   bool  hasSelection(QWebEngineView* theWrappedObject) const;
   void py_q_hideEvent(QWebEngineView* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_hideEvent(arg__1));}
   QWebEngineHistory*  history(QWebEngineView* theWrappedObject) const;
   QIcon  icon(QWebEngineView* theWrappedObject) const;
   QUrl  iconUrl(QWebEngineView* theWrappedObject) const;
   QWebEngineContextMenuRequest*  lastContextMenuRequest(QWebEngineView* theWrappedObject) const;
   void load(QWebEngineView* theWrappedObject, const QUrl&  url);
   void load(QWebEngineView* theWrappedObject, const QWebEngineHttpRequest&  request);
   QWebEnginePage*  page(QWebEngineView* theWrappedObject) const;
   QAction*  pageAction(QWebEngineView* theWrappedObject, QWebEnginePage::WebAction  action) const;
   void print(QWebEngineView* theWrappedObject, QPrinter*  printer);
   void printToPdf(QWebEngineView* theWrappedObject, const QString&  filePath, const QPageLayout&  layout = QPageLayout(QPageSize(QPageSize::A4),QPageLayout::Portrait, QMarginsF()), const QPageRanges&  ranges = {});
   QString  selectedText(QWebEngineView* theWrappedObject) const;
   void setContent(QWebEngineView* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setHtml(QWebEngineView* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void setPage(QWebEngineView* theWrappedObject, QWebEnginePage*  page);
   void setUrl(QWebEngineView* theWrappedObject, const QUrl&  url);
   void setZoomFactor(QWebEngineView* theWrappedObject, qreal  factor);
   QWebEngineSettings*  settings(QWebEngineView* theWrappedObject) const;
   void py_q_showEvent(QWebEngineView* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  sizeHint(QWebEngineView* theWrappedObject) const;
   QSize  py_q_sizeHint(QWebEngineView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_sizeHint());}
   QString  title(QWebEngineView* theWrappedObject) const;
   void triggerPageAction(QWebEngineView* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked = false);
   QUrl  url(QWebEngineView* theWrappedObject) const;
   qreal  zoomFactor(QWebEngineView* theWrappedObject) const;
};


