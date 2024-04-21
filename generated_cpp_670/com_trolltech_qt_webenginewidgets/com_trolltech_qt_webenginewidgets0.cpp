#include "com_trolltech_qt_webenginewidgets0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qjsonobject.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qnetworkcookie.h>
#include <qobject.h>
#include <qpagelayout.h>
#include <qpageranges.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qsslcertificate.h>
#include <qsslkey.h>
#include <qthread.h>
#include <qurl.h>
#include <qwebchannel.h>
#include <qwebchannelabstracttransport.h>
#include <qwebenginecertificateerror.h>
#include <qwebengineclientcertificateselection.h>
#include <qwebengineclientcertificatestore.h>
#include <qwebenginecookiestore.h>
#include <qwebenginedownloadrequest.h>
#include <qwebenginefilesystemaccessrequest.h>
#include <qwebenginefindtextresult.h>
#include <qwebenginefullscreenrequest.h>
#include <qwebenginehistory.h>
#include <qwebenginehttprequest.h>
#include <qwebengineloadinginfo.h>
#include <qwebenginenavigationrequest.h>
#include <qwebenginenewwindowrequest.h>
#include <qwebenginenotification.h>
#include <qwebenginepage.h>
#include <qwebengineprofile.h>
#include <qwebenginequotarequest.h>
#include <qwebengineregisterprotocolhandlerrequest.h>
#include <qwebenginescript.h>
#include <qwebenginescriptcollection.h>
#include <qwebenginesettings.h>
#include <qwebengineurlrequestinfo.h>
#include <qwebengineurlrequestinterceptor.h>
#include <qwebengineurlschemehandler.h>

PythonQtShell_QWebChannel::~PythonQtShell_QWebChannel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebChannel::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannel::childEvent(event0);
}
void PythonQtShell_QWebChannel::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannel::customEvent(event0);
}
bool  PythonQtShell_QWebChannel::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebChannel::event(event0);
}
bool  PythonQtShell_QWebChannel::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebChannel::eventFilter(watched0, event1);
}
void PythonQtShell_QWebChannel::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannel::timerEvent(event0);
}
QWebChannel* PythonQtWrapper_QWebChannel::new_QWebChannel(QObject*  parent)
{ 
return new PythonQtShell_QWebChannel(parent); }

const QMetaObject* PythonQtShell_QWebChannel::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebChannel::staticMetaObject);
  } else {
    return &QWebChannel::staticMetaObject;
  }
}
int PythonQtShell_QWebChannel::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebChannel::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QWebChannel::blockUpdates(QWebChannel* theWrappedObject) const
{
  return ( theWrappedObject->blockUpdates());
}

void PythonQtWrapper_QWebChannel::deregisterObject(QWebChannel* theWrappedObject, QObject*  object)
{
  ( theWrappedObject->deregisterObject(object));
}

int  PythonQtWrapper_QWebChannel::propertyUpdateInterval(QWebChannel* theWrappedObject) const
{
  return ( theWrappedObject->propertyUpdateInterval());
}

void PythonQtWrapper_QWebChannel::registerObject(QWebChannel* theWrappedObject, const QString&  id, QObject*  object)
{
  ( theWrappedObject->registerObject(id, object));
}

void PythonQtWrapper_QWebChannel::registerObjects(QWebChannel* theWrappedObject, const QHash<QString , QObject* >&  objects)
{
  ( theWrappedObject->registerObjects(objects));
}

QHash<QString , QObject* >  PythonQtWrapper_QWebChannel::registeredObjects(QWebChannel* theWrappedObject) const
{
  return ( theWrappedObject->registeredObjects());
}

void PythonQtWrapper_QWebChannel::setBlockUpdates(QWebChannel* theWrappedObject, bool  block)
{
  ( theWrappedObject->setBlockUpdates(block));
}

void PythonQtWrapper_QWebChannel::setPropertyUpdateInterval(QWebChannel* theWrappedObject, int  ms)
{
  ( theWrappedObject->setPropertyUpdateInterval(ms));
}



PythonQtShell_QWebChannelAbstractTransport::~PythonQtShell_QWebChannelAbstractTransport() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebChannelAbstractTransport::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannelAbstractTransport::childEvent(event0);
}
void PythonQtShell_QWebChannelAbstractTransport::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannelAbstractTransport::customEvent(event0);
}
bool  PythonQtShell_QWebChannelAbstractTransport::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebChannelAbstractTransport::event(event0);
}
bool  PythonQtShell_QWebChannelAbstractTransport::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebChannelAbstractTransport::eventFilter(watched0, event1);
}
void PythonQtShell_QWebChannelAbstractTransport::sendMessage(const QJsonObject&  message0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sendMessage");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QJsonObject&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&message0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
void PythonQtShell_QWebChannelAbstractTransport::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannelAbstractTransport::timerEvent(event0);
}
QWebChannelAbstractTransport* PythonQtWrapper_QWebChannelAbstractTransport::new_QWebChannelAbstractTransport(QObject*  parent)
{ 
return new PythonQtShell_QWebChannelAbstractTransport(parent); }

const QMetaObject* PythonQtShell_QWebChannelAbstractTransport::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebChannelAbstractTransport::staticMetaObject);
  } else {
    return &QWebChannelAbstractTransport::staticMetaObject;
  }
}
int PythonQtShell_QWebChannelAbstractTransport::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebChannelAbstractTransport::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


QWebEngineCertificateError* PythonQtWrapper_QWebEngineCertificateError::new_QWebEngineCertificateError(const QWebEngineCertificateError&  other)
{ 
return new QWebEngineCertificateError(other); }

void PythonQtWrapper_QWebEngineCertificateError::acceptCertificate(QWebEngineCertificateError* theWrappedObject)
{
  ( theWrappedObject->acceptCertificate());
}

QList<QSslCertificate >  PythonQtWrapper_QWebEngineCertificateError::certificateChain(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->certificateChain());
}

void PythonQtWrapper_QWebEngineCertificateError::defer(QWebEngineCertificateError* theWrappedObject)
{
  ( theWrappedObject->defer());
}

QString  PythonQtWrapper_QWebEngineCertificateError::description(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->description());
}

bool  PythonQtWrapper_QWebEngineCertificateError::isOverridable(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->isOverridable());
}

QWebEngineCertificateError*  PythonQtWrapper_QWebEngineCertificateError::operator_assign(QWebEngineCertificateError* theWrappedObject, const QWebEngineCertificateError&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QWebEngineCertificateError::rejectCertificate(QWebEngineCertificateError* theWrappedObject)
{
  ( theWrappedObject->rejectCertificate());
}

QWebEngineCertificateError::Type  PythonQtWrapper_QWebEngineCertificateError::type(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QUrl  PythonQtWrapper_QWebEngineCertificateError::url(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QWebEngineClientCertificateSelection* PythonQtWrapper_QWebEngineClientCertificateSelection::new_QWebEngineClientCertificateSelection(const QWebEngineClientCertificateSelection&  arg__1)
{ 
return new QWebEngineClientCertificateSelection(arg__1); }

QList<QSslCertificate >  PythonQtWrapper_QWebEngineClientCertificateSelection::certificates(QWebEngineClientCertificateSelection* theWrappedObject) const
{
  return ( theWrappedObject->certificates());
}

QUrl  PythonQtWrapper_QWebEngineClientCertificateSelection::host(QWebEngineClientCertificateSelection* theWrappedObject) const
{
  return ( theWrappedObject->host());
}

QWebEngineClientCertificateSelection*  PythonQtWrapper_QWebEngineClientCertificateSelection::operator_assign(QWebEngineClientCertificateSelection* theWrappedObject, const QWebEngineClientCertificateSelection&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

void PythonQtWrapper_QWebEngineClientCertificateSelection::select(QWebEngineClientCertificateSelection* theWrappedObject, const QSslCertificate&  certificate)
{
  ( theWrappedObject->select(certificate));
}

void PythonQtWrapper_QWebEngineClientCertificateSelection::selectNone(QWebEngineClientCertificateSelection* theWrappedObject)
{
  ( theWrappedObject->selectNone());
}



void PythonQtWrapper_QWebEngineClientCertificateStore::add(QWebEngineClientCertificateStore* theWrappedObject, const QSslCertificate&  certificate, const QSslKey&  privateKey)
{
  ( theWrappedObject->add(certificate, privateKey));
}

QList<QSslCertificate >  PythonQtWrapper_QWebEngineClientCertificateStore::certificates(QWebEngineClientCertificateStore* theWrappedObject) const
{
  return ( theWrappedObject->certificates());
}

void PythonQtWrapper_QWebEngineClientCertificateStore::clear(QWebEngineClientCertificateStore* theWrappedObject)
{
  ( theWrappedObject->clear());
}

void PythonQtWrapper_QWebEngineClientCertificateStore::remove(QWebEngineClientCertificateStore* theWrappedObject, const QSslCertificate&  certificate)
{
  ( theWrappedObject->remove(certificate));
}



QWebEngineContextMenuRequest::EditFlags  PythonQtWrapper_QWebEngineContextMenuRequest::editFlags(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->editFlags());
}

bool  PythonQtWrapper_QWebEngineContextMenuRequest::isAccepted(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->isAccepted());
}

bool  PythonQtWrapper_QWebEngineContextMenuRequest::isContentEditable(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->isContentEditable());
}

QString  PythonQtWrapper_QWebEngineContextMenuRequest::linkText(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->linkText());
}

