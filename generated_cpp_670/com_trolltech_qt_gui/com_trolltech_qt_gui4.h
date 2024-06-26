#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qeventpoint.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qiconengine.h>
#include <qimage.h>
#include <qimageiohandler.h>
#include <qimagereader.h>
#include <qimagewriter.h>
#include <qinputdevice.h>
#include <qinputdialog.h>
#include <qinputmethod.h>
#include <qiodevice.h>
#include <qitemdelegate.h>
#include <qitemeditorfactory.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qkeysequenceedit.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlcdnumber.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qmovie.h>
#include <qnamespace.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpointingdevice.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qthread.h>
#include <qtransform.h>
#include <qvalidator.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QHelpEvent : public QHelpEvent
{
public:
    PythonQtShell_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos):QHelpEvent(type, pos, globalPos),_wrapper(nullptr) {};
    PythonQtShell_QHelpEvent(const QHelpEvent&  arg__1):QHelpEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QHelpEvent() override;

QHelpEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHelpEvent : public QHelpEvent
{ public:
inline QHelpEvent&  promoted_operator_assign(const QHelpEvent&  other) { return this->QHelpEvent::operator=(other); }
inline QHelpEvent*  py_q_clone() const { return QHelpEvent::clone(); }
};

class PythonQtWrapper_QHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHelpEvent* new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos);
QHelpEvent* new_QHelpEvent(const QHelpEvent&  arg__1);
void delete_QHelpEvent(QHelpEvent* obj) { delete obj; }
   QHelpEvent*  py_q_clone(QHelpEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHelpEvent*)theWrappedObject)->py_q_clone());}
   const QPoint*  globalPos(QHelpEvent* theWrappedObject) const;
   int  globalX(QHelpEvent* theWrappedObject) const;
   int  globalY(QHelpEvent* theWrappedObject) const;
   QHelpEvent*  operator_assign(QHelpEvent* theWrappedObject, const QHelpEvent&  other);
   const QPoint*  pos(QHelpEvent* theWrappedObject) const;
   int  x(QHelpEvent* theWrappedObject) const;
   int  y(QHelpEvent* theWrappedObject) const;
};





class PythonQtShell_QHideEvent : public QHideEvent
{
public:
    PythonQtShell_QHideEvent():QHideEvent(),_wrapper(nullptr) {};
    PythonQtShell_QHideEvent(const QHideEvent&  arg__1):QHideEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QHideEvent() override;

QHideEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHideEvent : public QHideEvent
{ public:
inline QHideEvent&  promoted_operator_assign(const QHideEvent&  other) { return this->QHideEvent::operator=(other); }
inline QHideEvent*  py_q_clone() const { return QHideEvent::clone(); }
};

class PythonQtWrapper_QHideEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHideEvent* new_QHideEvent();
QHideEvent* new_QHideEvent(const QHideEvent&  arg__1);
void delete_QHideEvent(QHideEvent* obj) { delete obj; }
   QHideEvent*  py_q_clone(QHideEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHideEvent*)theWrappedObject)->py_q_clone());}
   QHideEvent*  operator_assign(QHideEvent* theWrappedObject, const QHideEvent&  other);
};





class PythonQtShell_QHoverEvent : public QHoverEvent
{
public:
    PythonQtShell_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice()):QHoverEvent(type, pos, oldPos, modifiers, device),_wrapper(nullptr) {};
    PythonQtShell_QHoverEvent(QEvent::Type  type, const QPointF&  scenePos, const QPointF&  globalPos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice()):QHoverEvent(type, scenePos, globalPos, oldPos, modifiers, device),_wrapper(nullptr) {};
    PythonQtShell_QHoverEvent(const QHoverEvent&  arg__1):QHoverEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QHoverEvent() override;

QHoverEvent*  clone() const override;
bool  isBeginEvent() const override;
bool  isEndEvent() const override;
bool  isUpdateEvent() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHoverEvent : public QHoverEvent
{ public:
inline QHoverEvent&  promoted_operator_assign(const QHoverEvent&  other) { return this->QHoverEvent::operator=(other); }
inline QHoverEvent*  py_q_clone() const { return QHoverEvent::clone(); }
inline bool  py_q_isUpdateEvent() const { return QHoverEvent::isUpdateEvent(); }
};

class PythonQtWrapper_QHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHoverEvent* new_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice());
QHoverEvent* new_QHoverEvent(QEvent::Type  type, const QPointF&  scenePos, const QPointF&  globalPos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, const QPointingDevice*  device = QPointingDevice::primaryPointingDevice());
QHoverEvent* new_QHoverEvent(const QHoverEvent&  arg__1);
void delete_QHoverEvent(QHoverEvent* obj) { delete obj; }
   QHoverEvent*  py_q_clone(QHoverEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHoverEvent*)theWrappedObject)->py_q_clone());}
   bool  py_q_isUpdateEvent(QHoverEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHoverEvent*)theWrappedObject)->py_q_isUpdateEvent());}
   QPoint  oldPos(QHoverEvent* theWrappedObject) const;
   QPointF  oldPosF(QHoverEvent* theWrappedObject) const;
   QHoverEvent*  operator_assign(QHoverEvent* theWrappedObject, const QHoverEvent&  other);
   QPoint  pos(QHoverEvent* theWrappedObject) const;
   QPointF  posF(QHoverEvent* theWrappedObject) const;
};





class PythonQtShell_QIconDragEvent : public QIconDragEvent
{
public:
    PythonQtShell_QIconDragEvent():QIconDragEvent(),_wrapper(nullptr) {};
    PythonQtShell_QIconDragEvent(const QIconDragEvent&  arg__1):QIconDragEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QIconDragEvent() override;

QIconDragEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIconDragEvent : public QIconDragEvent
{ public:
inline QIconDragEvent&  promoted_operator_assign(const QIconDragEvent&  other) { return this->QIconDragEvent::operator=(other); }
inline QIconDragEvent*  py_q_clone() const { return QIconDragEvent::clone(); }
};

class PythonQtWrapper_QIconDragEvent : public QObject
{ Q_OBJECT
public:
public slots:
QIconDragEvent* new_QIconDragEvent();
QIconDragEvent* new_QIconDragEvent(const QIconDragEvent&  arg__1);
void delete_QIconDragEvent(QIconDragEvent* obj) { delete obj; }
   QIconDragEvent*  py_q_clone(QIconDragEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconDragEvent*)theWrappedObject)->py_q_clone());}
   QIconDragEvent*  operator_assign(QIconDragEvent* theWrappedObject, const QIconDragEvent&  other);
};





class PythonQtShell_QIconEngine : public QIconEngine
{
public:
    PythonQtShell_QIconEngine():QIconEngine(),_wrapper(nullptr) {};
    PythonQtShell_QIconEngine(const QIconEngine&  other):QIconEngine(other),_wrapper(nullptr) {};

   ~PythonQtShell_QIconEngine() override;

QSize  actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) override;
void addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) override;
void addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state) override;
QList<QSize >  availableSizes(QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) override;
QIconEngine*  clone() const override;
QString  iconName() override;
bool  isNull() override;
QString  key() const override;
void paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state) override;
QPixmap  pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) override;
bool  read(QDataStream&  in) override;
QPixmap  scaledPixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale) override;
bool  write(QDataStream&  out) const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIconEngine : public QIconEngine
{ public:
inline QSize  py_q_actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::actualSize(size, mode, state); }
inline void py_q_addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addFile(fileName, size, mode, state); }
inline void py_q_addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addPixmap(pixmap, mode, state); }
inline QList<QSize >  py_q_availableSizes(QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) { return QIconEngine::availableSizes(mode, state); }
inline QIconEngine*  py_q_clone() const { return this->clone(); }
inline QString  py_q_iconName() { return QIconEngine::iconName(); }
inline bool  py_q_isNull() { return QIconEngine::isNull(); }
inline QString  py_q_key() const { return QIconEngine::key(); }
inline void py_q_paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state) { this->paint(painter, rect, mode, state); }
inline QPixmap  py_q_pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::pixmap(size, mode, state); }
inline bool  py_q_read(QDataStream&  in) { return QIconEngine::read(in); }
inline QPixmap  py_q_scaledPixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale) { return QIconEngine::scaledPixmap(size, mode, state, scale); }
inline bool  py_q_write(QDataStream&  out) const { return QIconEngine::write(out); }
};

class PythonQtWrapper_QIconEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IconEngineHook )
enum IconEngineHook{
  IsNullHook = QIconEngine::IsNullHook,   ScaledPixmapHook = QIconEngine::ScaledPixmapHook};
public slots:
QIconEngine* new_QIconEngine();
QIconEngine* new_QIconEngine(const QIconEngine&  other);
void delete_QIconEngine(QIconEngine* obj) { delete obj; }
   QSize  actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QSize  py_q_actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_actualSize(size, mode, state));}
   void addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   void py_q_addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_addFile(fileName, size, mode, state));}
   void addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
   void py_q_addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_addPixmap(pixmap, mode, state));}
   QList<QSize >  availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
   QList<QSize >  py_q_availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_availableSizes(mode, state));}
   QIconEngine*  clone(QIconEngine* theWrappedObject) const;
   QIconEngine*  py_q_clone(QIconEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_clone());}
   QString  iconName(QIconEngine* theWrappedObject);
   QString  py_q_iconName(QIconEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_iconName());}
   bool  isNull(QIconEngine* theWrappedObject);
   bool  py_q_isNull(QIconEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_isNull());}
   QString  key(QIconEngine* theWrappedObject) const;
   QString  py_q_key(QIconEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_key());}
   void paint(QIconEngine* theWrappedObject, QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state);
   void py_q_paint(QIconEngine* theWrappedObject, QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_paint(painter, rect, mode, state));}
   QPixmap  pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QPixmap  py_q_pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_pixmap(size, mode, state));}
   bool  read(QIconEngine* theWrappedObject, QDataStream&  in);
   bool  py_q_read(QIconEngine* theWrappedObject, QDataStream&  in){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_read(in));}
   QPixmap  scaledPixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale);
   QPixmap  py_q_scaledPixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_scaledPixmap(size, mode, state, scale));}
   bool  write(QIconEngine* theWrappedObject, QDataStream&  out) const;
   bool  py_q_write(QIconEngine* theWrappedObject, QDataStream&  out) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_write(out));}
    bool __nonzero__(QIconEngine* obj) { return !obj->isNull(); }
};





class PythonQtShell_QImageIOHandler : public QImageIOHandler
{
public:
    PythonQtShell_QImageIOHandler():QImageIOHandler(),_wrapper(nullptr) {};