QUrl  PythonQtWrapper_QWebEngineContextMenuRequest::linkUrl(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->linkUrl());
}

QWebEngineContextMenuRequest::MediaFlags  PythonQtWrapper_QWebEngineContextMenuRequest::mediaFlags(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->mediaFlags());
}

QWebEngineContextMenuRequest::MediaType  PythonQtWrapper_QWebEngineContextMenuRequest::mediaType(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->mediaType());
}

QUrl  PythonQtWrapper_QWebEngineContextMenuRequest::mediaUrl(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->mediaUrl());
}

QString  PythonQtWrapper_QWebEngineContextMenuRequest::misspelledWord(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->misspelledWord());
}

QPoint  PythonQtWrapper_QWebEngineContextMenuRequest::position(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QString  PythonQtWrapper_QWebEngineContextMenuRequest::selectedText(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

void PythonQtWrapper_QWebEngineContextMenuRequest::setAccepted(QWebEngineContextMenuRequest* theWrappedObject, bool  accepted)
{
  ( theWrappedObject->setAccepted(accepted));
}

QStringList  PythonQtWrapper_QWebEngineContextMenuRequest::spellCheckerSuggestions(QWebEngineContextMenuRequest* theWrappedObject) const
{
  return ( theWrappedObject->spellCheckerSuggestions());
}



void PythonQtWrapper_QWebEngineCookieStore::deleteAllCookies(QWebEngineCookieStore* theWrappedObject)
{
  ( theWrappedObject->deleteAllCookies());
}

void PythonQtWrapper_QWebEngineCookieStore::deleteCookie(QWebEngineCookieStore* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  origin)
{
  ( theWrappedObject->deleteCookie(cookie, origin));
}

void PythonQtWrapper_QWebEngineCookieStore::deleteSessionCookies(QWebEngineCookieStore* theWrappedObject)
{
  ( theWrappedObject->deleteSessionCookies());
}

void PythonQtWrapper_QWebEngineCookieStore::loadAllCookies(QWebEngineCookieStore* theWrappedObject)
{
  ( theWrappedObject->loadAllCookies());
}

void PythonQtWrapper_QWebEngineCookieStore::setCookie(QWebEngineCookieStore* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  origin)
{
  ( theWrappedObject->setCookie(cookie, origin));
}



PythonQtShell_QWebEngineCookieStore__FilterRequest::~PythonQtShell_QWebEngineCookieStore__FilterRequest() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebEngineCookieStore::FilterRequest* PythonQtWrapper_QWebEngineCookieStore__FilterRequest::new_QWebEngineCookieStore__FilterRequest()
{ 
return new PythonQtShell_QWebEngineCookieStore__FilterRequest(); }



QString  PythonQtWrapper_QWebEngineDownloadRequest::downloadDirectory(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->downloadDirectory());
}

QString  PythonQtWrapper_QWebEngineDownloadRequest::downloadFileName(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->downloadFileName());
}

unsigned int  PythonQtWrapper_QWebEngineDownloadRequest::id(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

QWebEngineDownloadRequest::DownloadInterruptReason  PythonQtWrapper_QWebEngineDownloadRequest::interruptReason(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->interruptReason());
}

QString  PythonQtWrapper_QWebEngineDownloadRequest::interruptReasonString(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->interruptReasonString());
}

bool  PythonQtWrapper_QWebEngineDownloadRequest::isFinished(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->isFinished());
}

bool  PythonQtWrapper_QWebEngineDownloadRequest::isPaused(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->isPaused());
}

bool  PythonQtWrapper_QWebEngineDownloadRequest::isSavePageDownload(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->isSavePageDownload());
}

QString  PythonQtWrapper_QWebEngineDownloadRequest::mimeType(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->mimeType());
}

QWebEnginePage*  PythonQtWrapper_QWebEngineDownloadRequest::page(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->page());
}

qint64  PythonQtWrapper_QWebEngineDownloadRequest::receivedBytes(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->receivedBytes());
}

QWebEngineDownloadRequest::SavePageFormat  PythonQtWrapper_QWebEngineDownloadRequest::savePageFormat(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->savePageFormat());
}

void PythonQtWrapper_QWebEngineDownloadRequest::setDownloadDirectory(QWebEngineDownloadRequest* theWrappedObject, const QString&  directory)
{
  ( theWrappedObject->setDownloadDirectory(directory));
}

void PythonQtWrapper_QWebEngineDownloadRequest::setDownloadFileName(QWebEngineDownloadRequest* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setDownloadFileName(fileName));
}

void PythonQtWrapper_QWebEngineDownloadRequest::setSavePageFormat(QWebEngineDownloadRequest* theWrappedObject, QWebEngineDownloadRequest::SavePageFormat  format)
{
  ( theWrappedObject->setSavePageFormat(format));
}

QWebEngineDownloadRequest::DownloadState  PythonQtWrapper_QWebEngineDownloadRequest::state(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QString  PythonQtWrapper_QWebEngineDownloadRequest::suggestedFileName(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->suggestedFileName());
}

qint64  PythonQtWrapper_QWebEngineDownloadRequest::totalBytes(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->totalBytes());
}

QUrl  PythonQtWrapper_QWebEngineDownloadRequest::url(QWebEngineDownloadRequest* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QWebEngineFileSystemAccessRequest* PythonQtWrapper_QWebEngineFileSystemAccessRequest::new_QWebEngineFileSystemAccessRequest(const QWebEngineFileSystemAccessRequest&  other)
{ 
return new QWebEngineFileSystemAccessRequest(other); }

void PythonQtWrapper_QWebEngineFileSystemAccessRequest::accept(QWebEngineFileSystemAccessRequest* theWrappedObject)
{
  ( theWrappedObject->accept());
}

QWebEngineFileSystemAccessRequest::AccessFlags  PythonQtWrapper_QWebEngineFileSystemAccessRequest::accessFlags(QWebEngineFileSystemAccessRequest* theWrappedObject) const
{
  return ( theWrappedObject->accessFlags());
}

QUrl  PythonQtWrapper_QWebEngineFileSystemAccessRequest::filePath(QWebEngineFileSystemAccessRequest* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}

QWebEngineFileSystemAccessRequest::HandleType  PythonQtWrapper_QWebEngineFileSystemAccessRequest::handleType(QWebEngineFileSystemAccessRequest* theWrappedObject) const
{
  return ( theWrappedObject->handleType());
}

bool  PythonQtWrapper_QWebEngineFileSystemAccessRequest::__ne__(QWebEngineFileSystemAccessRequest* theWrappedObject, const QWebEngineFileSystemAccessRequest&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QWebEngineFileSystemAccessRequest*  PythonQtWrapper_QWebEngineFileSystemAccessRequest::operator_assign(QWebEngineFileSystemAccessRequest* theWrappedObject, const QWebEngineFileSystemAccessRequest&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QWebEngineFileSystemAccessRequest::__eq__(QWebEngineFileSystemAccessRequest* theWrappedObject, const QWebEngineFileSystemAccessRequest&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

QUrl  PythonQtWrapper_QWebEngineFileSystemAccessRequest::origin(QWebEngineFileSystemAccessRequest* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QWebEngineFileSystemAccessRequest::reject(QWebEngineFileSystemAccessRequest* theWrappedObject)
{
  ( theWrappedObject->reject());
}

void PythonQtWrapper_QWebEngineFileSystemAccessRequest::swap(QWebEngineFileSystemAccessRequest* theWrappedObject, QWebEngineFileSystemAccessRequest&  other)
{
  ( theWrappedObject->swap(other));
}



QWebEngineFindTextResult* PythonQtWrapper_QWebEngineFindTextResult::new_QWebEngineFindTextResult()
{ 
return new QWebEngineFindTextResult(); }

QWebEngineFindTextResult* PythonQtWrapper_QWebEngineFindTextResult::new_QWebEngineFindTextResult(const QWebEngineFindTextResult&  other)
{ 
return new QWebEngineFindTextResult(other); }

int  PythonQtWrapper_QWebEngineFindTextResult::activeMatch(QWebEngineFindTextResult* theWrappedObject) const
{
  return ( theWrappedObject->activeMatch());
}

int  PythonQtWrapper_QWebEngineFindTextResult::numberOfMatches(QWebEngineFindTextResult* theWrappedObject) const
{
  return ( theWrappedObject->numberOfMatches());
}

QWebEngineFindTextResult*  PythonQtWrapper_QWebEngineFindTextResult::operator_assign(QWebEngineFindTextResult* theWrappedObject, const QWebEngineFindTextResult&  other)
{
  return &( (*theWrappedObject)= other);
}



QWebEngineFullScreenRequest* PythonQtWrapper_QWebEngineFullScreenRequest::new_QWebEngineFullScreenRequest(const QWebEngineFullScreenRequest&  other)
{ 
return new QWebEngineFullScreenRequest(other); }

void PythonQtWrapper_QWebEngineFullScreenRequest::accept(QWebEngineFullScreenRequest* theWrappedObject)
{
  ( theWrappedObject->accept());
}

QWebEngineFullScreenRequest*  PythonQtWrapper_QWebEngineFullScreenRequest::operator_assign(QWebEngineFullScreenRequest* theWrappedObject, const QWebEngineFullScreenRequest&  other)
{
  return &( (*theWrappedObject)= other);
}

QUrl  PythonQtWrapper_QWebEngineFullScreenRequest::origin(QWebEngineFullScreenRequest* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QWebEngineFullScreenRequest::reject(QWebEngineFullScreenRequest* theWrappedObject)
{
  ( theWrappedObject->reject());
}

bool  PythonQtWrapper_QWebEngineFullScreenRequest::toggleOn(QWebEngineFullScreenRequest* theWrappedObject) const
{
  return ( theWrappedObject->toggleOn());
}



void PythonQtWrapper_QWebEngineHistory::back(QWebEngineHistory* theWrappedObject)
{
  ( theWrappedObject->back());
}

QWebEngineHistoryItem  PythonQtWrapper_QWebEngineHistory::backItem(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->backItem());
}

QList<QWebEngineHistoryItem >  PythonQtWrapper_QWebEngineHistory::backItems(QWebEngineHistory* theWrappedObject, int  maxItems) const
{
  return ( theWrappedObject->backItems(maxItems));
}

QWebEngineHistoryModel*  PythonQtWrapper_QWebEngineHistory::backItemsModel(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->backItemsModel());
}

bool  PythonQtWrapper_QWebEngineHistory::canGoBack(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->canGoBack());
}

bool  PythonQtWrapper_QWebEngineHistory::canGoForward(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->canGoForward());
}

void PythonQtWrapper_QWebEngineHistory::clear(QWebEngineHistory* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QWebEngineHistory::count(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QWebEngineHistoryItem  PythonQtWrapper_QWebEngineHistory::currentItem(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->currentItem());
}

int  PythonQtWrapper_QWebEngineHistory::currentItemIndex(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->currentItemIndex());
}

void PythonQtWrapper_QWebEngineHistory::forward(QWebEngineHistory* theWrappedObject)
{
  ( theWrappedObject->forward());
}

QWebEngineHistoryItem  PythonQtWrapper_QWebEngineHistory::forwardItem(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->forwardItem());
}

QList<QWebEngineHistoryItem >  PythonQtWrapper_QWebEngineHistory::forwardItems(QWebEngineHistory* theWrappedObject, int  maxItems) const
{
  return ( theWrappedObject->forwardItems(maxItems));
}

QWebEngineHistoryModel*  PythonQtWrapper_QWebEngineHistory::forwardItemsModel(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->forwardItemsModel());
}

void PythonQtWrapper_QWebEngineHistory::goToItem(QWebEngineHistory* theWrappedObject, const QWebEngineHistoryItem&  item)
{
  ( theWrappedObject->goToItem(item));
}

QWebEngineHistoryItem  PythonQtWrapper_QWebEngineHistory::itemAt(QWebEngineHistory* theWrappedObject, int  i) const
{
  return ( theWrappedObject->itemAt(i));
}

QList<QWebEngineHistoryItem >  PythonQtWrapper_QWebEngineHistory::items(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->items());
}

QWebEngineHistoryModel*  PythonQtWrapper_QWebEngineHistory::itemsModel(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->itemsModel());
}

void PythonQtWrapper_QWebEngineHistory::writeTo(QWebEngineHistory* theWrappedObject, QDataStream&  stream)
{
  stream <<  (*theWrappedObject);
}

void PythonQtWrapper_QWebEngineHistory::readFrom(QWebEngineHistory* theWrappedObject, QDataStream&  stream)
{
  stream >>  (*theWrappedObject);
}



QWebEngineHistoryItem* PythonQtWrapper_QWebEngineHistoryItem::new_QWebEngineHistoryItem(const QWebEngineHistoryItem&  other)
{ 
return new QWebEngineHistoryItem(other); }

QUrl  PythonQtWrapper_QWebEngineHistoryItem::iconUrl(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->iconUrl());
}

bool  PythonQtWrapper_QWebEngineHistoryItem::isValid(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QDateTime  PythonQtWrapper_QWebEngineHistoryItem::lastVisited(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->lastVisited());
}

QWebEngineHistoryItem*  PythonQtWrapper_QWebEngineHistoryItem::operator_assign(QWebEngineHistoryItem* theWrappedObject, const QWebEngineHistoryItem&  other)
{
  return &( (*theWrappedObject)= other);
}

QUrl  PythonQtWrapper_QWebEngineHistoryItem::originalUrl(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->originalUrl());
}

void PythonQtWrapper_QWebEngineHistoryItem::swap(QWebEngineHistoryItem* theWrappedObject, QWebEngineHistoryItem&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QWebEngineHistoryItem::title(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

QUrl  PythonQtWrapper_QWebEngineHistoryItem::url(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QVariant  PythonQtWrapper_QWebEngineHistoryModel::data(QWebEngineHistoryModel* theWrappedObject, const QModelIndex&  index, int  role) const
{
  return ( theWrappedObject->data(index, role));
}

void PythonQtWrapper_QWebEngineHistoryModel::reset(QWebEngineHistoryModel* theWrappedObject)
{
  ( theWrappedObject->reset());
}

QHash<int , QByteArray >  PythonQtWrapper_QWebEngineHistoryModel::roleNames(QWebEngineHistoryModel* theWrappedObject) const
{
  return ( theWrappedObject->roleNames());
}

int  PythonQtWrapper_QWebEngineHistoryModel::rowCount(QWebEngineHistoryModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( theWrappedObject->rowCount(parent));
}



QWebEngineHttpRequest* PythonQtWrapper_QWebEngineHttpRequest::new_QWebEngineHttpRequest(const QUrl&  url, const QWebEngineHttpRequest::Method&  method)
{ 
return new QWebEngineHttpRequest(url, method); }

QWebEngineHttpRequest* PythonQtWrapper_QWebEngineHttpRequest::new_QWebEngineHttpRequest(const QWebEngineHttpRequest&  other)
{ 
return new QWebEngineHttpRequest(other); }

bool  PythonQtWrapper_QWebEngineHttpRequest::hasHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->hasHeader(headerName));
}

QByteArray  PythonQtWrapper_QWebEngineHttpRequest::header(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->header(headerName));
}