   ~PythonQtShell_QImageIOHandler() override;

bool  canRead() const override;
int  currentImageNumber() const override;
QRect  currentImageRect() const override;
int  imageCount() const override;
bool  jumpToImage(int  imageNumber) override;
bool  jumpToNextImage() override;
int  loopCount() const override;
int  nextImageDelay() const override;
QVariant  option(QImageIOHandler::ImageOption  option) const override;
bool  read(QImage*  image) override;
void setOption(QImageIOHandler::ImageOption  option, const QVariant&  value) override;
bool  supportsOption(QImageIOHandler::ImageOption  option) const override;
bool  write(const QImage&  image) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QImageIOHandler : public QImageIOHandler
{ public:
inline bool  py_q_canRead() const { return this->canRead(); }
inline int  py_q_currentImageNumber() const { return QImageIOHandler::currentImageNumber(); }
inline QRect  py_q_currentImageRect() const { return QImageIOHandler::currentImageRect(); }
inline int  py_q_imageCount() const { return QImageIOHandler::imageCount(); }
inline bool  py_q_jumpToImage(int  imageNumber) { return QImageIOHandler::jumpToImage(imageNumber); }
inline bool  py_q_jumpToNextImage() { return QImageIOHandler::jumpToNextImage(); }
inline int  py_q_loopCount() const { return QImageIOHandler::loopCount(); }
inline int  py_q_nextImageDelay() const { return QImageIOHandler::nextImageDelay(); }
inline QVariant  py_q_option(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::option(option); }
inline bool  py_q_read(QImage*  image) { return this->read(image); }
inline void py_q_setOption(QImageIOHandler::ImageOption  option, const QVariant&  value) { QImageIOHandler::setOption(option, value); }
inline bool  py_q_supportsOption(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::supportsOption(option); }
inline bool  py_q_write(const QImage&  image) { return QImageIOHandler::write(image); }
};

class PythonQtWrapper_QImageIOHandler : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageOption Transformation )
enum ImageOption{
  Size = QImageIOHandler::Size,   ClipRect = QImageIOHandler::ClipRect,   Description = QImageIOHandler::Description,   ScaledClipRect = QImageIOHandler::ScaledClipRect,   ScaledSize = QImageIOHandler::ScaledSize,   CompressionRatio = QImageIOHandler::CompressionRatio,   Gamma = QImageIOHandler::Gamma,   Quality = QImageIOHandler::Quality,   Name = QImageIOHandler::Name,   SubType = QImageIOHandler::SubType,   IncrementalReading = QImageIOHandler::IncrementalReading,   Endianness = QImageIOHandler::Endianness,   Animation = QImageIOHandler::Animation,   BackgroundColor = QImageIOHandler::BackgroundColor,   ImageFormat = QImageIOHandler::ImageFormat,   SupportedSubTypes = QImageIOHandler::SupportedSubTypes,   OptimizedWrite = QImageIOHandler::OptimizedWrite,   ProgressiveScanWrite = QImageIOHandler::ProgressiveScanWrite,   ImageTransformation = QImageIOHandler::ImageTransformation};
enum Transformation{
  TransformationNone = QImageIOHandler::TransformationNone,   TransformationMirror = QImageIOHandler::TransformationMirror,   TransformationFlip = QImageIOHandler::TransformationFlip,   TransformationRotate180 = QImageIOHandler::TransformationRotate180,   TransformationRotate90 = QImageIOHandler::TransformationRotate90,   TransformationMirrorAndRotate90 = QImageIOHandler::TransformationMirrorAndRotate90,   TransformationFlipAndRotate90 = QImageIOHandler::TransformationFlipAndRotate90,   TransformationRotate270 = QImageIOHandler::TransformationRotate270};
public slots:
QImageIOHandler* new_QImageIOHandler();
void delete_QImageIOHandler(QImageIOHandler* obj) { delete obj; }
   bool  static_QImageIOHandler_allocateImage(QSize  size, QImage::Format  format, QImage*  image);
   bool  canRead(QImageIOHandler* theWrappedObject) const;
   bool  py_q_canRead(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_canRead());}
   int  currentImageNumber(QImageIOHandler* theWrappedObject) const;
   int  py_q_currentImageNumber(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_currentImageNumber());}
   QRect  currentImageRect(QImageIOHandler* theWrappedObject) const;
   QRect  py_q_currentImageRect(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_currentImageRect());}
   QIODevice*  device(QImageIOHandler* theWrappedObject) const;
   QByteArray  format(QImageIOHandler* theWrappedObject) const;
   int  imageCount(QImageIOHandler* theWrappedObject) const;
   int  py_q_imageCount(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_imageCount());}
   bool  jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber);
   bool  py_q_jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_jumpToImage(imageNumber));}
   bool  jumpToNextImage(QImageIOHandler* theWrappedObject);
   bool  py_q_jumpToNextImage(QImageIOHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_jumpToNextImage());}
   int  loopCount(QImageIOHandler* theWrappedObject) const;
   int  py_q_loopCount(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_loopCount());}
   int  nextImageDelay(QImageIOHandler* theWrappedObject) const;
   int  py_q_nextImageDelay(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_nextImageDelay());}
   QVariant  option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QVariant  py_q_option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_option(option));}
   bool  read(QImageIOHandler* theWrappedObject, QImage*  image);
   bool  py_q_read(QImageIOHandler* theWrappedObject, QImage*  image){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_read(image));}
   void setDevice(QImageIOHandler* theWrappedObject, QIODevice*  device);
   void setFormat(QImageIOHandler* theWrappedObject, const QByteArray&  format);
   void setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value);
   void py_q_setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value){  (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_setOption(option, value));}
   bool  supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   bool  py_q_supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_supportsOption(option));}
   bool  write(QImageIOHandler* theWrappedObject, const QImage&  image);
   bool  py_q_write(QImageIOHandler* theWrappedObject, const QImage&  image){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_write(image));}
};





class PythonQtShell_QImageIOPlugin : public QImageIOPlugin
{
public:
    PythonQtShell_QImageIOPlugin(QObject*  parent = nullptr):QImageIOPlugin(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QImageIOPlugin() override;

QImageIOPlugin::Capabilities  capabilities(QIODevice*  device, const QByteArray&  format) const override;
void childEvent(QChildEvent*  event) override;
QImageIOHandler*  create(QIODevice*  device, const QByteArray&  format = QByteArray()) const override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QImageIOPlugin : public QImageIOPlugin
{ public:
inline QImageIOPlugin::Capabilities  py_q_capabilities(QIODevice*  device, const QByteArray&  format) const { return this->capabilities(device, format); }
inline QImageIOHandler*  py_q_create(QIODevice*  device, const QByteArray&  format = QByteArray()) const { return this->create(device, format); }
};

class PythonQtWrapper_QImageIOPlugin : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability )
Q_FLAGS(Capabilities )
enum Capability{
  CanRead = QImageIOPlugin::CanRead,   CanWrite = QImageIOPlugin::CanWrite,   CanReadIncremental = QImageIOPlugin::CanReadIncremental};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QImageIOPlugin* new_QImageIOPlugin(QObject*  parent = nullptr);
void delete_QImageIOPlugin(QImageIOPlugin* obj) { delete obj; }
   QImageIOPlugin::Capabilities  capabilities(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const;
   QImageIOPlugin::Capabilities  py_q_capabilities(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const{  return (((PythonQtPublicPromoter_QImageIOPlugin*)theWrappedObject)->py_q_capabilities(device, format));}
   QImageIOHandler*  create(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format = QByteArray()) const;
   QImageIOHandler*  py_q_create(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format = QByteArray()) const{  return (((PythonQtPublicPromoter_QImageIOPlugin*)theWrappedObject)->py_q_create(device, format));}
};





class PythonQtWrapper_QImageReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageReaderError )
enum ImageReaderError{
  UnknownError = QImageReader::UnknownError,   FileNotFoundError = QImageReader::FileNotFoundError,   DeviceError = QImageReader::DeviceError,   UnsupportedFormatError = QImageReader::UnsupportedFormatError,   InvalidDataError = QImageReader::InvalidDataError};
public slots:
QImageReader* new_QImageReader();
QImageReader* new_QImageReader(QIODevice*  device, const QByteArray&  format = QByteArray());
QImageReader* new_QImageReader(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageReader(QImageReader* obj) { delete obj; }
   int  static_QImageReader_allocationLimit();
   bool  autoDetectImageFormat(QImageReader* theWrappedObject) const;
   bool  autoTransform(QImageReader* theWrappedObject) const;
   QColor  backgroundColor(QImageReader* theWrappedObject) const;
   bool  canRead(QImageReader* theWrappedObject) const;
   QRect  clipRect(QImageReader* theWrappedObject) const;
   int  currentImageNumber(QImageReader* theWrappedObject) const;
   QRect  currentImageRect(QImageReader* theWrappedObject) const;
   bool  decideFormatFromContent(QImageReader* theWrappedObject) const;
   QIODevice*  device(QImageReader* theWrappedObject) const;
   QImageReader::ImageReaderError  error(QImageReader* theWrappedObject) const;
   QString  errorString(QImageReader* theWrappedObject) const;
   QString  fileName(QImageReader* theWrappedObject) const;
   QByteArray  format(QImageReader* theWrappedObject) const;
   int  imageCount(QImageReader* theWrappedObject) const;
   QImage::Format  imageFormat(QImageReader* theWrappedObject) const;
   QByteArray  static_QImageReader_imageFormat(QIODevice*  device);
   QByteArray  static_QImageReader_imageFormat(const QString&  fileName);
   QList<QByteArray >  static_QImageReader_imageFormatsForMimeType(const QByteArray&  mimeType);
   bool  jumpToImage(QImageReader* theWrappedObject, int  imageNumber);
   bool  jumpToNextImage(QImageReader* theWrappedObject);
   int  loopCount(QImageReader* theWrappedObject) const;
   int  nextImageDelay(QImageReader* theWrappedObject) const;
   int  quality(QImageReader* theWrappedObject) const;
   QImage  read(QImageReader* theWrappedObject);
   QRect  scaledClipRect(QImageReader* theWrappedObject) const;
   QSize  scaledSize(QImageReader* theWrappedObject) const;
   void static_QImageReader_setAllocationLimit(int  mbLimit);
   void setAutoDetectImageFormat(QImageReader* theWrappedObject, bool  enabled);
   void setAutoTransform(QImageReader* theWrappedObject, bool  enabled);
   void setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color);
   void setClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   void setDecideFormatFromContent(QImageReader* theWrappedObject, bool  ignored);
   void setDevice(QImageReader* theWrappedObject, QIODevice*  device);
   void setFileName(QImageReader* theWrappedObject, const QString&  fileName);
   void setFormat(QImageReader* theWrappedObject, const QByteArray&  format);
   void setQuality(QImageReader* theWrappedObject, int  quality);
   void setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   void setScaledSize(QImageReader* theWrappedObject, const QSize&  size);
   QSize  size(QImageReader* theWrappedObject) const;
   QByteArray  subType(QImageReader* theWrappedObject) const;
   QList<QByteArray >  static_QImageReader_supportedImageFormats();
   QList<QByteArray >  static_QImageReader_supportedMimeTypes();
   QList<QByteArray >  supportedSubTypes(QImageReader* theWrappedObject) const;
   bool  supportsAnimation(QImageReader* theWrappedObject) const;
   bool  supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QString  text(QImageReader* theWrappedObject, const QString&  key) const;
   QStringList  textKeys(QImageReader* theWrappedObject) const;
   QString  static_QImageReader_tr(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
};





class PythonQtWrapper_QImageWriter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageWriterError )
enum ImageWriterError{
  UnknownError = QImageWriter::UnknownError,   DeviceError = QImageWriter::DeviceError,   UnsupportedFormatError = QImageWriter::UnsupportedFormatError,   InvalidImageError = QImageWriter::InvalidImageError};