QList<QByteArray >  PythonQtWrapper_QWebEngineHttpRequest::headers(QWebEngineHttpRequest* theWrappedObject) const
{
  return ( theWrappedObject->headers());
}

QWebEngineHttpRequest::Method  PythonQtWrapper_QWebEngineHttpRequest::method(QWebEngineHttpRequest* theWrappedObject) const
{
  return ( theWrappedObject->method());
}

bool  PythonQtWrapper_QWebEngineHttpRequest::__ne__(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QWebEngineHttpRequest*  PythonQtWrapper_QWebEngineHttpRequest::operator_assign(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QWebEngineHttpRequest::__eq__(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other) const
{
  return ( (*theWrappedObject)== other);
}

QByteArray  PythonQtWrapper_QWebEngineHttpRequest::postData(QWebEngineHttpRequest* theWrappedObject) const
{
  return ( theWrappedObject->postData());
}

QWebEngineHttpRequest  PythonQtWrapper_QWebEngineHttpRequest::static_QWebEngineHttpRequest_postRequest(const QUrl&  url, const QMap<QString , QString >&  postData)
{
  return (QWebEngineHttpRequest::postRequest(url, postData));
}

void PythonQtWrapper_QWebEngineHttpRequest::setHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value)
{
  ( theWrappedObject->setHeader(headerName, value));
}

void PythonQtWrapper_QWebEngineHttpRequest::setMethod(QWebEngineHttpRequest* theWrappedObject, QWebEngineHttpRequest::Method  method)
{
  ( theWrappedObject->setMethod(method));
}

void PythonQtWrapper_QWebEngineHttpRequest::setPostData(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  postData)
{
  ( theWrappedObject->setPostData(postData));
}

void PythonQtWrapper_QWebEngineHttpRequest::setUrl(QWebEngineHttpRequest* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QWebEngineHttpRequest::swap(QWebEngineHttpRequest* theWrappedObject, QWebEngineHttpRequest&  other)
{
  ( theWrappedObject->swap(other));
}

void PythonQtWrapper_QWebEngineHttpRequest::unsetHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName)
{
  ( theWrappedObject->unsetHeader(headerName));
}

QUrl  PythonQtWrapper_QWebEngineHttpRequest::url(QWebEngineHttpRequest* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QWebEngineLoadingInfo* PythonQtWrapper_QWebEngineLoadingInfo::new_QWebEngineLoadingInfo(const QWebEngineLoadingInfo&  other)
{ 
return new QWebEngineLoadingInfo(other); }

int  PythonQtWrapper_QWebEngineLoadingInfo::errorCode(QWebEngineLoadingInfo* theWrappedObject) const
{
  return ( theWrappedObject->errorCode());
}

QWebEngineLoadingInfo::ErrorDomain  PythonQtWrapper_QWebEngineLoadingInfo::errorDomain(QWebEngineLoadingInfo* theWrappedObject) const
{
  return ( theWrappedObject->errorDomain());
}

QString  PythonQtWrapper_QWebEngineLoadingInfo::errorString(QWebEngineLoadingInfo* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QWebEngineLoadingInfo::isErrorPage(QWebEngineLoadingInfo* theWrappedObject) const
{
  return ( theWrappedObject->isErrorPage());
}

QWebEngineLoadingInfo*  PythonQtWrapper_QWebEngineLoadingInfo::operator_assign(QWebEngineLoadingInfo* theWrappedObject, const QWebEngineLoadingInfo&  other)
{
  return &( (*theWrappedObject)= other);
}

QMultiMap<QByteArray , QByteArray >  PythonQtWrapper_QWebEngineLoadingInfo::responseHeaders(QWebEngineLoadingInfo* theWrappedObject) const
{
  return ( theWrappedObject->responseHeaders());
}

QWebEngineLoadingInfo::LoadStatus  PythonQtWrapper_QWebEngineLoadingInfo::status(QWebEngineLoadingInfo* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

QUrl  PythonQtWrapper_QWebEngineLoadingInfo::url(QWebEngineLoadingInfo* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



void PythonQtWrapper_QWebEngineNavigationRequest::accept(QWebEngineNavigationRequest* theWrappedObject)
{
  ( theWrappedObject->accept());
}

bool  PythonQtWrapper_QWebEngineNavigationRequest::isMainFrame(QWebEngineNavigationRequest* theWrappedObject) const
{
  return ( theWrappedObject->isMainFrame());
}

QWebEngineNavigationRequest::NavigationType  PythonQtWrapper_QWebEngineNavigationRequest::navigationType(QWebEngineNavigationRequest* theWrappedObject) const
{
  return ( theWrappedObject->navigationType());
}

void PythonQtWrapper_QWebEngineNavigationRequest::reject(QWebEngineNavigationRequest* theWrappedObject)
{
  ( theWrappedObject->reject());
}

QUrl  PythonQtWrapper_QWebEngineNavigationRequest::url(QWebEngineNavigationRequest* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QWebEngineNewWindowRequest::DestinationType  PythonQtWrapper_QWebEngineNewWindowRequest::destination(QWebEngineNewWindowRequest* theWrappedObject) const
{
  return ( theWrappedObject->destination());
}

bool  PythonQtWrapper_QWebEngineNewWindowRequest::isUserInitiated(QWebEngineNewWindowRequest* theWrappedObject) const
{
  return ( theWrappedObject->isUserInitiated());
}

void PythonQtWrapper_QWebEngineNewWindowRequest::openIn(QWebEngineNewWindowRequest* theWrappedObject, QWebEnginePage*  arg__1)
{
  ( theWrappedObject->openIn(arg__1));
}

QRect  PythonQtWrapper_QWebEngineNewWindowRequest::requestedGeometry(QWebEngineNewWindowRequest* theWrappedObject) const
{
  return ( theWrappedObject->requestedGeometry());
}

QUrl  PythonQtWrapper_QWebEngineNewWindowRequest::requestedUrl(QWebEngineNewWindowRequest* theWrappedObject) const
{
  return ( theWrappedObject->requestedUrl());
}



Qt::LayoutDirection  PythonQtWrapper_QWebEngineNotification::direction(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->direction());
}

QImage  PythonQtWrapper_QWebEngineNotification::icon(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

QString  PythonQtWrapper_QWebEngineNotification::language(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->language());
}

bool  PythonQtWrapper_QWebEngineNotification::matches(QWebEngineNotification* theWrappedObject, const QWebEngineNotification*  other) const
{
  return ( theWrappedObject->matches(other));
}

QString  PythonQtWrapper_QWebEngineNotification::message(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->message());
}

QUrl  PythonQtWrapper_QWebEngineNotification::origin(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

QString  PythonQtWrapper_QWebEngineNotification::tag(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->tag());
}

QString  PythonQtWrapper_QWebEngineNotification::title(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->title());
}



PythonQtShell_QWebEnginePage::~PythonQtShell_QWebEnginePage() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QWebEnginePage::acceptNavigationRequest(const QUrl&  url0, QWebEnginePage::NavigationType  type1, bool  isMainFrame2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("acceptNavigationRequest");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QUrl&" , "QWebEnginePage::NavigationType" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&url0, (void*)&type1, (void*)&isMainFrame2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("acceptNavigationRequest", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEnginePage::acceptNavigationRequest(url0, type1, isMainFrame2);
}
void PythonQtShell_QWebEnginePage::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::childEvent(event0);
}
QStringList  PythonQtShell_QWebEnginePage::chooseFiles(QWebEnginePage::FileSelectionMode  mode0, const QStringList&  oldFiles1, const QStringList&  acceptedMimeTypes2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("chooseFiles");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList" , "QWebEnginePage::FileSelectionMode" , "const QStringList&" , "const QStringList&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QStringList returnValue{};
      void* args[4] = {nullptr, (void*)&mode0, (void*)&oldFiles1, (void*)&acceptedMimeTypes2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("chooseFiles", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEnginePage::chooseFiles(mode0, oldFiles1, acceptedMimeTypes2);
}
QWebEnginePage*  PythonQtShell_QWebEnginePage::createWindow(QWebEnginePage::WebWindowType  type0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createWindow");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWebEnginePage*" , "QWebEnginePage::WebWindowType"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QWebEnginePage* returnValue{};
      void* args[2] = {nullptr, (void*)&type0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createWindow", methodInfo, result);
          } else {
            returnValue = *((QWebEnginePage**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEnginePage::createWindow(type0);
}
void PythonQtShell_QWebEnginePage::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::customEvent(event0);
}
bool  PythonQtShell_QWebEnginePage::event(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEnginePage::event(arg__1);
}
bool  PythonQtShell_QWebEnginePage::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEnginePage::eventFilter(watched0, event1);
}
void PythonQtShell_QWebEnginePage::javaScriptAlert(const QUrl&  securityOrigin0, const QString&  msg1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("javaScriptAlert");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QUrl&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&securityOrigin0, (void*)&msg1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::javaScriptAlert(securityOrigin0, msg1);
}
bool  PythonQtShell_QWebEnginePage::javaScriptConfirm(const QUrl&  securityOrigin0, const QString&  msg1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("javaScriptConfirm");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QUrl&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&securityOrigin0, (void*)&msg1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("javaScriptConfirm", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEnginePage::javaScriptConfirm(securityOrigin0, msg1);
}
void PythonQtShell_QWebEnginePage::javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel  level0, const QString&  message1, int  lineNumber2, const QString&  sourceID3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("javaScriptConsoleMessage");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWebEnginePage::JavaScriptConsoleMessageLevel" , "const QString&" , "int" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      void* args[5] = {nullptr, (void*)&level0, (void*)&message1, (void*)&lineNumber2, (void*)&sourceID3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::javaScriptConsoleMessage(level0, message1, lineNumber2, sourceID3);
}
bool  PythonQtShell_QWebEnginePage::javaScriptPrompt(const QUrl&  securityOrigin0, const QString&  msg1, const QString&  defaultValue2, QString*  result3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("javaScriptPrompt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QUrl&" , "const QString&" , "const QString&" , "QString*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue{};
      void* args[5] = {nullptr, (void*)&securityOrigin0, (void*)&msg1, (void*)&defaultValue2, (void*)&result3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("javaScriptPrompt", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEnginePage::javaScriptPrompt(securityOrigin0, msg1, defaultValue2, result3);
}
void PythonQtShell_QWebEnginePage::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::timerEvent(event0);
}
void PythonQtShell_QWebEnginePage::triggerAction(QWebEnginePage::WebAction  action0, bool  checked1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("triggerAction");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWebEnginePage::WebAction" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&action0, (void*)&checked1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::triggerAction(action0, checked1);
}
QWebEnginePage* PythonQtWrapper_QWebEnginePage::new_QWebEnginePage(QObject*  parent)
{ 
return new PythonQtShell_QWebEnginePage(parent); }

QWebEnginePage* PythonQtWrapper_QWebEnginePage::new_QWebEnginePage(QWebEngineProfile*  profile, QObject*  parent)
{ 
return new PythonQtShell_QWebEnginePage(profile, parent); }

const QMetaObject* PythonQtShell_QWebEnginePage::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebEnginePage::staticMetaObject);
  } else {
    return &QWebEnginePage::staticMetaObject;
  }
}
int PythonQtShell_QWebEnginePage::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebEnginePage::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QWebEnginePage::acceptAsNewWindow(QWebEnginePage* theWrappedObject, QWebEngineNewWindowRequest&  request)
{
  ( theWrappedObject->acceptAsNewWindow(request));
}

bool  PythonQtWrapper_QWebEnginePage::acceptNavigationRequest(QWebEnginePage* theWrappedObject, const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame)
{
  return ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_acceptNavigationRequest(url, type, isMainFrame));
}

QAction*  PythonQtWrapper_QWebEnginePage::action(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action) const
{
  return ( theWrappedObject->action(action));
}

QColor  PythonQtWrapper_QWebEnginePage::backgroundColor(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->backgroundColor());
}

QStringList  PythonQtWrapper_QWebEnginePage::chooseFiles(QWebEnginePage* theWrappedObject, QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes)
{
  return ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_chooseFiles(mode, oldFiles, acceptedMimeTypes));
}

QSizeF  PythonQtWrapper_QWebEnginePage::contentsSize(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->contentsSize());
}

QWebEnginePage*  PythonQtWrapper_QWebEnginePage::createWindow(QWebEnginePage* theWrappedObject, QWebEnginePage::WebWindowType  type)
{
  return ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_createWindow(type));
}

QString  PythonQtWrapper_QWebEnginePage::devToolsId(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->devToolsId());
}

QWebEnginePage*  PythonQtWrapper_QWebEnginePage::devToolsPage(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->devToolsPage());
}

void PythonQtWrapper_QWebEnginePage::download(QWebEnginePage* theWrappedObject, const QUrl&  url, const QString&  filename)
{
  ( theWrappedObject->download(url, filename));
}

bool  PythonQtWrapper_QWebEnginePage::hasSelection(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->hasSelection());
}

QWebEngineHistory*  PythonQtWrapper_QWebEnginePage::history(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->history());
}

QIcon  PythonQtWrapper_QWebEnginePage::icon(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

QUrl  PythonQtWrapper_QWebEnginePage::iconUrl(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->iconUrl());
}

QWebEnginePage*  PythonQtWrapper_QWebEnginePage::inspectedPage(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->inspectedPage());
}

bool  PythonQtWrapper_QWebEnginePage::isAudioMuted(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->isAudioMuted());
}

bool  PythonQtWrapper_QWebEnginePage::isLoading(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->isLoading());
}

bool  PythonQtWrapper_QWebEnginePage::isVisible(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->isVisible());
}

void PythonQtWrapper_QWebEnginePage::javaScriptAlert(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg)
{
  ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_javaScriptAlert(securityOrigin, msg));
}

bool  PythonQtWrapper_QWebEnginePage::javaScriptConfirm(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg)
{
  return ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_javaScriptConfirm(securityOrigin, msg));
}

void PythonQtWrapper_QWebEnginePage::javaScriptConsoleMessage(QWebEnginePage* theWrappedObject, QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID)
{
  ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_javaScriptConsoleMessage(level, message, lineNumber, sourceID));
}

bool  PythonQtWrapper_QWebEnginePage::javaScriptPrompt(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result)
{
  return ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_javaScriptPrompt(securityOrigin, msg, defaultValue, result));
}

QWebEnginePage::LifecycleState  PythonQtWrapper_QWebEnginePage::lifecycleState(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->lifecycleState());
}

void PythonQtWrapper_QWebEnginePage::load(QWebEnginePage* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->load(url));
}

void PythonQtWrapper_QWebEnginePage::load(QWebEnginePage* theWrappedObject, const QWebEngineHttpRequest&  request)
{
  ( theWrappedObject->load(request));
}

void PythonQtWrapper_QWebEnginePage::printToPdf(QWebEnginePage* theWrappedObject, const QString&  filePath, const QPageLayout&  layout, const QPageRanges&  ranges)
{
  ( theWrappedObject->printToPdf(filePath, layout, ranges));
}

QWebEngineProfile*  PythonQtWrapper_QWebEnginePage::profile(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->profile());
}

bool  PythonQtWrapper_QWebEnginePage::recentlyAudible(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->recentlyAudible());
}

QWebEnginePage::LifecycleState  PythonQtWrapper_QWebEnginePage::recommendedState(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->recommendedState());
}

qint64  PythonQtWrapper_QWebEnginePage::renderProcessPid(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->renderProcessPid());
}

void PythonQtWrapper_QWebEnginePage::replaceMisspelledWord(QWebEnginePage* theWrappedObject, const QString&  replacement)
{
  ( theWrappedObject->replaceMisspelledWord(replacement));
}

QUrl  PythonQtWrapper_QWebEnginePage::requestedUrl(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->requestedUrl());
}

void PythonQtWrapper_QWebEnginePage::save(QWebEnginePage* theWrappedObject, const QString&  filePath, QWebEngineDownloadRequest::SavePageFormat  format) const
{
  ( theWrappedObject->save(filePath, format));
}

QWebEngineScriptCollection*  PythonQtWrapper_QWebEnginePage::scripts(QWebEnginePage* theWrappedObject)
{
  return &( theWrappedObject->scripts());
}

QPointF  PythonQtWrapper_QWebEnginePage::scrollPosition(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->scrollPosition());
}