public slots:
QImageWriter* new_QImageWriter();
QImageWriter* new_QImageWriter(QIODevice*  device, const QByteArray&  format);
QImageWriter* new_QImageWriter(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageWriter(QImageWriter* obj) { delete obj; }
   bool  canWrite(QImageWriter* theWrappedObject) const;
   int  compression(QImageWriter* theWrappedObject) const;
   QIODevice*  device(QImageWriter* theWrappedObject) const;
   QImageWriter::ImageWriterError  error(QImageWriter* theWrappedObject) const;
   QString  errorString(QImageWriter* theWrappedObject) const;
   QString  fileName(QImageWriter* theWrappedObject) const;
   QByteArray  format(QImageWriter* theWrappedObject) const;
   QList<QByteArray >  static_QImageWriter_imageFormatsForMimeType(const QByteArray&  mimeType);
   bool  optimizedWrite(QImageWriter* theWrappedObject) const;
   bool  progressiveScanWrite(QImageWriter* theWrappedObject) const;
   int  quality(QImageWriter* theWrappedObject) const;
   void setCompression(QImageWriter* theWrappedObject, int  compression);
   void setDevice(QImageWriter* theWrappedObject, QIODevice*  device);
   void setFileName(QImageWriter* theWrappedObject, const QString&  fileName);
   void setFormat(QImageWriter* theWrappedObject, const QByteArray&  format);
   void setOptimizedWrite(QImageWriter* theWrappedObject, bool  optimize);
   void setProgressiveScanWrite(QImageWriter* theWrappedObject, bool  progressive);
   void setQuality(QImageWriter* theWrappedObject, int  quality);
   void setSubType(QImageWriter* theWrappedObject, const QByteArray&  type);
   void setText(QImageWriter* theWrappedObject, const QString&  key, const QString&  text);
   QByteArray  subType(QImageWriter* theWrappedObject) const;
   QList<QByteArray >  static_QImageWriter_supportedImageFormats();
   QList<QByteArray >  static_QImageWriter_supportedMimeTypes();
   QList<QByteArray >  supportedSubTypes(QImageWriter* theWrappedObject) const;
   bool  supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QString  static_QImageWriter_tr(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
   bool  write(QImageWriter* theWrappedObject, const QImage&  image);
};





class PythonQtShell_QInputDevice : public QInputDevice
{
public:
    PythonQtShell_QInputDevice(QObject*  parent = nullptr):QInputDevice(parent),_wrapper(nullptr) {};
    PythonQtShell_QInputDevice(const QString&  name, qint64  systemId, QInputDevice::DeviceType  type, const QString&  seatName = QString(), QObject*  parent = nullptr):QInputDevice(name, systemId, type, seatName, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QInputDevice() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QInputDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability DeviceType )
Q_FLAGS(Capabilities DeviceTypes )
enum class Capability{
  None = static_cast<int>(QInputDevice::Capability::None),   Position = static_cast<int>(QInputDevice::Capability::Position),   Area = static_cast<int>(QInputDevice::Capability::Area),   Pressure = static_cast<int>(QInputDevice::Capability::Pressure),   Velocity = static_cast<int>(QInputDevice::Capability::Velocity),   NormalizedPosition = static_cast<int>(QInputDevice::Capability::NormalizedPosition),   MouseEmulation = static_cast<int>(QInputDevice::Capability::MouseEmulation),   PixelScroll = static_cast<int>(QInputDevice::Capability::PixelScroll),   Scroll = static_cast<int>(QInputDevice::Capability::Scroll),   Hover = static_cast<int>(QInputDevice::Capability::Hover),   Rotation = static_cast<int>(QInputDevice::Capability::Rotation),   XTilt = static_cast<int>(QInputDevice::Capability::XTilt),   YTilt = static_cast<int>(QInputDevice::Capability::YTilt),   TangentialPressure = static_cast<int>(QInputDevice::Capability::TangentialPressure),   ZPosition = static_cast<int>(QInputDevice::Capability::ZPosition),   All = static_cast<int>(QInputDevice::Capability::All)};
enum class DeviceType{
  Unknown = static_cast<int>(QInputDevice::DeviceType::Unknown),   Mouse = static_cast<int>(QInputDevice::DeviceType::Mouse),   TouchScreen = static_cast<int>(QInputDevice::DeviceType::TouchScreen),   TouchPad = static_cast<int>(QInputDevice::DeviceType::TouchPad),   Puck = static_cast<int>(QInputDevice::DeviceType::Puck),   Stylus = static_cast<int>(QInputDevice::DeviceType::Stylus),   Airbrush = static_cast<int>(QInputDevice::DeviceType::Airbrush),   Keyboard = static_cast<int>(QInputDevice::DeviceType::Keyboard),   AllDevices = static_cast<int>(QInputDevice::DeviceType::AllDevices)};
Q_DECLARE_FLAGS(Capabilities, Capability)
Q_DECLARE_FLAGS(DeviceTypes, DeviceType)
public slots:
QInputDevice* new_QInputDevice(QObject*  parent = nullptr);
QInputDevice* new_QInputDevice(const QString&  name, qint64  systemId, QInputDevice::DeviceType  type, const QString&  seatName = QString(), QObject*  parent = nullptr);
void delete_QInputDevice(QInputDevice* obj) { delete obj; }
   QRect  availableVirtualGeometry(QInputDevice* theWrappedObject) const;
   QInputDevice::Capabilities  capabilities(QInputDevice* theWrappedObject) const;
   QList<const QInputDevice* >  static_QInputDevice_devices();
   bool  hasCapability(QInputDevice* theWrappedObject, QInputDevice::Capability  cap) const;
   QString  name(QInputDevice* theWrappedObject) const;
   bool  __eq__(QInputDevice* theWrappedObject, const QInputDevice&  other) const;
   const QInputDevice*  static_QInputDevice_primaryKeyboard(const QString&  seatName = QString());
   QString  seatName(QInputDevice* theWrappedObject) const;
   QStringList  static_QInputDevice_seatNames();
   qint64  systemId(QInputDevice* theWrappedObject) const;
   QInputDevice::DeviceType  type(QInputDevice* theWrappedObject) const;
    QString py_toString(QInputDevice*);
};





class PythonQtShell_QInputDialog : public QInputDialog
{
public:
    PythonQtShell_QInputDialog(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QInputDialog(parent, flags),_wrapper(nullptr) {};

   ~PythonQtShell_QInputDialog() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void done(int  result) override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
int  exec() override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
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
void reject() override;
void resizeEvent(QResizeEvent*  arg__1) override;
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

class PythonQtPublicPromoter_QInputDialog : public QInputDialog
{ public:
inline void py_q_done(int  result) { QInputDialog::done(result); }
inline QSize  py_q_minimumSizeHint() const { return QInputDialog::minimumSizeHint(); }
inline void py_q_setVisible(bool  visible) { QInputDialog::setVisible(visible); }
inline QSize  py_q_sizeHint() const { return QInputDialog::sizeHint(); }
};

class PythonQtWrapper_QInputDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InputDialogOption InputMode )
Q_FLAGS(InputDialogOptions )
enum InputDialogOption{
  NoButtons = QInputDialog::NoButtons,   UseListViewForComboBoxItems = QInputDialog::UseListViewForComboBoxItems,   UsePlainTextEditForTextInput = QInputDialog::UsePlainTextEditForTextInput};
enum InputMode{
  TextInput = QInputDialog::TextInput,   IntInput = QInputDialog::IntInput,   DoubleInput = QInputDialog::DoubleInput};
Q_DECLARE_FLAGS(InputDialogOptions, InputDialogOption)
public slots:
QInputDialog* new_QInputDialog(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QInputDialog(QInputDialog* obj) { delete obj; }
   QString  cancelButtonText(QInputDialog* theWrappedObject) const;
   QStringList  comboBoxItems(QInputDialog* theWrappedObject) const;
   void py_q_done(QInputDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_done(result));}
   int  doubleDecimals(QInputDialog* theWrappedObject) const;
   double  doubleMaximum(QInputDialog* theWrappedObject) const;
   double  doubleMinimum(QInputDialog* theWrappedObject) const;
   double  doubleStep(QInputDialog* theWrappedObject) const;
   double  doubleValue(QInputDialog* theWrappedObject) const;
   double  static_QInputDialog_getDouble(QWidget*  parent, const QString&  title, const QString&  label, double  value = 0, double  minValue = -2147483647, double  maxValue = 2147483647, int  decimals = 1, bool*  ok = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags(), double  step = 1);
   int  static_QInputDialog_getInt(QWidget*  parent, const QString&  title, const QString&  label, int  value = 0, int  minValue = -2147483647, int  maxValue = 2147483647, int  step = 1, bool*  ok = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
   QString  static_QInputDialog_getItem(QWidget*  parent, const QString&  title, const QString&  label, const QStringList&  items, int  current = 0, bool  editable = true, bool*  ok = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags(), Qt::InputMethodHints  inputMethodHints = Qt::ImhNone);
   QString  static_QInputDialog_getMultiLineText(QWidget*  parent, const QString&  title, const QString&  label, const QString&  text = QString(), bool*  ok = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags(), Qt::InputMethodHints  inputMethodHints = Qt::ImhNone);
   QString  static_QInputDialog_getText(QWidget*  parent, const QString&  title, const QString&  label, QLineEdit::EchoMode  echo = QLineEdit::Normal, const QString&  text = QString(), bool*  ok = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags(), Qt::InputMethodHints  inputMethodHints = Qt::ImhNone);
   QInputDialog::InputMode  inputMode(QInputDialog* theWrappedObject) const;
   int  intMaximum(QInputDialog* theWrappedObject) const;
   int  intMinimum(QInputDialog* theWrappedObject) const;
   int  intStep(QInputDialog* theWrappedObject) const;
   int  intValue(QInputDialog* theWrappedObject) const;
   bool  isComboBoxEditable(QInputDialog* theWrappedObject) const;
   QString  labelText(QInputDialog* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QInputDialog* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_minimumSizeHint());}
   QString  okButtonText(QInputDialog* theWrappedObject) const;
   void open(QInputDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QInputDialog::InputDialogOptions  options(QInputDialog* theWrappedObject) const;
   void setCancelButtonText(QInputDialog* theWrappedObject, const QString&  text);
   void setComboBoxEditable(QInputDialog* theWrappedObject, bool  editable);
   void setComboBoxItems(QInputDialog* theWrappedObject, const QStringList&  items);
   void setDoubleDecimals(QInputDialog* theWrappedObject, int  decimals);
   void setDoubleMaximum(QInputDialog* theWrappedObject, double  max);
   void setDoubleMinimum(QInputDialog* theWrappedObject, double  min);
   void setDoubleRange(QInputDialog* theWrappedObject, double  min, double  max);
   void setDoubleStep(QInputDialog* theWrappedObject, double  step);
   void setDoubleValue(QInputDialog* theWrappedObject, double  value);
   void setInputMode(QInputDialog* theWrappedObject, QInputDialog::InputMode  mode);
   void setIntMaximum(QInputDialog* theWrappedObject, int  max);
   void setIntMinimum(QInputDialog* theWrappedObject, int  min);
   void setIntRange(QInputDialog* theWrappedObject, int  min, int  max);
   void setIntStep(QInputDialog* theWrappedObject, int  step);
   void setIntValue(QInputDialog* theWrappedObject, int  value);
   void setLabelText(QInputDialog* theWrappedObject, const QString&  text);
   void setOkButtonText(QInputDialog* theWrappedObject, const QString&  text);
   void setOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option, bool  on = true);
   void setOptions(QInputDialog* theWrappedObject, QInputDialog::InputDialogOptions  options);
   void setTextEchoMode(QInputDialog* theWrappedObject, QLineEdit::EchoMode  mode);
   void setTextValue(QInputDialog* theWrappedObject, const QString&  text);
   void py_q_setVisible(QInputDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_setVisible(visible));}
   QSize  py_q_sizeHint(QInputDialog* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_sizeHint());}
   bool  testOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option) const;
   QLineEdit::EchoMode  textEchoMode(QInputDialog* theWrappedObject) const;
   QString  textValue(QInputDialog* theWrappedObject) const;
};