QString  PythonQtWrapper_QWebEnginePage::selectedText(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

void PythonQtWrapper_QWebEnginePage::setAudioMuted(QWebEnginePage* theWrappedObject, bool  muted)
{
  ( theWrappedObject->setAudioMuted(muted));
}

void PythonQtWrapper_QWebEnginePage::setBackgroundColor(QWebEnginePage* theWrappedObject, const QColor&  color)
{
  ( theWrappedObject->setBackgroundColor(color));
}

void PythonQtWrapper_QWebEnginePage::setContent(QWebEnginePage* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
  ( theWrappedObject->setContent(data, mimeType, baseUrl));
}

void PythonQtWrapper_QWebEnginePage::setDevToolsPage(QWebEnginePage* theWrappedObject, QWebEnginePage*  page)
{
  ( theWrappedObject->setDevToolsPage(page));
}

void PythonQtWrapper_QWebEnginePage::setFeaturePermission(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, QWebEnginePage::Feature  feature, QWebEnginePage::PermissionPolicy  policy)
{
  ( theWrappedObject->setFeaturePermission(securityOrigin, feature, policy));
}

void PythonQtWrapper_QWebEnginePage::setHtml(QWebEnginePage* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
  ( theWrappedObject->setHtml(html, baseUrl));
}

void PythonQtWrapper_QWebEnginePage::setInspectedPage(QWebEnginePage* theWrappedObject, QWebEnginePage*  page)
{
  ( theWrappedObject->setInspectedPage(page));
}

void PythonQtWrapper_QWebEnginePage::setLifecycleState(QWebEnginePage* theWrappedObject, QWebEnginePage::LifecycleState  state)
{
  ( theWrappedObject->setLifecycleState(state));
}

void PythonQtWrapper_QWebEnginePage::setUrl(QWebEnginePage* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QWebEnginePage::setUrlRequestInterceptor(QWebEnginePage* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor)
{
  ( theWrappedObject->setUrlRequestInterceptor(interceptor));
}

void PythonQtWrapper_QWebEnginePage::setVisible(QWebEnginePage* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setVisible(visible));
}

void PythonQtWrapper_QWebEnginePage::setWebChannel(QWebEnginePage* theWrappedObject, QWebChannel*  arg__1, unsigned int  worldId)
{
  ( theWrappedObject->setWebChannel(arg__1, worldId));
}

void PythonQtWrapper_QWebEnginePage::setZoomFactor(QWebEnginePage* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->setZoomFactor(factor));
}

QWebEngineSettings*  PythonQtWrapper_QWebEnginePage::settings(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->settings());
}

QString  PythonQtWrapper_QWebEnginePage::title(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

void PythonQtWrapper_QWebEnginePage::triggerAction(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked)
{
  ( theWrappedObject->triggerAction(action, checked));
}

QUrl  PythonQtWrapper_QWebEnginePage::url(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

QWebChannel*  PythonQtWrapper_QWebEnginePage::webChannel(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->webChannel());
}

qreal  PythonQtWrapper_QWebEnginePage::zoomFactor(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->zoomFactor());
}



PythonQtShell_QWebEngineProfile::~PythonQtShell_QWebEngineProfile() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebEngineProfile::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineProfile::childEvent(event0);
}
void PythonQtShell_QWebEngineProfile::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineProfile::customEvent(event0);
}
bool  PythonQtShell_QWebEngineProfile::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEngineProfile::event(event0);
}
bool  PythonQtShell_QWebEngineProfile::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEngineProfile::eventFilter(watched0, event1);
}
void PythonQtShell_QWebEngineProfile::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineProfile::timerEvent(event0);
}
QWebEngineProfile* PythonQtWrapper_QWebEngineProfile::new_QWebEngineProfile(QObject*  parent)
{ 
return new PythonQtShell_QWebEngineProfile(parent); }

QWebEngineProfile* PythonQtWrapper_QWebEngineProfile::new_QWebEngineProfile(const QString&  name, QObject*  parent)
{ 
return new PythonQtShell_QWebEngineProfile(name, parent); }

const QMetaObject* PythonQtShell_QWebEngineProfile::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebEngineProfile::staticMetaObject);
  } else {
    return &QWebEngineProfile::staticMetaObject;
  }
}
int PythonQtShell_QWebEngineProfile::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebEngineProfile::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QWebEngineProfile::cachePath(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->cachePath());
}

void PythonQtWrapper_QWebEngineProfile::clearAllVisitedLinks(QWebEngineProfile* theWrappedObject)
{
  ( theWrappedObject->clearAllVisitedLinks());
}

void PythonQtWrapper_QWebEngineProfile::clearHttpCache(QWebEngineProfile* theWrappedObject)
{
  ( theWrappedObject->clearHttpCache());
}

void PythonQtWrapper_QWebEngineProfile::clearVisitedLinks(QWebEngineProfile* theWrappedObject, const QList<QUrl >&  urls)
{
  ( theWrappedObject->clearVisitedLinks(urls));
}

QWebEngineClientCertificateStore*  PythonQtWrapper_QWebEngineProfile::clientCertificateStore(QWebEngineProfile* theWrappedObject)
{
  return ( theWrappedObject->clientCertificateStore());
}

QWebEngineCookieStore*  PythonQtWrapper_QWebEngineProfile::cookieStore(QWebEngineProfile* theWrappedObject)
{
  return ( theWrappedObject->cookieStore());
}

QWebEngineProfile*  PythonQtWrapper_QWebEngineProfile::static_QWebEngineProfile_defaultProfile()
{
  return (QWebEngineProfile::defaultProfile());
}

QString  PythonQtWrapper_QWebEngineProfile::downloadPath(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->downloadPath());
}

QString  PythonQtWrapper_QWebEngineProfile::httpAcceptLanguage(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->httpAcceptLanguage());
}

int  PythonQtWrapper_QWebEngineProfile::httpCacheMaximumSize(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->httpCacheMaximumSize());
}

QWebEngineProfile::HttpCacheType  PythonQtWrapper_QWebEngineProfile::httpCacheType(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->httpCacheType());
}

QString  PythonQtWrapper_QWebEngineProfile::httpUserAgent(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->httpUserAgent());
}

void PythonQtWrapper_QWebEngineProfile::installUrlSchemeHandler(QWebEngineProfile* theWrappedObject, const QByteArray&  scheme, QWebEngineUrlSchemeHandler*  arg__2)
{
  ( theWrappedObject->installUrlSchemeHandler(scheme, arg__2));
}

bool  PythonQtWrapper_QWebEngineProfile::isOffTheRecord(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->isOffTheRecord());
}

bool  PythonQtWrapper_QWebEngineProfile::isPushServiceEnabled(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->isPushServiceEnabled());
}

bool  PythonQtWrapper_QWebEngineProfile::isSpellCheckEnabled(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->isSpellCheckEnabled());
}

QWebEngineProfile::PersistentCookiesPolicy  PythonQtWrapper_QWebEngineProfile::persistentCookiesPolicy(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->persistentCookiesPolicy());
}

QString  PythonQtWrapper_QWebEngineProfile::persistentStoragePath(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->persistentStoragePath());
}

void PythonQtWrapper_QWebEngineProfile::removeAllUrlSchemeHandlers(QWebEngineProfile* theWrappedObject)
{
  ( theWrappedObject->removeAllUrlSchemeHandlers());
}

void PythonQtWrapper_QWebEngineProfile::removeUrlScheme(QWebEngineProfile* theWrappedObject, const QByteArray&  scheme)
{
  ( theWrappedObject->removeUrlScheme(scheme));
}

void PythonQtWrapper_QWebEngineProfile::removeUrlSchemeHandler(QWebEngineProfile* theWrappedObject, QWebEngineUrlSchemeHandler*  arg__1)
{
  ( theWrappedObject->removeUrlSchemeHandler(arg__1));
}

QWebEngineScriptCollection*  PythonQtWrapper_QWebEngineProfile::scripts(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->scripts());
}

void PythonQtWrapper_QWebEngineProfile::setCachePath(QWebEngineProfile* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setCachePath(path));
}

void PythonQtWrapper_QWebEngineProfile::setDownloadPath(QWebEngineProfile* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setDownloadPath(path));
}

void PythonQtWrapper_QWebEngineProfile::setHttpAcceptLanguage(QWebEngineProfile* theWrappedObject, const QString&  httpAcceptLanguage)
{
  ( theWrappedObject->setHttpAcceptLanguage(httpAcceptLanguage));
}

void PythonQtWrapper_QWebEngineProfile::setHttpCacheMaximumSize(QWebEngineProfile* theWrappedObject, int  maxSize)
{
  ( theWrappedObject->setHttpCacheMaximumSize(maxSize));
}

void PythonQtWrapper_QWebEngineProfile::setHttpCacheType(QWebEngineProfile* theWrappedObject, QWebEngineProfile::HttpCacheType  arg__1)
{
  ( theWrappedObject->setHttpCacheType(arg__1));
}

void PythonQtWrapper_QWebEngineProfile::setHttpUserAgent(QWebEngineProfile* theWrappedObject, const QString&  userAgent)
{
  ( theWrappedObject->setHttpUserAgent(userAgent));
}

void PythonQtWrapper_QWebEngineProfile::setPersistentCookiesPolicy(QWebEngineProfile* theWrappedObject, QWebEngineProfile::PersistentCookiesPolicy  arg__1)
{
  ( theWrappedObject->setPersistentCookiesPolicy(arg__1));
}

void PythonQtWrapper_QWebEngineProfile::setPersistentStoragePath(QWebEngineProfile* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setPersistentStoragePath(path));
}

void PythonQtWrapper_QWebEngineProfile::setPushServiceEnabled(QWebEngineProfile* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setPushServiceEnabled(enabled));
}

void PythonQtWrapper_QWebEngineProfile::setSpellCheckEnabled(QWebEngineProfile* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setSpellCheckEnabled(enabled));
}

void PythonQtWrapper_QWebEngineProfile::setSpellCheckLanguages(QWebEngineProfile* theWrappedObject, const QStringList&  languages)
{
  ( theWrappedObject->setSpellCheckLanguages(languages));
}

void PythonQtWrapper_QWebEngineProfile::setUrlRequestInterceptor(QWebEngineProfile* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor)
{
  ( theWrappedObject->setUrlRequestInterceptor(interceptor));
}

QWebEngineSettings*  PythonQtWrapper_QWebEngineProfile::settings(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->settings());
}

QStringList  PythonQtWrapper_QWebEngineProfile::spellCheckLanguages(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->spellCheckLanguages());
}

QString  PythonQtWrapper_QWebEngineProfile::storageName(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->storageName());
}

const QWebEngineUrlSchemeHandler*  PythonQtWrapper_QWebEngineProfile::urlSchemeHandler(QWebEngineProfile* theWrappedObject, const QByteArray&  arg__1) const
{
  return ( theWrappedObject->urlSchemeHandler(arg__1));
}

bool  PythonQtWrapper_QWebEngineProfile::visitedLinksContainsUrl(QWebEngineProfile* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->visitedLinksContainsUrl(url));
}



QWebEngineQuotaRequest* PythonQtWrapper_QWebEngineQuotaRequest::new_QWebEngineQuotaRequest()
{ 
return new QWebEngineQuotaRequest(); }

void PythonQtWrapper_QWebEngineQuotaRequest::accept(QWebEngineQuotaRequest* theWrappedObject)
{
  ( theWrappedObject->accept());
}

bool  PythonQtWrapper_QWebEngineQuotaRequest::__ne__(QWebEngineQuotaRequest* theWrappedObject, const QWebEngineQuotaRequest&  arg__1) const
{
  return ( (*theWrappedObject)!= arg__1);
}

bool  PythonQtWrapper_QWebEngineQuotaRequest::__eq__(QWebEngineQuotaRequest* theWrappedObject, const QWebEngineQuotaRequest&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

QUrl  PythonQtWrapper_QWebEngineQuotaRequest::origin(QWebEngineQuotaRequest* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QWebEngineQuotaRequest::reject(QWebEngineQuotaRequest* theWrappedObject)
{
  ( theWrappedObject->reject());
}

qint64  PythonQtWrapper_QWebEngineQuotaRequest::requestedSize(QWebEngineQuotaRequest* theWrappedObject) const
{
  return ( theWrappedObject->requestedSize());
}



QWebEngineRegisterProtocolHandlerRequest* PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::new_QWebEngineRegisterProtocolHandlerRequest()
{ 
return new QWebEngineRegisterProtocolHandlerRequest(); }

void PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::accept(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject)
{
  ( theWrappedObject->accept());
}

bool  PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::__ne__(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject, const QWebEngineRegisterProtocolHandlerRequest&  that) const
{
  return ( (*theWrappedObject)!= that);
}

bool  PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::__eq__(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject, const QWebEngineRegisterProtocolHandlerRequest&  that) const
{
  return ( (*theWrappedObject)== that);
}

QUrl  PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::origin(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::reject(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject)
{
  ( theWrappedObject->reject());
}

QString  PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::scheme(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject) const
{
  return ( theWrappedObject->scheme());
}



QWebEngineScript* PythonQtWrapper_QWebEngineScript::new_QWebEngineScript()
{ 
return new QWebEngineScript(); }

QWebEngineScript* PythonQtWrapper_QWebEngineScript::new_QWebEngineScript(const QWebEngineScript&  other)
{ 
return new QWebEngineScript(other); }

QWebEngineScript::InjectionPoint  PythonQtWrapper_QWebEngineScript::injectionPoint(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->injectionPoint());
}

QString  PythonQtWrapper_QWebEngineScript::name(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QWebEngineScript::__ne__(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QWebEngineScript*  PythonQtWrapper_QWebEngineScript::operator_assign(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QWebEngineScript::__eq__(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QWebEngineScript::runsOnSubFrames(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->runsOnSubFrames());
}

void PythonQtWrapper_QWebEngineScript::setInjectionPoint(QWebEngineScript* theWrappedObject, QWebEngineScript::InjectionPoint  arg__1)
{
  ( theWrappedObject->setInjectionPoint(arg__1));
}

void PythonQtWrapper_QWebEngineScript::setName(QWebEngineScript* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setName(arg__1));
}

void PythonQtWrapper_QWebEngineScript::setRunsOnSubFrames(QWebEngineScript* theWrappedObject, bool  on)
{
  ( theWrappedObject->setRunsOnSubFrames(on));
}

void PythonQtWrapper_QWebEngineScript::setSourceCode(QWebEngineScript* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setSourceCode(arg__1));
}

void PythonQtWrapper_QWebEngineScript::setSourceUrl(QWebEngineScript* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setSourceUrl(url));
}

void PythonQtWrapper_QWebEngineScript::setWorldId(QWebEngineScript* theWrappedObject, unsigned int  arg__1)
{
  ( theWrappedObject->setWorldId(arg__1));
}

QString  PythonQtWrapper_QWebEngineScript::sourceCode(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->sourceCode());
}

QUrl  PythonQtWrapper_QWebEngineScript::sourceUrl(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->sourceUrl());
}

void PythonQtWrapper_QWebEngineScript::swap(QWebEngineScript* theWrappedObject, QWebEngineScript&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QWebEngineScript::worldId(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->worldId());
}

QString PythonQtWrapper_QWebEngineScript::py_toString(QWebEngineScript* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



void PythonQtWrapper_QWebEngineScriptCollection::clear(QWebEngineScriptCollection* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QWebEngineScriptCollection::contains(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  value) const
{
  return ( theWrappedObject->contains(value));
}

int  PythonQtWrapper_QWebEngineScriptCollection::count(QWebEngineScriptCollection* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QList<QWebEngineScript >  PythonQtWrapper_QWebEngineScriptCollection::find(QWebEngineScriptCollection* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->find(name));
}

void PythonQtWrapper_QWebEngineScriptCollection::insert(QWebEngineScriptCollection* theWrappedObject, const QList<QWebEngineScript >&  list)
{
  ( theWrappedObject->insert(list));
}

void PythonQtWrapper_QWebEngineScriptCollection::insert(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  arg__1)
{
  ( theWrappedObject->insert(arg__1));
}

bool  PythonQtWrapper_QWebEngineScriptCollection::isEmpty(QWebEngineScriptCollection* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QWebEngineScriptCollection::remove(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  arg__1)
{
  return ( theWrappedObject->remove(arg__1));
}

QList<QWebEngineScript >  PythonQtWrapper_QWebEngineScriptCollection::toList(QWebEngineScriptCollection* theWrappedObject) const
{
  return ( theWrappedObject->toList());
}



QString  PythonQtWrapper_QWebEngineSettings::defaultTextEncoding(QWebEngineSettings* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextEncoding());
}

QString  PythonQtWrapper_QWebEngineSettings::fontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which) const
{
  return ( theWrappedObject->fontFamily(which));
}

int  PythonQtWrapper_QWebEngineSettings::fontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type) const
{
  return ( theWrappedObject->fontSize(type));
}