class PythonQtShell_QInputEvent : public QInputEvent
{
public:
    PythonQtShell_QInputEvent(QEvent::Type  type, const QInputDevice*  m_dev, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QInputEvent(type, m_dev, modifiers),_wrapper(nullptr) {};
    PythonQtShell_QInputEvent(const QInputEvent&  arg__1):QInputEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QInputEvent() override;

QInputEvent*  clone() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QInputEvent : public QInputEvent
{ public:
inline QInputEvent&  promoted_operator_assign(const QInputEvent&  other) { return this->QInputEvent::operator=(other); }
inline QInputEvent*  py_q_clone() const { return QInputEvent::clone(); }
inline void py_q_setTimestamp(quint64  timestamp) { QInputEvent::setTimestamp(timestamp); }
};

class PythonQtWrapper_QInputEvent : public QObject
{ Q_OBJECT
public:
public slots:
QInputEvent* new_QInputEvent(QEvent::Type  type, const QInputDevice*  m_dev, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
QInputEvent* new_QInputEvent(const QInputEvent&  arg__1);
void delete_QInputEvent(QInputEvent* obj) { delete obj; }
   QInputEvent*  py_q_clone(QInputEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputEvent*)theWrappedObject)->py_q_clone());}
   const QInputDevice*  device(QInputEvent* theWrappedObject) const;
   QInputDevice::DeviceType  deviceType(QInputEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QInputEvent* theWrappedObject) const;
   QInputEvent*  operator_assign(QInputEvent* theWrappedObject, const QInputEvent&  other);
   void setModifiers(QInputEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setTimestamp(QInputEvent* theWrappedObject, quint64  timestamp);
   void py_q_setTimestamp(QInputEvent* theWrappedObject, quint64  timestamp){  (((PythonQtPublicPromoter_QInputEvent*)theWrappedObject)->py_q_setTimestamp(timestamp));}
   quint64  timestamp(QInputEvent* theWrappedObject) const;
};





class PythonQtWrapper_QInputMethod : public QObject
{ Q_OBJECT
public:
public slots:
   QRectF  anchorRectangle(QInputMethod* theWrappedObject) const;
   QRectF  cursorRectangle(QInputMethod* theWrappedObject) const;
   Qt::LayoutDirection  inputDirection(QInputMethod* theWrappedObject) const;
   QRectF  inputItemClipRectangle(QInputMethod* theWrappedObject) const;
   QRectF  inputItemRectangle(QInputMethod* theWrappedObject) const;
   QTransform  inputItemTransform(QInputMethod* theWrappedObject) const;
   bool  isAnimating(QInputMethod* theWrappedObject) const;
   bool  isVisible(QInputMethod* theWrappedObject) const;
   QRectF  keyboardRectangle(QInputMethod* theWrappedObject) const;
   QLocale  locale(QInputMethod* theWrappedObject) const;
   QVariant  static_QInputMethod_queryFocusObject(Qt::InputMethodQuery  query, const QVariant&  argument);
   void setInputItemRectangle(QInputMethod* theWrappedObject, const QRectF&  rect);
   void setInputItemTransform(QInputMethod* theWrappedObject, const QTransform&  transform);
   void setVisible(QInputMethod* theWrappedObject, bool  visible);
};





class PythonQtShell_QInputMethodEvent : public QInputMethodEvent
{
public:
    PythonQtShell_QInputMethodEvent():QInputMethodEvent(),_wrapper(nullptr) {};
    PythonQtShell_QInputMethodEvent(const QInputMethodEvent&  arg__1):QInputMethodEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QInputMethodEvent(const QString&  preeditText, const QList<QInputMethodEvent::Attribute >&  attributes):QInputMethodEvent(preeditText, attributes),_wrapper(nullptr) {};

   ~PythonQtShell_QInputMethodEvent() override;

QInputMethodEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QInputMethodEvent : public QInputMethodEvent
{ public:
inline QInputMethodEvent&  promoted_operator_assign(const QInputMethodEvent&  other) { return this->QInputMethodEvent::operator=(other); }
inline QInputMethodEvent*  py_q_clone() const { return QInputMethodEvent::clone(); }
};

class PythonQtWrapper_QInputMethodEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AttributeType )
enum AttributeType{
  TextFormat = QInputMethodEvent::TextFormat,   Cursor = QInputMethodEvent::Cursor,   Language = QInputMethodEvent::Language,   Ruby = QInputMethodEvent::Ruby,   Selection = QInputMethodEvent::Selection};
public slots:
QInputMethodEvent* new_QInputMethodEvent();
QInputMethodEvent* new_QInputMethodEvent(const QInputMethodEvent&  arg__1);
QInputMethodEvent* new_QInputMethodEvent(const QString&  preeditText, const QList<QInputMethodEvent::Attribute >&  attributes);
void delete_QInputMethodEvent(QInputMethodEvent* obj) { delete obj; }
   const QList<QInputMethodEvent::Attribute >*  attributes(QInputMethodEvent* theWrappedObject) const;
   QInputMethodEvent*  py_q_clone(QInputMethodEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputMethodEvent*)theWrappedObject)->py_q_clone());}
   const QString*  commitString(QInputMethodEvent* theWrappedObject) const;
   QInputMethodEvent*  operator_assign(QInputMethodEvent* theWrappedObject, const QInputMethodEvent&  other);
   const QString*  preeditString(QInputMethodEvent* theWrappedObject) const;
   int  replacementLength(QInputMethodEvent* theWrappedObject) const;
   int  replacementStart(QInputMethodEvent* theWrappedObject) const;
   void setCommitString(QInputMethodEvent* theWrappedObject, const QString&  commitString, int  replaceFrom = 0, int  replaceLength = 0);
};





class PythonQtShell_QInputMethodEvent__Attribute : public QInputMethodEvent::Attribute
{
public:
    PythonQtShell_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l):QInputMethodEvent::Attribute(typ, s, l),_wrapper(nullptr) {};
    PythonQtShell_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l, QVariant  val):QInputMethodEvent::Attribute(typ, s, l, val),_wrapper(nullptr) {};

   ~PythonQtShell_QInputMethodEvent__Attribute();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QInputMethodEvent__Attribute : public QObject
{ Q_OBJECT
public:
public slots:
QInputMethodEvent::Attribute* new_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l);
QInputMethodEvent::Attribute* new_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l, QVariant  val);
void delete_QInputMethodEvent__Attribute(QInputMethodEvent::Attribute* obj) { delete obj; }
   bool  __ne__(QInputMethodEvent::Attribute* theWrappedObject, const QInputMethodEvent::Attribute&  rhs);
   bool  __eq__(QInputMethodEvent::Attribute* theWrappedObject, const QInputMethodEvent::Attribute&  rhs);
void py_set_length(QInputMethodEvent::Attribute* theWrappedObject, int  length){ theWrappedObject->length = length; }
int  py_get_length(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->length; }
void py_set_start(QInputMethodEvent::Attribute* theWrappedObject, int  start){ theWrappedObject->start = start; }
int  py_get_start(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->start; }
void py_set_type(QInputMethodEvent::Attribute* theWrappedObject, QInputMethodEvent::AttributeType  type){ theWrappedObject->type = type; }
QInputMethodEvent::AttributeType  py_get_type(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->type; }
void py_set_value(QInputMethodEvent::Attribute* theWrappedObject, QVariant  value){ theWrappedObject->value = value; }
QVariant  py_get_value(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->value; }
};





class PythonQtShell_QInputMethodQueryEvent : public QInputMethodQueryEvent
{
public:
    PythonQtShell_QInputMethodQueryEvent(Qt::InputMethodQueries  queries):QInputMethodQueryEvent(queries),_wrapper(nullptr) {};
    PythonQtShell_QInputMethodQueryEvent(const QInputMethodQueryEvent&  arg__1):QInputMethodQueryEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QInputMethodQueryEvent() override;

QInputMethodQueryEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QInputMethodQueryEvent : public QInputMethodQueryEvent
{ public:
inline QInputMethodQueryEvent&  promoted_operator_assign(const QInputMethodQueryEvent&  other) { return this->QInputMethodQueryEvent::operator=(other); }
inline QInputMethodQueryEvent*  py_q_clone() const { return QInputMethodQueryEvent::clone(); }
};

class PythonQtWrapper_QInputMethodQueryEvent : public QObject
{ Q_OBJECT
public:
public slots:
QInputMethodQueryEvent* new_QInputMethodQueryEvent(Qt::InputMethodQueries  queries);
QInputMethodQueryEvent* new_QInputMethodQueryEvent(const QInputMethodQueryEvent&  arg__1);
void delete_QInputMethodQueryEvent(QInputMethodQueryEvent* obj) { delete obj; }
   QInputMethodQueryEvent*  py_q_clone(QInputMethodQueryEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputMethodQueryEvent*)theWrappedObject)->py_q_clone());}
   QInputMethodQueryEvent*  operator_assign(QInputMethodQueryEvent* theWrappedObject, const QInputMethodQueryEvent&  other);
   Qt::InputMethodQueries  queries(QInputMethodQueryEvent* theWrappedObject) const;
   void setValue(QInputMethodQueryEvent* theWrappedObject, Qt::InputMethodQuery  query, const QVariant&  value);
   QVariant  value(QInputMethodQueryEvent* theWrappedObject, Qt::InputMethodQuery  query) const;
};