void PythonQtWrapper_QWebEngineSettings::resetAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr)
{
  ( theWrappedObject->resetAttribute(attr));
}

void PythonQtWrapper_QWebEngineSettings::resetFontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which)
{
  ( theWrappedObject->resetFontFamily(which));
}

void PythonQtWrapper_QWebEngineSettings::resetFontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type)
{
  ( theWrappedObject->resetFontSize(type));
}

void PythonQtWrapper_QWebEngineSettings::resetUnknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject)
{
  ( theWrappedObject->resetUnknownUrlSchemePolicy());
}

void PythonQtWrapper_QWebEngineSettings::setAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr, bool  on)
{
  ( theWrappedObject->setAttribute(attr, on));
}

void PythonQtWrapper_QWebEngineSettings::setDefaultTextEncoding(QWebEngineSettings* theWrappedObject, const QString&  encoding)
{
  ( theWrappedObject->setDefaultTextEncoding(encoding));
}

void PythonQtWrapper_QWebEngineSettings::setFontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which, const QString&  family)
{
  ( theWrappedObject->setFontFamily(which, family));
}

void PythonQtWrapper_QWebEngineSettings::setFontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type, int  size)
{
  ( theWrappedObject->setFontSize(type, size));
}

void PythonQtWrapper_QWebEngineSettings::setUnknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject, QWebEngineSettings::UnknownUrlSchemePolicy  policy)
{
  ( theWrappedObject->setUnknownUrlSchemePolicy(policy));
}

bool  PythonQtWrapper_QWebEngineSettings::testAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr) const
{
  return ( theWrappedObject->testAttribute(attr));
}

QWebEngineSettings::UnknownUrlSchemePolicy  PythonQtWrapper_QWebEngineSettings::unknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject) const
{
  return ( theWrappedObject->unknownUrlSchemePolicy());
}



void PythonQtWrapper_QWebEngineUrlRequestInfo::block(QWebEngineUrlRequestInfo* theWrappedObject, bool  shouldBlock)
{
  ( theWrappedObject->block(shouldBlock));
}

bool  PythonQtWrapper_QWebEngineUrlRequestInfo::changed(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->changed());
}

QUrl  PythonQtWrapper_QWebEngineUrlRequestInfo::firstPartyUrl(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->firstPartyUrl());
}

QHash<QByteArray , QByteArray >  PythonQtWrapper_QWebEngineUrlRequestInfo::httpHeaders(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->httpHeaders());
}

QUrl  PythonQtWrapper_QWebEngineUrlRequestInfo::initiator(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->initiator());
}

QWebEngineUrlRequestInfo::NavigationType  PythonQtWrapper_QWebEngineUrlRequestInfo::navigationType(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->navigationType());
}

void PythonQtWrapper_QWebEngineUrlRequestInfo::redirect(QWebEngineUrlRequestInfo* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->redirect(url));
}

QIODevice*  PythonQtWrapper_QWebEngineUrlRequestInfo::requestBody(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->requestBody());
}

QByteArray  PythonQtWrapper_QWebEngineUrlRequestInfo::requestMethod(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->requestMethod());
}

QUrl  PythonQtWrapper_QWebEngineUrlRequestInfo::requestUrl(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->requestUrl());
}

QWebEngineUrlRequestInfo::ResourceType  PythonQtWrapper_QWebEngineUrlRequestInfo::resourceType(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->resourceType());
}

void PythonQtWrapper_QWebEngineUrlRequestInfo::setHttpHeader(QWebEngineUrlRequestInfo* theWrappedObject, const QByteArray&  name, const QByteArray&  value)
{
  ( theWrappedObject->setHttpHeader(name, value));
}



PythonQtShell_QWebEngineUrlRequestInterceptor::~PythonQtShell_QWebEngineUrlRequestInterceptor() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebEngineUrlRequestInterceptor::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineUrlRequestInterceptor::childEvent(event0);
}
void PythonQtShell_QWebEngineUrlRequestInterceptor::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineUrlRequestInterceptor::customEvent(event0);
}
bool  PythonQtShell_QWebEngineUrlRequestInterceptor::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEngineUrlRequestInterceptor::event(event0);
}
bool  PythonQtShell_QWebEngineUrlRequestInterceptor::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEngineUrlRequestInterceptor::eventFilter(watched0, event1);
}
void PythonQtShell_QWebEngineUrlRequestInterceptor::interceptRequest(QWebEngineUrlRequestInfo&  info0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("interceptRequest");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWebEngineUrlRequestInfo&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&info0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
void PythonQtShell_QWebEngineUrlRequestInterceptor::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineUrlRequestInterceptor::timerEvent(event0);
}
QWebEngineUrlRequestInterceptor* PythonQtWrapper_QWebEngineUrlRequestInterceptor::new_QWebEngineUrlRequestInterceptor(QObject*  p)
{ 
return new PythonQtShell_QWebEngineUrlRequestInterceptor(p); }

const QMetaObject* PythonQtShell_QWebEngineUrlRequestInterceptor::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebEngineUrlRequestInterceptor::staticMetaObject);
  } else {
    return &QWebEngineUrlRequestInterceptor::staticMetaObject;
  }
}
int PythonQtShell_QWebEngineUrlRequestInterceptor::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebEngineUrlRequestInterceptor::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QWebEngineUrlRequestInterceptor::interceptRequest(QWebEngineUrlRequestInterceptor* theWrappedObject, QWebEngineUrlRequestInfo&  info)
{
  ( theWrappedObject->interceptRequest(info));
}



void PythonQtWrapper_QWebEngineUrlRequestJob::fail(QWebEngineUrlRequestJob* theWrappedObject, QWebEngineUrlRequestJob::Error  error)
{
  ( theWrappedObject->fail(error));
}

QUrl  PythonQtWrapper_QWebEngineUrlRequestJob::initiator(QWebEngineUrlRequestJob* theWrappedObject) const
{
  return ( theWrappedObject->initiator());
}

void PythonQtWrapper_QWebEngineUrlRequestJob::redirect(QWebEngineUrlRequestJob* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->redirect(url));
}

void PythonQtWrapper_QWebEngineUrlRequestJob::reply(QWebEngineUrlRequestJob* theWrappedObject, const QByteArray&  contentType, QIODevice*  device)
{
  ( theWrappedObject->reply(contentType, device));
}

QIODevice*  PythonQtWrapper_QWebEngineUrlRequestJob::requestBody(QWebEngineUrlRequestJob* theWrappedObject) const
{
  return ( theWrappedObject->requestBody());
}

QMap<QByteArray , QByteArray >  PythonQtWrapper_QWebEngineUrlRequestJob::requestHeaders(QWebEngineUrlRequestJob* theWrappedObject) const
{
  return ( theWrappedObject->requestHeaders());
}

QByteArray  PythonQtWrapper_QWebEngineUrlRequestJob::requestMethod(QWebEngineUrlRequestJob* theWrappedObject) const
{
  return ( theWrappedObject->requestMethod());
}

QUrl  PythonQtWrapper_QWebEngineUrlRequestJob::requestUrl(QWebEngineUrlRequestJob* theWrappedObject) const
{
  return ( theWrappedObject->requestUrl());
}

void PythonQtWrapper_QWebEngineUrlRequestJob::setAdditionalResponseHeaders(QWebEngineUrlRequestJob* theWrappedObject, const QMultiMap<QByteArray , QByteArray >&  additionalResponseHeaders) const
{
  ( theWrappedObject->setAdditionalResponseHeaders(additionalResponseHeaders));
}