class PythonQtShell_QIntValidator : public QIntValidator
{
public:
    PythonQtShell_QIntValidator(QObject*  parent = nullptr):QIntValidator(parent),_wrapper(nullptr) {};
    PythonQtShell_QIntValidator(int  bottom, int  top, QObject*  parent = nullptr):QIntValidator(bottom, top, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QIntValidator() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fixup(QString&  input) const override;
void timerEvent(QTimerEvent*  event) override;
QValidator::State  validate(QString&  arg__1, int&  arg__2) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIntValidator : public QIntValidator
{ public:
inline void py_q_fixup(QString&  input) const { QIntValidator::fixup(input); }
inline QValidator::State  py_q_validate(QString&  arg__1, int&  arg__2) const { return QIntValidator::validate(arg__1, arg__2); }
};

class PythonQtWrapper_QIntValidator : public QObject
{ Q_OBJECT
public:
public slots:
QIntValidator* new_QIntValidator(QObject*  parent = nullptr);
QIntValidator* new_QIntValidator(int  bottom, int  top, QObject*  parent = nullptr);
void delete_QIntValidator(QIntValidator* obj) { delete obj; }
   int  bottom(QIntValidator* theWrappedObject) const;
   void py_q_fixup(QIntValidator* theWrappedObject, QString&  input) const{  (((PythonQtPublicPromoter_QIntValidator*)theWrappedObject)->py_q_fixup(input));}
   void setBottom(QIntValidator* theWrappedObject, int  arg__1);
   void setRange(QIntValidator* theWrappedObject, int  bottom, int  top);
   void setTop(QIntValidator* theWrappedObject, int  arg__1);
   int  top(QIntValidator* theWrappedObject) const;
   QValidator::State  py_q_validate(QIntValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const{  return (((PythonQtPublicPromoter_QIntValidator*)theWrappedObject)->py_q_validate(arg__1, arg__2));}
};





class PythonQtShell_QItemDelegate : public QItemDelegate
{
public:
    PythonQtShell_QItemDelegate(QObject*  parent = nullptr):QItemDelegate(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QItemDelegate() override;

void childEvent(QChildEvent*  event) override;
QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
void customEvent(QEvent*  event) override;
void destroyEditor(QWidget*  editor, const QModelIndex&  index) const override;
void drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const override;
void drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const override;
void drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const override;
void drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const override;
bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
bool  helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index) override;
void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
QList<int >  paintingRoles() const override;
void setEditorData(QWidget*  editor, const QModelIndex&  index) const override;
void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const override;
QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QItemDelegate : public QItemDelegate
{ public:
inline QPixmap  promoted_decoration(const QStyleOptionViewItem&  option, const QVariant&  variant) const { return this->decoration(option, variant); }
inline QRect  promoted_doCheck(const QStyleOptionViewItem&  option, const QRect&  bounding, const QVariant&  variant) const { return this->doCheck(option, bounding, variant); }
inline void promoted_drawBackground(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { this->drawBackground(painter, option, index); }
inline void promoted_drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const { this->drawCheck(painter, option, rect, state); }
inline void promoted_drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const { this->drawDecoration(painter, option, rect, pixmap); }
inline void promoted_drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const { this->drawDisplay(painter, option, rect, text); }
inline void promoted_drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const { this->drawFocus(painter, option, rect); }
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return this->editorEvent(event, model, option, index); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline QRect  promoted_rect(const QStyleOptionViewItem&  option, const QModelIndex&  index, int  role) const { return this->rect(option, index, role); }
static inline QPixmap  promoted_selectedPixmap(const QPixmap&  pixmap, const QPalette&  palette, bool  enabled) { return selectedPixmap(pixmap, palette, enabled); }
inline QStyleOptionViewItem  promoted_setOptions(const QModelIndex&  index, const QStyleOptionViewItem&  option) const { return this->setOptions(index, option); }
inline QRect  promoted_textRectangle(QPainter*  painter, const QRect&  rect, const QFont&  font, const QString&  text) const { return this->textRectangle(painter, rect, font, text); }
inline QWidget*  py_q_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::createEditor(parent, option, index); }
inline void py_q_drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const { QItemDelegate::drawCheck(painter, option, rect, state); }
inline void py_q_drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const { QItemDelegate::drawDecoration(painter, option, rect, pixmap); }
inline void py_q_drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const { QItemDelegate::drawDisplay(painter, option, rect, text); }
inline void py_q_drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const { QItemDelegate::drawFocus(painter, option, rect); }
inline bool  py_q_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QItemDelegate::editorEvent(event, model, option, index); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QItemDelegate::eventFilter(object, event); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::paint(painter, option, index); }
inline void py_q_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QItemDelegate::setEditorData(editor, index); }
inline void py_q_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QItemDelegate::setModelData(editor, model, index); }
inline QSize  py_q_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::sizeHint(option, index); }
inline void py_q_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::updateEditorGeometry(editor, option, index); }
};

class PythonQtWrapper_QItemDelegate : public QObject
{ Q_OBJECT
public:
public slots:
QItemDelegate* new_QItemDelegate(QObject*  parent = nullptr);
void delete_QItemDelegate(QItemDelegate* obj) { delete obj; }
   QWidget*  py_q_createEditor(QItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_createEditor(parent, option, index));}
   QPixmap  decoration(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QVariant&  variant) const;
   QRect  doCheck(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QRect&  bounding, const QVariant&  variant) const;
   void drawBackground(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void drawCheck(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const;
   void py_q_drawCheck(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawCheck(painter, option, rect, state));}
   void drawDecoration(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const;
   void py_q_drawDecoration(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawDecoration(painter, option, rect, pixmap));}
   void drawDisplay(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const;
   void py_q_drawDisplay(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawDisplay(painter, option, rect, text));}
   void drawFocus(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const;
   void py_q_drawFocus(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawFocus(painter, option, rect));}
   bool  py_q_editorEvent(QItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index){  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_editorEvent(event, model, option, index));}
   bool  py_q_eventFilter(QItemDelegate* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_eventFilter(object, event));}
   bool  hasClipping(QItemDelegate* theWrappedObject) const;
   QItemEditorFactory*  itemEditorFactory(QItemDelegate* theWrappedObject) const;
   void py_q_paint(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_paint(painter, option, index));}
   QRect  rect(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index, int  role) const;
   QPixmap  static_QItemDelegate_selectedPixmap(const QPixmap&  pixmap, const QPalette&  palette, bool  enabled);
   void setClipping(QItemDelegate* theWrappedObject, bool  clip);
   void py_q_setEditorData(QItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_setEditorData(editor, index));}
   void setItemEditorFactory(QItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
   void py_q_setModelData(QItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_setModelData(editor, model, index));}
   QStyleOptionViewItem  setOptions(QItemDelegate* theWrappedObject, const QModelIndex&  index, const QStyleOptionViewItem&  option) const;
   QSize  py_q_sizeHint(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_sizeHint(option, index));}
   QRect  textRectangle(QItemDelegate* theWrappedObject, QPainter*  painter, const QRect&  rect, const QFont&  font, const QString&  text) const;
   void py_q_updateEditorGeometry(QItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_updateEditorGeometry(editor, option, index));}
};





class PythonQtShell_QItemEditorCreatorBase : public QItemEditorCreatorBase
{
public:
    PythonQtShell_QItemEditorCreatorBase():QItemEditorCreatorBase(),_wrapper(nullptr) {};

   ~PythonQtShell_QItemEditorCreatorBase() override;

QWidget*  createWidget(QWidget*  parent) const override;
QByteArray  valuePropertyName() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QItemEditorCreatorBase : public QItemEditorCreatorBase
{ public:
inline QWidget*  py_q_createWidget(QWidget*  parent) const { return this->createWidget(parent); }
inline QByteArray  py_q_valuePropertyName() const { return this->valuePropertyName(); }
};

class PythonQtWrapper_QItemEditorCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorCreatorBase* new_QItemEditorCreatorBase();
void delete_QItemEditorCreatorBase(QItemEditorCreatorBase* obj) { delete obj; }
   QWidget*  createWidget(QItemEditorCreatorBase* theWrappedObject, QWidget*  parent) const;
   QWidget*  py_q_createWidget(QItemEditorCreatorBase* theWrappedObject, QWidget*  parent) const{  return (((PythonQtPublicPromoter_QItemEditorCreatorBase*)theWrappedObject)->py_q_createWidget(parent));}
   QByteArray  valuePropertyName(QItemEditorCreatorBase* theWrappedObject) const;
   QByteArray  py_q_valuePropertyName(QItemEditorCreatorBase* theWrappedObject) const{  return (((PythonQtPublicPromoter_QItemEditorCreatorBase*)theWrappedObject)->py_q_valuePropertyName());}
};





class PythonQtShell_QItemEditorFactory : public QItemEditorFactory
{
public:
    PythonQtShell_QItemEditorFactory():QItemEditorFactory(),_wrapper(nullptr) {};

   ~PythonQtShell_QItemEditorFactory() override;

QWidget*  createEditor(int  userType, QWidget*  parent) const override;
QByteArray  valuePropertyName(int  userType) const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QItemEditorFactory : public QItemEditorFactory
{ public:
inline QWidget*  py_q_createEditor(int  userType, QWidget*  parent) const { return QItemEditorFactory::createEditor(userType, parent); }
inline QByteArray  py_q_valuePropertyName(int  userType) const { return QItemEditorFactory::valuePropertyName(userType); }
};

class PythonQtWrapper_QItemEditorFactory : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorFactory* new_QItemEditorFactory();
void delete_QItemEditorFactory(QItemEditorFactory* obj) { delete obj; }
   QWidget*  createEditor(QItemEditorFactory* theWrappedObject, int  userType, QWidget*  parent) const;
   QWidget*  py_q_createEditor(QItemEditorFactory* theWrappedObject, int  userType, QWidget*  parent) const{  return (((PythonQtPublicPromoter_QItemEditorFactory*)theWrappedObject)->py_q_createEditor(userType, parent));}
   const QItemEditorFactory*  static_QItemEditorFactory_defaultFactory();
   void registerEditor(QItemEditorFactory* theWrappedObject, int  userType, QItemEditorCreatorBase*  creator);
   void static_QItemEditorFactory_setDefaultFactory(QItemEditorFactory*  factory);
   QByteArray  valuePropertyName(QItemEditorFactory* theWrappedObject, int  userType) const;
   QByteArray  py_q_valuePropertyName(QItemEditorFactory* theWrappedObject, int  userType) const{  return (((PythonQtPublicPromoter_QItemEditorFactory*)theWrappedObject)->py_q_valuePropertyName(userType));}
};





class PythonQtWrapper_QItemSelection : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelection* new_QItemSelection(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
void delete_QItemSelection(QItemSelection* obj) { delete obj; }
   void append(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l);
   const QItemSelectionRange  at(QItemSelection* theWrappedObject, qsizetype  i) const;
   const QItemSelectionRange  back(QItemSelection* theWrappedObject) const;
   qsizetype  capacity(QItemSelection* theWrappedObject) const;
   void clear(QItemSelection* theWrappedObject);
   const QItemSelectionRange*  constFirst(QItemSelection* theWrappedObject) const;
   const QItemSelectionRange*  constLast(QItemSelection* theWrappedObject) const;
   bool  contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const;
   qsizetype  count(QItemSelection* theWrappedObject) const;
   bool  empty(QItemSelection* theWrappedObject) const;
   const QItemSelectionRange*  first(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  first(QItemSelection* theWrappedObject, qsizetype  n) const;
   QList<QItemSelectionRange >  static_QItemSelection_fromVector(const QList<QItemSelectionRange >&  vector);
   const QItemSelectionRange  front(QItemSelection* theWrappedObject) const;
   QList<QModelIndex >  indexes(QItemSelection* theWrappedObject) const;
   bool  isEmpty(QItemSelection* theWrappedObject) const;
   bool  isSharedWith(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  other) const;
   const QItemSelectionRange*  last(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  last(QItemSelection* theWrappedObject, qsizetype  n) const;
   qsizetype  length(QItemSelection* theWrappedObject) const;
   void merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command);
   QList<QItemSelectionRange >  mid(QItemSelection* theWrappedObject, qsizetype  pos, qsizetype  len = -1) const;
   void move(QItemSelection* theWrappedObject, qsizetype  from, qsizetype  to);
   QItemSelectionRange  operator_subscript(QItemSelection* theWrappedObject, qsizetype  i);
   const QItemSelectionRange  operator_subscript(QItemSelection* theWrappedObject, qsizetype  i) const;
   void pop_back(QItemSelection* theWrappedObject);
   void pop_front(QItemSelection* theWrappedObject);
   void remove(QItemSelection* theWrappedObject, qsizetype  i, qsizetype  n = 1);
   void removeAt(QItemSelection* theWrappedObject, qsizetype  i);
   void removeFirst(QItemSelection* theWrappedObject);
   void removeLast(QItemSelection* theWrappedObject);
   void reserve(QItemSelection* theWrappedObject, qsizetype  size);
   void resize(QItemSelection* theWrappedObject, qsizetype  size);
   void select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void shrink_to_fit(QItemSelection* theWrappedObject);
   qsizetype  size(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  sliced(QItemSelection* theWrappedObject, qsizetype  pos) const;
   QList<QItemSelectionRange >  sliced(QItemSelection* theWrappedObject, qsizetype  pos, qsizetype  n) const;
   void static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result);
   void squeeze(QItemSelection* theWrappedObject);
   void swap(QItemSelection* theWrappedObject, QList<QItemSelectionRange >&  other);
   void swapItemsAt(QItemSelection* theWrappedObject, qsizetype  i, qsizetype  j);
   QItemSelectionRange  takeAt(QItemSelection* theWrappedObject, qsizetype  i);
   QItemSelectionRange  takeFirst(QItemSelection* theWrappedObject);
   QItemSelectionRange  takeLast(QItemSelection* theWrappedObject);
   QList<QItemSelectionRange >  toList(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  toVector(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  value(QItemSelection* theWrappedObject, qsizetype  i) const;
    bool __nonzero__(QItemSelection* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QItemSelectionModel : public QItemSelectionModel
{
public:
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model = nullptr):QItemSelectionModel(model),_wrapper(nullptr) {};
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent):QItemSelectionModel(model, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QItemSelectionModel() override;

void childEvent(QChildEvent*  event) override;
void clear() override;
void clearCurrentIndex() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void reset() override;
void select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command) override;
void select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) override;
void setCurrentIndex(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QItemSelectionModel : public QItemSelectionModel
{ public:
inline void promoted_emitSelectionChanged(const QItemSelection&  newSelection, const QItemSelection&  oldSelection) { this->emitSelectionChanged(newSelection, oldSelection); }
inline void py_q_clear() { QItemSelectionModel::clear(); }
inline void py_q_clearCurrentIndex() { QItemSelectionModel::clearCurrentIndex(); }
inline void py_q_reset() { QItemSelectionModel::reset(); }
inline void py_q_select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(selection, command); }
inline void py_q_select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(index, command); }
inline void py_q_setCurrentIndex(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::setCurrentIndex(index, command); }
};

class PythonQtWrapper_QItemSelectionModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectionFlag )
Q_FLAGS(SelectionFlags )
enum SelectionFlag{
  NoUpdate = QItemSelectionModel::NoUpdate,   Clear = QItemSelectionModel::Clear,   Select = QItemSelectionModel::Select,   Deselect = QItemSelectionModel::Deselect,   Toggle = QItemSelectionModel::Toggle,   Current = QItemSelectionModel::Current,   Rows = QItemSelectionModel::Rows,   Columns = QItemSelectionModel::Columns,   SelectCurrent = QItemSelectionModel::SelectCurrent,   ToggleCurrent = QItemSelectionModel::ToggleCurrent,   ClearAndSelect = QItemSelectionModel::ClearAndSelect};
Q_DECLARE_FLAGS(SelectionFlags, SelectionFlag)
public slots:
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model = nullptr);
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent);
void delete_QItemSelectionModel(QItemSelectionModel* obj) { delete obj; }
   void py_q_clear(QItemSelectionModel* theWrappedObject){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_clear());}
   void py_q_clearCurrentIndex(QItemSelectionModel* theWrappedObject){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_clearCurrentIndex());}
   bool  columnIntersectsSelection(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QModelIndex  currentIndex(QItemSelectionModel* theWrappedObject) const;
   void emitSelectionChanged(QItemSelectionModel* theWrappedObject, const QItemSelection&  newSelection, const QItemSelection&  oldSelection);
   bool  hasSelection(QItemSelectionModel* theWrappedObject) const;
   bool  isColumnSelected(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex()) const;
   bool  isRowSelected(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex()) const;
   bool  isSelected(QItemSelectionModel* theWrappedObject, const QModelIndex&  index) const;
   QAbstractItemModel*  model(QItemSelectionModel* theWrappedObject);
   const QAbstractItemModel*  model(QItemSelectionModel* theWrappedObject) const;
   void py_q_reset(QItemSelectionModel* theWrappedObject){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_reset());}
   bool  rowIntersectsSelection(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex()) const;
   void py_q_select(QItemSelectionModel* theWrappedObject, const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_select(selection, command));}
   void py_q_select(QItemSelectionModel* theWrappedObject, const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_select(index, command));}
   QList<QModelIndex >  selectedColumns(QItemSelectionModel* theWrappedObject, int  row = 0) const;
   QList<QModelIndex >  selectedIndexes(QItemSelectionModel* theWrappedObject) const;
   QList<QModelIndex >  selectedRows(QItemSelectionModel* theWrappedObject, int  column = 0) const;
   const QItemSelection  selection(QItemSelectionModel* theWrappedObject) const;
   void py_q_setCurrentIndex(QItemSelectionModel* theWrappedObject, const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_setCurrentIndex(index, command));}
   void setModel(QItemSelectionModel* theWrappedObject, QAbstractItemModel*  model);
};





class PythonQtWrapper_QItemSelectionRange : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelectionRange* new_QItemSelectionRange();
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  index);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  topL, const QModelIndex&  bottomR);
QItemSelectionRange* new_QItemSelectionRange(const QItemSelectionRange& other) {
QItemSelectionRange* a = new QItemSelectionRange();
*((QItemSelectionRange*)a) = other;
return a; }
void delete_QItemSelectionRange(QItemSelectionRange* obj) { delete obj; }
   int  bottom(QItemSelectionRange* theWrappedObject) const;
   const QPersistentModelIndex*  bottomRight(QItemSelectionRange* theWrappedObject) const;
   bool  contains(QItemSelectionRange* theWrappedObject, const QModelIndex&  index) const;
   bool  contains(QItemSelectionRange* theWrappedObject, int  row, int  column, const QModelIndex&  parentIndex) const;
   int  height(QItemSelectionRange* theWrappedObject) const;
   QList<QModelIndex >  indexes(QItemSelectionRange* theWrappedObject) const;
   QItemSelectionRange  intersected(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  intersects(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  isEmpty(QItemSelectionRange* theWrappedObject) const;
   bool  isValid(QItemSelectionRange* theWrappedObject) const;
   int  left(QItemSelectionRange* theWrappedObject) const;
   const QAbstractItemModel*  model(QItemSelectionRange* theWrappedObject) const;
   bool  __ne__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  __eq__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   QModelIndex  parent(QItemSelectionRange* theWrappedObject) const;
   int  right(QItemSelectionRange* theWrappedObject) const;
   void swap(QItemSelectionRange* theWrappedObject, QItemSelectionRange&  other);
   int  top(QItemSelectionRange* theWrappedObject) const;
   const QPersistentModelIndex*  topLeft(QItemSelectionRange* theWrappedObject) const;
   int  width(QItemSelectionRange* theWrappedObject) const;
    QString py_toString(QItemSelectionRange*);
    bool __nonzero__(QItemSelectionRange* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QKeyCombination : public QObject
{ Q_OBJECT
public:
public slots:
QKeyCombination* new_QKeyCombination(Qt::KeyboardModifiers  modifiers, Qt::Key  key = Qt::Key_unknown);
QKeyCombination* new_QKeyCombination(Qt::Key  key = Qt::Key_unknown);
void delete_QKeyCombination(QKeyCombination* obj) { delete obj; }
   QKeyCombination  static_QKeyCombination_fromCombined(int  combined);
   Qt::Key  key(QKeyCombination* theWrappedObject) const;
   Qt::KeyboardModifiers  keyboardModifiers(QKeyCombination* theWrappedObject) const;
   int  operator_cast_int(QKeyCombination* theWrappedObject) const;
   bool  __ne__(QKeyCombination* theWrappedObject, QKeyCombination  rhs);
   void writeTo(QKeyCombination* theWrappedObject, QDataStream&  s);
   bool  __eq__(QKeyCombination* theWrappedObject, QKeyCombination  rhs);
   void readFrom(QKeyCombination* theWrappedObject, QDataStream&  s);
   int  toCombined(QKeyCombination* theWrappedObject) const;
    QString py_toString(QKeyCombination*);
};





class PythonQtShell_QKeyEvent : public QKeyEvent
{
public:
    PythonQtShell_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, unsigned short  count = 1):QKeyEvent(type, key, modifiers, text, autorep, count),_wrapper(nullptr) {};
    PythonQtShell_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text = QString(), bool  autorep = false, unsigned short  count = 1, const QInputDevice*  device = QInputDevice::primaryKeyboard()):QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count, device),_wrapper(nullptr) {};
    PythonQtShell_QKeyEvent(const QKeyEvent&  arg__1):QKeyEvent(arg__1),_wrapper(nullptr) {};

   ~PythonQtShell_QKeyEvent() override;

QKeyEvent*  clone() const override;
void setAccepted(bool  accepted) override;
void setTimestamp(quint64  timestamp) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QKeyEvent : public QKeyEvent
{ public:
inline QKeyEvent&  promoted_operator_assign(const QKeyEvent&  other) { return this->QKeyEvent::operator=(other); }
inline QKeyEvent*  py_q_clone() const { return QKeyEvent::clone(); }
};

class PythonQtWrapper_QKeyEvent : public QObject
{ Q_OBJECT
public:
public slots:
QKeyEvent* new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, unsigned short  count = 1);
QKeyEvent* new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text = QString(), bool  autorep = false, unsigned short  count = 1, const QInputDevice*  device = QInputDevice::primaryKeyboard());
QKeyEvent* new_QKeyEvent(const QKeyEvent&  arg__1);
void delete_QKeyEvent(QKeyEvent* obj) { delete obj; }
   QKeyEvent*  py_q_clone(QKeyEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QKeyEvent*)theWrappedObject)->py_q_clone());}
   int  count(QKeyEvent* theWrappedObject) const;
   bool  isAutoRepeat(QKeyEvent* theWrappedObject) const;
   int  key(QKeyEvent* theWrappedObject) const;
   QKeyCombination  keyCombination(QKeyEvent* theWrappedObject) const;
   bool  matches(QKeyEvent* theWrappedObject, QKeySequence::StandardKey  key) const;
   Qt::KeyboardModifiers  modifiers(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeModifiers(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeScanCode(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeVirtualKey(QKeyEvent* theWrappedObject) const;
   QKeyEvent*  operator_assign(QKeyEvent* theWrappedObject, const QKeyEvent&  other);
   QString  text(QKeyEvent* theWrappedObject) const;
};





class PythonQtShell_QKeySequenceEdit : public QKeySequenceEdit
{
public:
    PythonQtShell_QKeySequenceEdit(QWidget*  parent = nullptr):QKeySequenceEdit(parent),_wrapper(nullptr) {};
    PythonQtShell_QKeySequenceEdit(const QKeySequence&  keySequence, QWidget*  parent = nullptr):QKeySequenceEdit(keySequence, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QKeySequenceEdit() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  arg__1) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  arg__1) override;
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
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QKeySequenceEdit : public QKeySequenceEdit
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { this->keyReleaseEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QKeySequenceEdit::event(arg__1); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QKeySequenceEdit::focusOutEvent(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QKeySequenceEdit::keyPressEvent(arg__1); }
inline void py_q_keyReleaseEvent(QKeyEvent*  arg__1) { QKeySequenceEdit::keyReleaseEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QKeySequenceEdit::timerEvent(arg__1); }
};

class PythonQtWrapper_QKeySequenceEdit : public QObject
{ Q_OBJECT
public:
public slots:
QKeySequenceEdit* new_QKeySequenceEdit(QWidget*  parent = nullptr);
QKeySequenceEdit* new_QKeySequenceEdit(const QKeySequence&  keySequence, QWidget*  parent = nullptr);
void delete_QKeySequenceEdit(QKeySequenceEdit* obj) { delete obj; }
   bool  py_q_event(QKeySequenceEdit* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_event(arg__1));}
   QList<QKeyCombination >  finishingKeyCombinations(QKeySequenceEdit* theWrappedObject) const;
   void py_q_focusOutEvent(QKeySequenceEdit* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   bool  isClearButtonEnabled(QKeySequenceEdit* theWrappedObject) const;
   void py_q_keyPressEvent(QKeySequenceEdit* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void py_q_keyReleaseEvent(QKeySequenceEdit* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_keyReleaseEvent(arg__1));}
   QKeySequence  keySequence(QKeySequenceEdit* theWrappedObject) const;
   qsizetype  maximumSequenceLength(QKeySequenceEdit* theWrappedObject) const;
   void setClearButtonEnabled(QKeySequenceEdit* theWrappedObject, bool  enable);
   void setFinishingKeyCombinations(QKeySequenceEdit* theWrappedObject, const QList<QKeyCombination >&  finishingKeyCombinations);
   void py_q_timerEvent(QKeySequenceEdit* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_timerEvent(arg__1));}
};





class PythonQtShell_QLCDNumber : public QLCDNumber
{
public:
    PythonQtShell_QLCDNumber(QWidget*  parent = nullptr):QLCDNumber(parent),_wrapper(nullptr) {};
    PythonQtShell_QLCDNumber(uint  numDigits, QWidget*  parent = nullptr):QLCDNumber(numDigits, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QLCDNumber() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionFrame*  option) const override;
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
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QLCDNumber : public QLCDNumber
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QLCDNumber::event(e); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QLCDNumber::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QLCDNumber::sizeHint(); }
};

class PythonQtWrapper_QLCDNumber : public QObject
{ Q_OBJECT
public:
public slots:
QLCDNumber* new_QLCDNumber(QWidget*  parent = nullptr);
QLCDNumber* new_QLCDNumber(uint  numDigits, QWidget*  parent = nullptr);
void delete_QLCDNumber(QLCDNumber* obj) { delete obj; }
   bool  checkOverflow(QLCDNumber* theWrappedObject, double  num) const;
   bool  checkOverflow(QLCDNumber* theWrappedObject, int  num) const;
   int  digitCount(QLCDNumber* theWrappedObject) const;
   bool  py_q_event(QLCDNumber* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QLCDNumber*)theWrappedObject)->py_q_event(e));}
   int  intValue(QLCDNumber* theWrappedObject) const;
   QLCDNumber::Mode  mode(QLCDNumber* theWrappedObject) const;
   void py_q_paintEvent(QLCDNumber* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QLCDNumber*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QLCDNumber::SegmentStyle  segmentStyle(QLCDNumber* theWrappedObject) const;
   void setDigitCount(QLCDNumber* theWrappedObject, int  nDigits);
   void setMode(QLCDNumber* theWrappedObject, QLCDNumber::Mode  arg__1);
   void setSegmentStyle(QLCDNumber* theWrappedObject, QLCDNumber::SegmentStyle  arg__1);
   QSize  py_q_sizeHint(QLCDNumber* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLCDNumber*)theWrappedObject)->py_q_sizeHint());}
   bool  smallDecimalPoint(QLCDNumber* theWrappedObject) const;
   double  value(QLCDNumber* theWrappedObject) const;
};





class PythonQtShell_QLabel : public QLabel
{
public:
    PythonQtShell_QLabel(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QLabel(parent, f),_wrapper(nullptr) {};
    PythonQtShell_QLabel(const QString&  text, QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QLabel(text, parent, f),_wrapper(nullptr) {};

   ~PythonQtShell_QLabel() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  ev) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEnterEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  ev) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  ev) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initStyleOption(QStyleOptionFrame*  option) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  ev) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  ev) override;
void mousePressEvent(QMouseEvent*  ev) override;
void mouseReleaseEvent(QMouseEvent*  ev) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QLabel : public QLabel
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  ev) { this->contextMenuEvent(ev); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_focusInEvent(QFocusEvent*  ev) { this->focusInEvent(ev); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  ev) { this->focusOutEvent(ev); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { this->keyPressEvent(ev); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { this->mouseMoveEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { this->mousePressEvent(ev); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { this->mouseReleaseEvent(ev); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QLabel::changeEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  ev) { QLabel::contextMenuEvent(ev); }
inline bool  py_q_event(QEvent*  e) { return QLabel::event(e); }
inline void py_q_focusInEvent(QFocusEvent*  ev) { QLabel::focusInEvent(ev); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QLabel::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  ev) { QLabel::focusOutEvent(ev); }
inline int  py_q_heightForWidth(int  arg__1) const { return QLabel::heightForWidth(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  ev) { QLabel::keyPressEvent(ev); }
inline QSize  py_q_minimumSizeHint() const { return QLabel::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  ev) { QLabel::mouseMoveEvent(ev); }
inline void py_q_mousePressEvent(QMouseEvent*  ev) { QLabel::mousePressEvent(ev); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  ev) { QLabel::mouseReleaseEvent(ev); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QLabel::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QLabel::sizeHint(); }
};

class PythonQtWrapper_QLabel : public QObject
{ Q_OBJECT
public:
public slots:
QLabel* new_QLabel(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
QLabel* new_QLabel(const QString&  text, QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QLabel(QLabel* obj) { delete obj; }
   Qt::Alignment  alignment(QLabel* theWrappedObject) const;
   QWidget*  buddy(QLabel* theWrappedObject) const;
   void py_q_changeEvent(QLabel* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void py_q_contextMenuEvent(QLabel* theWrappedObject, QContextMenuEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_contextMenuEvent(ev));}
   bool  py_q_event(QLabel* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_event(e));}
   void py_q_focusInEvent(QLabel* theWrappedObject, QFocusEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_focusInEvent(ev));}
   bool  py_q_focusNextPrevChild(QLabel* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QLabel* theWrappedObject, QFocusEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_focusOutEvent(ev));}
   bool  hasScaledContents(QLabel* theWrappedObject) const;
   bool  hasSelectedText(QLabel* theWrappedObject) const;
   int  py_q_heightForWidth(QLabel* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   int  indent(QLabel* theWrappedObject) const;
   void py_q_keyPressEvent(QLabel* theWrappedObject, QKeyEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_keyPressEvent(ev));}
   int  margin(QLabel* theWrappedObject) const;
   QSize  minimumSizeHint(QLabel* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QLabel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QLabel* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_mouseMoveEvent(ev));}
   void py_q_mousePressEvent(QLabel* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_mousePressEvent(ev));}
   void py_q_mouseReleaseEvent(QLabel* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_mouseReleaseEvent(ev));}
   QMovie*  movie(QLabel* theWrappedObject) const;
   bool  openExternalLinks(QLabel* theWrappedObject) const;
   void py_q_paintEvent(QLabel* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QPicture  picture(QLabel* theWrappedObject) const;
   QPixmap  pixmap(QLabel* theWrappedObject) const;
   QString  selectedText(QLabel* theWrappedObject) const;
   int  selectionStart(QLabel* theWrappedObject) const;
   void setAlignment(QLabel* theWrappedObject, Qt::Alignment  arg__1);
   void setBuddy(QLabel* theWrappedObject, QWidget*  arg__1);
   void setIndent(QLabel* theWrappedObject, int  arg__1);
   void setMargin(QLabel* theWrappedObject, int  arg__1);
   void setOpenExternalLinks(QLabel* theWrappedObject, bool  open);
   void setScaledContents(QLabel* theWrappedObject, bool  arg__1);
   void setSelection(QLabel* theWrappedObject, int  arg__1, int  arg__2);
   void setTextFormat(QLabel* theWrappedObject, Qt::TextFormat  arg__1);
   void setTextInteractionFlags(QLabel* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setWordWrap(QLabel* theWrappedObject, bool  on);
   QSize  py_q_sizeHint(QLabel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_sizeHint());}
   QString  text(QLabel* theWrappedObject) const;
   Qt::TextFormat  textFormat(QLabel* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QLabel* theWrappedObject) const;
   bool  wordWrap(QLabel* theWrappedObject) const;
};





class PythonQtShell_QLayout : public QLayout
{
public:
    PythonQtShell_QLayout(QWidget*  parent = nullptr):QLayout(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QLayout() override;

void addItem(QLayoutItem*  arg__1) override;
void childEvent(QChildEvent*  e) override;
QSizePolicy::ControlTypes  controlTypes() const override;
int  count() const override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
Qt::Orientations  expandingDirections() const override;
QRect  geometry() const override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
int  indexOf(const QLayoutItem*  arg__1) const override;
int  indexOf(const QWidget*  arg__1) const override;
void invalidate() override;
bool  isEmpty() const override;
QLayoutItem*  itemAt(int  index) const override;
QLayout*  layout() override;
QSize  maximumSize() const override;
int  minimumHeightForWidth(int  arg__1) const override;
QSize  minimumSize() const override;
QLayoutItem*  replaceWidget(QWidget*  from, QWidget*  to, Qt::FindChildOptions  options = Qt::FindChildrenRecursively) override;
void setGeometry(const QRect&  arg__1) override;
void setSpacing(int  arg__1) override;
QSize  sizeHint() const override;
QSpacerItem*  spacerItem() override;
int  spacing() const override;
QLayoutItem*  takeAt(int  index) override;
void timerEvent(QTimerEvent*  event) override;
QWidget*  widget() const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QLayout : public QLayout
{ public:
inline void promoted_addChildLayout(QLayout*  l) { this->addChildLayout(l); }
inline void promoted_addChildWidget(QWidget*  w) { this->addChildWidget(w); }
inline bool  promoted_adoptLayout(QLayout*  layout) { return this->adoptLayout(layout); }
inline QRect  promoted_alignmentRect(const QRect&  arg__1) const { return this->alignmentRect(arg__1); }
inline void promoted_childEvent(QChildEvent*  e) { this->childEvent(e); }
inline void promoted_widgetEvent(QEvent*  arg__1) { this->widgetEvent(arg__1); }
inline void py_q_addItem(QLayoutItem*  arg__1) { this->addItem(arg__1); }
inline void py_q_childEvent(QChildEvent*  e) { QLayout::childEvent(e); }
inline QSizePolicy::ControlTypes  py_q_controlTypes() const { return QLayout::controlTypes(); }
inline int  py_q_count() const { return this->count(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QLayout::expandingDirections(); }
inline QRect  py_q_geometry() const { return QLayout::geometry(); }
inline int  py_q_indexOf(const QLayoutItem*  arg__1) const { return QLayout::indexOf(arg__1); }
inline int  py_q_indexOf(const QWidget*  arg__1) const { return QLayout::indexOf(arg__1); }
inline void py_q_invalidate() { QLayout::invalidate(); }
inline bool  py_q_isEmpty() const { return QLayout::isEmpty(); }
inline QLayoutItem*  py_q_itemAt(int  index) const { return this->itemAt(index); }
inline QLayout*  py_q_layout() { return QLayout::layout(); }
inline QSize  py_q_maximumSize() const { return QLayout::maximumSize(); }
inline QSize  py_q_minimumSize() const { return QLayout::minimumSize(); }
inline QLayoutItem*  py_q_replaceWidget(QWidget*  from, QWidget*  to, Qt::FindChildOptions  options = Qt::FindChildrenRecursively) { return QLayout::replaceWidget(from, to, options); }
inline void py_q_setGeometry(const QRect&  arg__1) { QLayout::setGeometry(arg__1); }
inline void py_q_setSpacing(int  arg__1) { QLayout::setSpacing(arg__1); }
inline int  py_q_spacing() const { return QLayout::spacing(); }
inline QLayoutItem*  py_q_takeAt(int  index) { return this->takeAt(index); }
};

class PythonQtWrapper_QLayout : public QObject
{ Q_OBJECT
public:
public slots:
QLayout* new_QLayout(QWidget*  parent = nullptr);
void delete_QLayout(QLayout* obj) { delete obj; }
   bool  activate(QLayout* theWrappedObject);
   void addChildLayout(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  l);
   void addChildWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w);
   void addItem(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayoutItem* >  arg__1);
   void py_q_addItem(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayoutItem* >  arg__1){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_addItem(arg__1));}
   void addWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w);
   bool  adoptLayout(QLayout* theWrappedObject, QLayout*  layout);
   QRect  alignmentRect(QLayout* theWrappedObject, const QRect&  arg__1) const;
   void py_q_childEvent(QLayout* theWrappedObject, QChildEvent*  e){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_childEvent(e));}
   QSize  static_QLayout_closestAcceptableSize(const QWidget*  w, const QSize&  s);
   QMargins  contentsMargins(QLayout* theWrappedObject) const;
   QRect  contentsRect(QLayout* theWrappedObject) const;
   QSizePolicy::ControlTypes  py_q_controlTypes(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_controlTypes());}
   int  count(QLayout* theWrappedObject) const;
   int  py_q_count(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_count());}
   Qt::Orientations  py_q_expandingDirections(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_expandingDirections());}
   QRect  py_q_geometry(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_geometry());}
   int  indexOf(QLayout* theWrappedObject, const QLayoutItem*  arg__1) const;
   int  py_q_indexOf(QLayout* theWrappedObject, const QLayoutItem*  arg__1) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_indexOf(arg__1));}
   int  indexOf(QLayout* theWrappedObject, const QWidget*  arg__1) const;
   int  py_q_indexOf(QLayout* theWrappedObject, const QWidget*  arg__1) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_indexOf(arg__1));}
   void py_q_invalidate(QLayout* theWrappedObject){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_invalidate());}
   bool  py_q_isEmpty(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_isEmpty());}
   bool  isEnabled(QLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QLayout* theWrappedObject, int  index) const;
   QLayoutItem*  py_q_itemAt(QLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_itemAt(index));}
   QLayout*  py_q_layout(QLayout* theWrappedObject){  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_layout());}
   QSize  py_q_maximumSize(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_maximumSize());}
   QWidget*  menuBar(QLayout* theWrappedObject) const;
   QSize  py_q_minimumSize(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_minimumSize());}
   QWidget*  parentWidget(QLayout* theWrappedObject) const;
   void removeItem(QLayout* theWrappedObject, PythonQtPassOwnershipToPython<QLayoutItem* >  arg__1);
   void removeWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToPython<QWidget* >  w);
   QLayoutItem*  replaceWidget(QLayout* theWrappedObject, QWidget*  from, QWidget*  to, Qt::FindChildOptions  options = Qt::FindChildrenRecursively);
   QLayoutItem*  py_q_replaceWidget(QLayout* theWrappedObject, QWidget*  from, QWidget*  to, Qt::FindChildOptions  options = Qt::FindChildrenRecursively){  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_replaceWidget(from, to, options));}
   bool  setAlignment(QLayout* theWrappedObject, QLayout*  l, Qt::Alignment  alignment);
   bool  setAlignment(QLayout* theWrappedObject, QWidget*  w, Qt::Alignment  alignment);
   void setContentsMargins(QLayout* theWrappedObject, const QMargins&  margins);
   void setContentsMargins(QLayout* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setEnabled(QLayout* theWrappedObject, bool  arg__1);
   void py_q_setGeometry(QLayout* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_setGeometry(arg__1));}
   void setMenuBar(QLayout* theWrappedObject, QWidget*  w);
   void setSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  arg__1);
   void setSpacing(QLayout* theWrappedObject, int  arg__1);
   void py_q_setSpacing(QLayout* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_setSpacing(arg__1));}
   QLayout::SizeConstraint  sizeConstraint(QLayout* theWrappedObject) const;
   int  spacing(QLayout* theWrappedObject) const;
   int  py_q_spacing(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_spacing());}
   PythonQtPassOwnershipToPython<QLayoutItem*  > takeAt(QLayout* theWrappedObject, int  index);
   PythonQtPassOwnershipToPython<QLayoutItem*  > py_q_takeAt(QLayout* theWrappedObject, int  index){  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_takeAt(index));}
   int  totalHeightForWidth(QLayout* theWrappedObject, int  w) const;
   QSize  totalMaximumSize(QLayout* theWrappedObject) const;
   int  totalMinimumHeightForWidth(QLayout* theWrappedObject, int  w) const;
   QSize  totalMinimumSize(QLayout* theWrappedObject) const;
   QSize  totalSizeHint(QLayout* theWrappedObject) const;
   void unsetContentsMargins(QLayout* theWrappedObject);
   void update(QLayout* theWrappedObject);
   void widgetEvent(QLayout* theWrappedObject, QEvent*  arg__1);
    bool __nonzero__(QLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QLayoutItem : public QLayoutItem
{
public:
    PythonQtShell_QLayoutItem(Qt::Alignment  alignment = Qt::Alignment()):QLayoutItem(alignment),_wrapper(nullptr) {};

   ~PythonQtShell_QLayoutItem() override;

QSizePolicy::ControlTypes  controlTypes() const override;
Qt::Orientations  expandingDirections() const override;
QRect  geometry() const override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void invalidate() override;
bool  isEmpty() const override;
QLayout*  layout() override;
QSize  maximumSize() const override;
int  minimumHeightForWidth(int  arg__1) const override;
QSize  minimumSize() const override;
void setGeometry(const QRect&  arg__1) override;
QSize  sizeHint() const override;
QSpacerItem*  spacerItem() override;
QWidget*  widget() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QLayoutItem : public QLayoutItem
{ public:
inline QSizePolicy::ControlTypes  py_q_controlTypes() const { return QLayoutItem::controlTypes(); }
inline Qt::Orientations  py_q_expandingDirections() const { return this->expandingDirections(); }
inline QRect  py_q_geometry() const { return this->geometry(); }
inline bool  py_q_hasHeightForWidth() const { return QLayoutItem::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QLayoutItem::heightForWidth(arg__1); }
inline void py_q_invalidate() { QLayoutItem::invalidate(); }
inline bool  py_q_isEmpty() const { return this->isEmpty(); }
inline QLayout*  py_q_layout() { return QLayoutItem::layout(); }
inline QSize  py_q_maximumSize() const { return this->maximumSize(); }
inline int  py_q_minimumHeightForWidth(int  arg__1) const { return QLayoutItem::minimumHeightForWidth(arg__1); }
inline QSize  py_q_minimumSize() const { return this->minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { this->setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return this->sizeHint(); }
inline QSpacerItem*  py_q_spacerItem() { return QLayoutItem::spacerItem(); }
inline QWidget*  py_q_widget() const { return QLayoutItem::widget(); }
};

class PythonQtWrapper_QLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QLayoutItem* new_QLayoutItem(Qt::Alignment  alignment = Qt::Alignment());
void delete_QLayoutItem(QLayoutItem* obj) { delete obj; }
   Qt::Alignment  alignment(QLayoutItem* theWrappedObject) const;
   QSizePolicy::ControlTypes  controlTypes(QLayoutItem* theWrappedObject) const;
   QSizePolicy::ControlTypes  py_q_controlTypes(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_controlTypes());}
   Qt::Orientations  expandingDirections(QLayoutItem* theWrappedObject) const;
   Qt::Orientations  py_q_expandingDirections(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_expandingDirections());}
   QRect  geometry(QLayoutItem* theWrappedObject) const;
   QRect  py_q_geometry(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_geometry());}
   bool  hasHeightForWidth(QLayoutItem* theWrappedObject) const;
   bool  py_q_hasHeightForWidth(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   int  py_q_heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   void invalidate(QLayoutItem* theWrappedObject);
   void py_q_invalidate(QLayoutItem* theWrappedObject){  (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_invalidate());}
   bool  isEmpty(QLayoutItem* theWrappedObject) const;
   bool  py_q_isEmpty(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_isEmpty());}
   QLayout*  layout(QLayoutItem* theWrappedObject);
   QLayout*  py_q_layout(QLayoutItem* theWrappedObject){  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_layout());}
   QSize  maximumSize(QLayoutItem* theWrappedObject) const;
   QSize  py_q_maximumSize(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_maximumSize());}
   int  minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   int  py_q_minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_minimumHeightForWidth(arg__1));}
   QSize  minimumSize(QLayoutItem* theWrappedObject) const;
   QSize  py_q_minimumSize(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_minimumSize());}
   void setAlignment(QLayoutItem* theWrappedObject, Qt::Alignment  a);
   void setGeometry(QLayoutItem* theWrappedObject, const QRect&  arg__1);
   void py_q_setGeometry(QLayoutItem* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_setGeometry(arg__1));}
   QSize  sizeHint(QLayoutItem* theWrappedObject) const;
   QSize  py_q_sizeHint(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_sizeHint());}
   QSpacerItem*  spacerItem(QLayoutItem* theWrappedObject);
   QSpacerItem*  py_q_spacerItem(QLayoutItem* theWrappedObject){  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_spacerItem());}
   QWidget*  widget(QLayoutItem* theWrappedObject) const;
   QWidget*  py_q_widget(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_widget());}
    bool __nonzero__(QLayoutItem* obj) { return !obj->isEmpty(); }
};


