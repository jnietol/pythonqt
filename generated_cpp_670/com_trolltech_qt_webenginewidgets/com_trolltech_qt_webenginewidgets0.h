#include <PythonQt.h>
#include <QObject>
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
#include <qwebenginecontextmenurequest.h>
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
#include <qwebengineurlrequestjob.h>
#include <qwebengineurlschemehandler.h>



class PythonQtShell_QWebChannel : public QWebChannel
{
public:
    PythonQtShell_QWebChannel(QObject*  parent = nullptr):QWebChannel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebChannel() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QWebChannel : public QObject
{ Q_OBJECT
public:
public slots:
QWebChannel* new_QWebChannel(QObject*  parent = nullptr);
void delete_QWebChannel(QWebChannel* obj) { delete obj; }
   bool  blockUpdates(QWebChannel* theWrappedObject) const;
   void deregisterObject(QWebChannel* theWrappedObject, QObject*  object);
   int  propertyUpdateInterval(QWebChannel* theWrappedObject) const;
   void registerObject(QWebChannel* theWrappedObject, const QString&  id, QObject*  object);
   void registerObjects(QWebChannel* theWrappedObject, const QHash<QString , QObject* >&  objects);
   QHash<QString , QObject* >  registeredObjects(QWebChannel* theWrappedObject) const;
   void setBlockUpdates(QWebChannel* theWrappedObject, bool  block);
   void setPropertyUpdateInterval(QWebChannel* theWrappedObject, int  ms);
};





class PythonQtShell_QWebChannelAbstractTransport : public QWebChannelAbstractTransport
{
public:
    PythonQtShell_QWebChannelAbstractTransport(QObject*  parent = nullptr):QWebChannelAbstractTransport(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebChannelAbstractTransport() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void sendMessage(const QJsonObject&  message) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebChannelAbstractTransport : public QWebChannelAbstractTransport
{ public:
inline void py_q_sendMessage(const QJsonObject&  message) { this->sendMessage(message); }
};

class PythonQtWrapper_QWebChannelAbstractTransport : public QObject
{ Q_OBJECT
public:
public slots:
QWebChannelAbstractTransport* new_QWebChannelAbstractTransport(QObject*  parent = nullptr);
void delete_QWebChannelAbstractTransport(QWebChannelAbstractTransport* obj) { delete obj; }
   void py_q_sendMessage(QWebChannelAbstractTransport* theWrappedObject, const QJsonObject&  message){  (((PythonQtPublicPromoter_QWebChannelAbstractTransport*)theWrappedObject)->py_q_sendMessage(message));}
};





class PythonQtWrapper_QWebEngineCertificateError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  SslPinnedKeyNotInCertificateChain = QWebEngineCertificateError::SslPinnedKeyNotInCertificateChain,   CertificateCommonNameInvalid = QWebEngineCertificateError::CertificateCommonNameInvalid,   CertificateDateInvalid = QWebEngineCertificateError::CertificateDateInvalid,   CertificateAuthorityInvalid = QWebEngineCertificateError::CertificateAuthorityInvalid,   CertificateContainsErrors = QWebEngineCertificateError::CertificateContainsErrors,   CertificateNoRevocationMechanism = QWebEngineCertificateError::CertificateNoRevocationMechanism,   CertificateUnableToCheckRevocation = QWebEngineCertificateError::CertificateUnableToCheckRevocation,   CertificateRevoked = QWebEngineCertificateError::CertificateRevoked,   CertificateInvalid = QWebEngineCertificateError::CertificateInvalid,   CertificateWeakSignatureAlgorithm = QWebEngineCertificateError::CertificateWeakSignatureAlgorithm,   CertificateNonUniqueName = QWebEngineCertificateError::CertificateNonUniqueName,   CertificateWeakKey = QWebEngineCertificateError::CertificateWeakKey,   CertificateNameConstraintViolation = QWebEngineCertificateError::CertificateNameConstraintViolation,   CertificateValidityTooLong = QWebEngineCertificateError::CertificateValidityTooLong,   CertificateTransparencyRequired = QWebEngineCertificateError::CertificateTransparencyRequired,   CertificateSymantecLegacy = QWebEngineCertificateError::CertificateSymantecLegacy,   CertificateKnownInterceptionBlocked = QWebEngineCertificateError::CertificateKnownInterceptionBlocked,   SslObsoleteVersion = QWebEngineCertificateError::SslObsoleteVersion};
public slots:
QWebEngineCertificateError* new_QWebEngineCertificateError(const QWebEngineCertificateError&  other);
void delete_QWebEngineCertificateError(QWebEngineCertificateError* obj) { delete obj; }
   void acceptCertificate(QWebEngineCertificateError* theWrappedObject);
   QList<QSslCertificate >  certificateChain(QWebEngineCertificateError* theWrappedObject) const;
   void defer(QWebEngineCertificateError* theWrappedObject);
   QString  description(QWebEngineCertificateError* theWrappedObject) const;
   bool  isOverridable(QWebEngineCertificateError* theWrappedObject) const;
   QWebEngineCertificateError*  operator_assign(QWebEngineCertificateError* theWrappedObject, const QWebEngineCertificateError&  other);
   void rejectCertificate(QWebEngineCertificateError* theWrappedObject);
   QWebEngineCertificateError::Type  type(QWebEngineCertificateError* theWrappedObject) const;
   QUrl  url(QWebEngineCertificateError* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineClientCertificateSelection : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineClientCertificateSelection* new_QWebEngineClientCertificateSelection(const QWebEngineClientCertificateSelection&  arg__1);
void delete_QWebEngineClientCertificateSelection(QWebEngineClientCertificateSelection* obj) { delete obj; }
   QList<QSslCertificate >  certificates(QWebEngineClientCertificateSelection* theWrappedObject) const;
   QUrl  host(QWebEngineClientCertificateSelection* theWrappedObject) const;
   QWebEngineClientCertificateSelection*  operator_assign(QWebEngineClientCertificateSelection* theWrappedObject, const QWebEngineClientCertificateSelection&  arg__1);
   void select(QWebEngineClientCertificateSelection* theWrappedObject, const QSslCertificate&  certificate);
   void selectNone(QWebEngineClientCertificateSelection* theWrappedObject);
};





class PythonQtWrapper_QWebEngineClientCertificateStore : public QObject
{ Q_OBJECT
public:
public slots:
   void add(QWebEngineClientCertificateStore* theWrappedObject, const QSslCertificate&  certificate, const QSslKey&  privateKey);
   QList<QSslCertificate >  certificates(QWebEngineClientCertificateStore* theWrappedObject) const;
   void clear(QWebEngineClientCertificateStore* theWrappedObject);
   void remove(QWebEngineClientCertificateStore* theWrappedObject, const QSslCertificate&  certificate);
};





class PythonQtWrapper_QWebEngineContextMenuRequest : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EditFlag MediaFlag )
Q_FLAGS(EditFlags MediaFlags )
enum EditFlag{
  CanUndo = QWebEngineContextMenuRequest::CanUndo,   CanRedo = QWebEngineContextMenuRequest::CanRedo,   CanCut = QWebEngineContextMenuRequest::CanCut,   CanCopy = QWebEngineContextMenuRequest::CanCopy,   CanPaste = QWebEngineContextMenuRequest::CanPaste,   CanDelete = QWebEngineContextMenuRequest::CanDelete,   CanSelectAll = QWebEngineContextMenuRequest::CanSelectAll,   CanTranslate = QWebEngineContextMenuRequest::CanTranslate,   CanEditRichly = QWebEngineContextMenuRequest::CanEditRichly};
enum MediaFlag{
  MediaInError = QWebEngineContextMenuRequest::MediaInError,   MediaPaused = QWebEngineContextMenuRequest::MediaPaused,   MediaMuted = QWebEngineContextMenuRequest::MediaMuted,   MediaLoop = QWebEngineContextMenuRequest::MediaLoop,   MediaCanSave = QWebEngineContextMenuRequest::MediaCanSave,   MediaHasAudio = QWebEngineContextMenuRequest::MediaHasAudio,   MediaCanToggleControls = QWebEngineContextMenuRequest::MediaCanToggleControls,   MediaControls = QWebEngineContextMenuRequest::MediaControls,   MediaCanPrint = QWebEngineContextMenuRequest::MediaCanPrint,   MediaCanRotate = QWebEngineContextMenuRequest::MediaCanRotate};
Q_DECLARE_FLAGS(EditFlags, EditFlag)
Q_DECLARE_FLAGS(MediaFlags, MediaFlag)
public slots:
void delete_QWebEngineContextMenuRequest(QWebEngineContextMenuRequest* obj) { delete obj; }
   QWebEngineContextMenuRequest::EditFlags  editFlags(QWebEngineContextMenuRequest* theWrappedObject) const;
   bool  isAccepted(QWebEngineContextMenuRequest* theWrappedObject) const;
   bool  isContentEditable(QWebEngineContextMenuRequest* theWrappedObject) const;
   QString  linkText(QWebEngineContextMenuRequest* theWrappedObject) const;
   QUrl  linkUrl(QWebEngineContextMenuRequest* theWrappedObject) const;
   QWebEngineContextMenuRequest::MediaFlags  mediaFlags(QWebEngineContextMenuRequest* theWrappedObject) const;
   QWebEngineContextMenuRequest::MediaType  mediaType(QWebEngineContextMenuRequest* theWrappedObject) const;
   QUrl  mediaUrl(QWebEngineContextMenuRequest* theWrappedObject) const;
   QString  misspelledWord(QWebEngineContextMenuRequest* theWrappedObject) const;
   QPoint  position(QWebEngineContextMenuRequest* theWrappedObject) const;
   QString  selectedText(QWebEngineContextMenuRequest* theWrappedObject) const;
   void setAccepted(QWebEngineContextMenuRequest* theWrappedObject, bool  accepted);
   QStringList  spellCheckerSuggestions(QWebEngineContextMenuRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineCookieStore : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineCookieStore(QWebEngineCookieStore* obj) { delete obj; }
   void deleteAllCookies(QWebEngineCookieStore* theWrappedObject);
   void deleteCookie(QWebEngineCookieStore* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  origin = QUrl());
   void deleteSessionCookies(QWebEngineCookieStore* theWrappedObject);
   void loadAllCookies(QWebEngineCookieStore* theWrappedObject);
   void setCookie(QWebEngineCookieStore* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  origin = QUrl());
};





class PythonQtShell_QWebEngineCookieStore__FilterRequest : public QWebEngineCookieStore::FilterRequest
{
public:
    PythonQtShell_QWebEngineCookieStore__FilterRequest():QWebEngineCookieStore::FilterRequest(),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineCookieStore__FilterRequest();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QWebEngineCookieStore__FilterRequest : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineCookieStore::FilterRequest* new_QWebEngineCookieStore__FilterRequest();
QWebEngineCookieStore::FilterRequest* new_QWebEngineCookieStore__FilterRequest(const QWebEngineCookieStore::FilterRequest& other) {
PythonQtShell_QWebEngineCookieStore__FilterRequest* a = new PythonQtShell_QWebEngineCookieStore__FilterRequest();
*((QWebEngineCookieStore::FilterRequest*)a) = other;
return a; }
void delete_QWebEngineCookieStore__FilterRequest(QWebEngineCookieStore::FilterRequest* obj) { delete obj; }
void py_set__reservedFlag(QWebEngineCookieStore::FilterRequest* theWrappedObject, bool  _reservedFlag){ theWrappedObject->_reservedFlag = _reservedFlag; }
bool  py_get__reservedFlag(QWebEngineCookieStore::FilterRequest* theWrappedObject){ return theWrappedObject->_reservedFlag; }
void py_set__reservedType(QWebEngineCookieStore::FilterRequest* theWrappedObject, ushort  _reservedType){ theWrappedObject->_reservedType = _reservedType; }
ushort  py_get__reservedType(QWebEngineCookieStore::FilterRequest* theWrappedObject){ return theWrappedObject->_reservedType; }
void py_set_firstPartyUrl(QWebEngineCookieStore::FilterRequest* theWrappedObject, QUrl  firstPartyUrl){ theWrappedObject->firstPartyUrl = firstPartyUrl; }
QUrl  py_get_firstPartyUrl(QWebEngineCookieStore::FilterRequest* theWrappedObject){ return theWrappedObject->firstPartyUrl; }
void py_set_origin(QWebEngineCookieStore::FilterRequest* theWrappedObject, QUrl  origin){ theWrappedObject->origin = origin; }
QUrl  py_get_origin(QWebEngineCookieStore::FilterRequest* theWrappedObject){ return theWrappedObject->origin; }
void py_set_thirdParty(QWebEngineCookieStore::FilterRequest* theWrappedObject, bool  thirdParty){ theWrappedObject->thirdParty = thirdParty; }
bool  py_get_thirdParty(QWebEngineCookieStore::FilterRequest* theWrappedObject){ return theWrappedObject->thirdParty; }
};





class PythonQtWrapper_QWebEngineDownloadRequest : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineDownloadRequest(QWebEngineDownloadRequest* obj) { delete obj; }
   QString  downloadDirectory(QWebEngineDownloadRequest* theWrappedObject) const;
   QString  downloadFileName(QWebEngineDownloadRequest* theWrappedObject) const;
   unsigned int  id(QWebEngineDownloadRequest* theWrappedObject) const;
   QWebEngineDownloadRequest::DownloadInterruptReason  interruptReason(QWebEngineDownloadRequest* theWrappedObject) const;
   QString  interruptReasonString(QWebEngineDownloadRequest* theWrappedObject) const;
   bool  isFinished(QWebEngineDownloadRequest* theWrappedObject) const;
   bool  isPaused(QWebEngineDownloadRequest* theWrappedObject) const;
   bool  isSavePageDownload(QWebEngineDownloadRequest* theWrappedObject) const;
   QString  mimeType(QWebEngineDownloadRequest* theWrappedObject) const;
   QWebEnginePage*  page(QWebEngineDownloadRequest* theWrappedObject) const;
   qint64  receivedBytes(QWebEngineDownloadRequest* theWrappedObject) const;
   QWebEngineDownloadRequest::SavePageFormat  savePageFormat(QWebEngineDownloadRequest* theWrappedObject) const;
   void setDownloadDirectory(QWebEngineDownloadRequest* theWrappedObject, const QString&  directory);
   void setDownloadFileName(QWebEngineDownloadRequest* theWrappedObject, const QString&  fileName);
   void setSavePageFormat(QWebEngineDownloadRequest* theWrappedObject, QWebEngineDownloadRequest::SavePageFormat  format);
   QWebEngineDownloadRequest::DownloadState  state(QWebEngineDownloadRequest* theWrappedObject) const;
   QString  suggestedFileName(QWebEngineDownloadRequest* theWrappedObject) const;
   qint64  totalBytes(QWebEngineDownloadRequest* theWrappedObject) const;
   QUrl  url(QWebEngineDownloadRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineFileSystemAccessRequest : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AccessFlag HandleType )
Q_FLAGS(AccessFlags )
enum AccessFlag{
  Read = QWebEngineFileSystemAccessRequest::Read,   Write = QWebEngineFileSystemAccessRequest::Write};
enum HandleType{
  File = QWebEngineFileSystemAccessRequest::File,   Directory = QWebEngineFileSystemAccessRequest::Directory};
Q_DECLARE_FLAGS(AccessFlags, AccessFlag)
public slots:
QWebEngineFileSystemAccessRequest* new_QWebEngineFileSystemAccessRequest(const QWebEngineFileSystemAccessRequest&  other);
void delete_QWebEngineFileSystemAccessRequest(QWebEngineFileSystemAccessRequest* obj) { delete obj; }
   void accept(QWebEngineFileSystemAccessRequest* theWrappedObject);
   QWebEngineFileSystemAccessRequest::AccessFlags  accessFlags(QWebEngineFileSystemAccessRequest* theWrappedObject) const;
   QUrl  filePath(QWebEngineFileSystemAccessRequest* theWrappedObject) const;
   QWebEngineFileSystemAccessRequest::HandleType  handleType(QWebEngineFileSystemAccessRequest* theWrappedObject) const;
   bool  __ne__(QWebEngineFileSystemAccessRequest* theWrappedObject, const QWebEngineFileSystemAccessRequest&  rhs);
   QWebEngineFileSystemAccessRequest*  operator_assign(QWebEngineFileSystemAccessRequest* theWrappedObject, const QWebEngineFileSystemAccessRequest&  other);
   bool  __eq__(QWebEngineFileSystemAccessRequest* theWrappedObject, const QWebEngineFileSystemAccessRequest&  rhs);
   QUrl  origin(QWebEngineFileSystemAccessRequest* theWrappedObject) const;
   void reject(QWebEngineFileSystemAccessRequest* theWrappedObject);
   void swap(QWebEngineFileSystemAccessRequest* theWrappedObject, QWebEngineFileSystemAccessRequest&  other);
};





class PythonQtWrapper_QWebEngineFindTextResult : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineFindTextResult* new_QWebEngineFindTextResult();
QWebEngineFindTextResult* new_QWebEngineFindTextResult(const QWebEngineFindTextResult&  other);
void delete_QWebEngineFindTextResult(QWebEngineFindTextResult* obj) { delete obj; }
   int  activeMatch(QWebEngineFindTextResult* theWrappedObject) const;
   int  numberOfMatches(QWebEngineFindTextResult* theWrappedObject) const;
   QWebEngineFindTextResult*  operator_assign(QWebEngineFindTextResult* theWrappedObject, const QWebEngineFindTextResult&  other);
};





class PythonQtWrapper_QWebEngineFullScreenRequest : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineFullScreenRequest* new_QWebEngineFullScreenRequest(const QWebEngineFullScreenRequest&  other);
void delete_QWebEngineFullScreenRequest(QWebEngineFullScreenRequest* obj) { delete obj; }
   void accept(QWebEngineFullScreenRequest* theWrappedObject);
   QWebEngineFullScreenRequest*  operator_assign(QWebEngineFullScreenRequest* theWrappedObject, const QWebEngineFullScreenRequest&  other);
   QUrl  origin(QWebEngineFullScreenRequest* theWrappedObject) const;
   void reject(QWebEngineFullScreenRequest* theWrappedObject);
   bool  toggleOn(QWebEngineFullScreenRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineHistory : public QObject
{ Q_OBJECT
public:
public slots:
   void back(QWebEngineHistory* theWrappedObject);
   QWebEngineHistoryItem  backItem(QWebEngineHistory* theWrappedObject) const;
   QList<QWebEngineHistoryItem >  backItems(QWebEngineHistory* theWrappedObject, int  maxItems) const;
   QWebEngineHistoryModel*  backItemsModel(QWebEngineHistory* theWrappedObject) const;
   bool  canGoBack(QWebEngineHistory* theWrappedObject) const;
   bool  canGoForward(QWebEngineHistory* theWrappedObject) const;
   void clear(QWebEngineHistory* theWrappedObject);
   int  count(QWebEngineHistory* theWrappedObject) const;
   QWebEngineHistoryItem  currentItem(QWebEngineHistory* theWrappedObject) const;
   int  currentItemIndex(QWebEngineHistory* theWrappedObject) const;
   void forward(QWebEngineHistory* theWrappedObject);
   QWebEngineHistoryItem  forwardItem(QWebEngineHistory* theWrappedObject) const;
   QList<QWebEngineHistoryItem >  forwardItems(QWebEngineHistory* theWrappedObject, int  maxItems) const;
   QWebEngineHistoryModel*  forwardItemsModel(QWebEngineHistory* theWrappedObject) const;
   void goToItem(QWebEngineHistory* theWrappedObject, const QWebEngineHistoryItem&  item);
   QWebEngineHistoryItem  itemAt(QWebEngineHistory* theWrappedObject, int  i) const;
   QList<QWebEngineHistoryItem >  items(QWebEngineHistory* theWrappedObject) const;
   QWebEngineHistoryModel*  itemsModel(QWebEngineHistory* theWrappedObject) const;
   void writeTo(QWebEngineHistory* theWrappedObject, QDataStream&  stream);
   void readFrom(QWebEngineHistory* theWrappedObject, QDataStream&  stream);
};





class PythonQtWrapper_QWebEngineHistoryItem : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineHistoryItem* new_QWebEngineHistoryItem(const QWebEngineHistoryItem&  other);
void delete_QWebEngineHistoryItem(QWebEngineHistoryItem* obj) { delete obj; }
   QUrl  iconUrl(QWebEngineHistoryItem* theWrappedObject) const;
   bool  isValid(QWebEngineHistoryItem* theWrappedObject) const;
   QDateTime  lastVisited(QWebEngineHistoryItem* theWrappedObject) const;
   QWebEngineHistoryItem*  operator_assign(QWebEngineHistoryItem* theWrappedObject, const QWebEngineHistoryItem&  other);
   QUrl  originalUrl(QWebEngineHistoryItem* theWrappedObject) const;
   void swap(QWebEngineHistoryItem* theWrappedObject, QWebEngineHistoryItem&  other);
   QString  title(QWebEngineHistoryItem* theWrappedObject) const;
   QUrl  url(QWebEngineHistoryItem* theWrappedObject) const;
    bool __nonzero__(QWebEngineHistoryItem* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QWebEngineHistoryModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Roles )
enum Roles{
  UrlRole = QWebEngineHistoryModel::UrlRole,   TitleRole = QWebEngineHistoryModel::TitleRole,   OffsetRole = QWebEngineHistoryModel::OffsetRole,   IconUrlRole = QWebEngineHistoryModel::IconUrlRole};
public slots:
   QVariant  data(QWebEngineHistoryModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const;
   void reset(QWebEngineHistoryModel* theWrappedObject);
   QHash<int , QByteArray >  roleNames(QWebEngineHistoryModel* theWrappedObject) const;
   int  rowCount(QWebEngineHistoryModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
};





class PythonQtWrapper_QWebEngineHttpRequest : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Method )
enum Method{
  Get = QWebEngineHttpRequest::Get,   Post = QWebEngineHttpRequest::Post};
public slots:
QWebEngineHttpRequest* new_QWebEngineHttpRequest(const QUrl&  url = QUrl(), const QWebEngineHttpRequest::Method&  method = QWebEngineHttpRequest::Get);
QWebEngineHttpRequest* new_QWebEngineHttpRequest(const QWebEngineHttpRequest&  other);
void delete_QWebEngineHttpRequest(QWebEngineHttpRequest* obj) { delete obj; }
   bool  hasHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName) const;
   QByteArray  header(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  headers(QWebEngineHttpRequest* theWrappedObject) const;
   QWebEngineHttpRequest::Method  method(QWebEngineHttpRequest* theWrappedObject) const;
   bool  __ne__(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other) const;
   QWebEngineHttpRequest*  operator_assign(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other);
   bool  __eq__(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other) const;
   QByteArray  postData(QWebEngineHttpRequest* theWrappedObject) const;
   QWebEngineHttpRequest  static_QWebEngineHttpRequest_postRequest(const QUrl&  url, const QMap<QString , QString >&  postData);
   void setHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setMethod(QWebEngineHttpRequest* theWrappedObject, QWebEngineHttpRequest::Method  method);
   void setPostData(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  postData);
   void setUrl(QWebEngineHttpRequest* theWrappedObject, const QUrl&  url);
   void swap(QWebEngineHttpRequest* theWrappedObject, QWebEngineHttpRequest&  other);
   void unsetHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName);
   QUrl  url(QWebEngineHttpRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineLoadingInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ErrorDomain LoadStatus )
enum ErrorDomain{
  NoErrorDomain = QWebEngineLoadingInfo::NoErrorDomain,   InternalErrorDomain = QWebEngineLoadingInfo::InternalErrorDomain,   ConnectionErrorDomain = QWebEngineLoadingInfo::ConnectionErrorDomain,   CertificateErrorDomain = QWebEngineLoadingInfo::CertificateErrorDomain,   HttpErrorDomain = QWebEngineLoadingInfo::HttpErrorDomain,   FtpErrorDomain = QWebEngineLoadingInfo::FtpErrorDomain,   DnsErrorDomain = QWebEngineLoadingInfo::DnsErrorDomain,   HttpStatusCodeDomain = QWebEngineLoadingInfo::HttpStatusCodeDomain};
enum LoadStatus{
  LoadStartedStatus = QWebEngineLoadingInfo::LoadStartedStatus,   LoadStoppedStatus = QWebEngineLoadingInfo::LoadStoppedStatus,   LoadSucceededStatus = QWebEngineLoadingInfo::LoadSucceededStatus,   LoadFailedStatus = QWebEngineLoadingInfo::LoadFailedStatus};
public slots:
QWebEngineLoadingInfo* new_QWebEngineLoadingInfo(const QWebEngineLoadingInfo&  other);
void delete_QWebEngineLoadingInfo(QWebEngineLoadingInfo* obj) { delete obj; }
   int  errorCode(QWebEngineLoadingInfo* theWrappedObject) const;
   QWebEngineLoadingInfo::ErrorDomain  errorDomain(QWebEngineLoadingInfo* theWrappedObject) const;
   QString  errorString(QWebEngineLoadingInfo* theWrappedObject) const;
   bool  isErrorPage(QWebEngineLoadingInfo* theWrappedObject) const;
   QWebEngineLoadingInfo*  operator_assign(QWebEngineLoadingInfo* theWrappedObject, const QWebEngineLoadingInfo&  other);
   QMultiMap<QByteArray , QByteArray >  responseHeaders(QWebEngineLoadingInfo* theWrappedObject) const;
   QWebEngineLoadingInfo::LoadStatus  status(QWebEngineLoadingInfo* theWrappedObject) const;
   QUrl  url(QWebEngineLoadingInfo* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineNavigationRequest : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineNavigationRequest(QWebEngineNavigationRequest* obj) { delete obj; }
   void accept(QWebEngineNavigationRequest* theWrappedObject);
   bool  isMainFrame(QWebEngineNavigationRequest* theWrappedObject) const;
   QWebEngineNavigationRequest::NavigationType  navigationType(QWebEngineNavigationRequest* theWrappedObject) const;
   void reject(QWebEngineNavigationRequest* theWrappedObject);
   QUrl  url(QWebEngineNavigationRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineNewWindowRequest : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineNewWindowRequest(QWebEngineNewWindowRequest* obj) { delete obj; }
   QWebEngineNewWindowRequest::DestinationType  destination(QWebEngineNewWindowRequest* theWrappedObject) const;
   bool  isUserInitiated(QWebEngineNewWindowRequest* theWrappedObject) const;
   void openIn(QWebEngineNewWindowRequest* theWrappedObject, QWebEnginePage*  arg__1);
   QRect  requestedGeometry(QWebEngineNewWindowRequest* theWrappedObject) const;
   QUrl  requestedUrl(QWebEngineNewWindowRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineNotification : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineNotification(QWebEngineNotification* obj) { delete obj; }
   Qt::LayoutDirection  direction(QWebEngineNotification* theWrappedObject) const;
   QImage  icon(QWebEngineNotification* theWrappedObject) const;
   QString  language(QWebEngineNotification* theWrappedObject) const;
   bool  matches(QWebEngineNotification* theWrappedObject, const QWebEngineNotification*  other) const;
   QString  message(QWebEngineNotification* theWrappedObject) const;
   QUrl  origin(QWebEngineNotification* theWrappedObject) const;
   QString  tag(QWebEngineNotification* theWrappedObject) const;
   QString  title(QWebEngineNotification* theWrappedObject) const;
};





class PythonQtShell_QWebEnginePage : public QWebEnginePage
{
public:
    PythonQtShell_QWebEnginePage(QObject*  parent = nullptr):QWebEnginePage(parent),_wrapper(nullptr) {};
    PythonQtShell_QWebEnginePage(QWebEngineProfile*  profile, QObject*  parent = nullptr):QWebEnginePage(profile, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEnginePage() override;

bool  acceptNavigationRequest(const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame) override;
void childEvent(QChildEvent*  event) override;
QStringList  chooseFiles(QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes) override;
QWebEnginePage*  createWindow(QWebEnginePage::WebWindowType  type) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void javaScriptAlert(const QUrl&  securityOrigin, const QString&  msg) override;
bool  javaScriptConfirm(const QUrl&  securityOrigin, const QString&  msg) override;
void javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID) override;
bool  javaScriptPrompt(const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result) override;
void timerEvent(QTimerEvent*  event) override;
void triggerAction(QWebEnginePage::WebAction  action, bool  checked = false) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEnginePage : public QWebEnginePage
{ public:
inline bool  promoted_acceptNavigationRequest(const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame) { return this->acceptNavigationRequest(url, type, isMainFrame); }
inline QStringList  promoted_chooseFiles(QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes) { return this->chooseFiles(mode, oldFiles, acceptedMimeTypes); }
inline QWebEnginePage*  promoted_createWindow(QWebEnginePage::WebWindowType  type) { return this->createWindow(type); }
inline void promoted_javaScriptAlert(const QUrl&  securityOrigin, const QString&  msg) { this->javaScriptAlert(securityOrigin, msg); }
inline bool  promoted_javaScriptConfirm(const QUrl&  securityOrigin, const QString&  msg) { return this->javaScriptConfirm(securityOrigin, msg); }
inline void promoted_javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID) { this->javaScriptConsoleMessage(level, message, lineNumber, sourceID); }
inline bool  promoted_javaScriptPrompt(const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result) { return this->javaScriptPrompt(securityOrigin, msg, defaultValue, result); }
inline bool  py_q_acceptNavigationRequest(const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame) { return QWebEnginePage::acceptNavigationRequest(url, type, isMainFrame); }
inline QStringList  py_q_chooseFiles(QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes) { return QWebEnginePage::chooseFiles(mode, oldFiles, acceptedMimeTypes); }
inline QWebEnginePage*  py_q_createWindow(QWebEnginePage::WebWindowType  type) { return QWebEnginePage::createWindow(type); }
inline bool  py_q_event(QEvent*  arg__1) { return QWebEnginePage::event(arg__1); }
inline void py_q_javaScriptAlert(const QUrl&  securityOrigin, const QString&  msg) { QWebEnginePage::javaScriptAlert(securityOrigin, msg); }
inline bool  py_q_javaScriptConfirm(const QUrl&  securityOrigin, const QString&  msg) { return QWebEnginePage::javaScriptConfirm(securityOrigin, msg); }
inline void py_q_javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID) { QWebEnginePage::javaScriptConsoleMessage(level, message, lineNumber, sourceID); }
inline bool  py_q_javaScriptPrompt(const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result) { return QWebEnginePage::javaScriptPrompt(securityOrigin, msg, defaultValue, result); }
inline void py_q_triggerAction(QWebEnginePage::WebAction  action, bool  checked = false) { QWebEnginePage::triggerAction(action, checked); }
};

class PythonQtWrapper_QWebEnginePage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FindFlag )
Q_FLAGS(FindFlags )
enum FindFlag{
  FindBackward = QWebEnginePage::FindBackward,   FindCaseSensitively = QWebEnginePage::FindCaseSensitively};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
public slots:
QWebEnginePage* new_QWebEnginePage(QObject*  parent = nullptr);
QWebEnginePage* new_QWebEnginePage(QWebEngineProfile*  profile, QObject*  parent = nullptr);
void delete_QWebEnginePage(QWebEnginePage* obj) { delete obj; }
   void acceptAsNewWindow(QWebEnginePage* theWrappedObject, QWebEngineNewWindowRequest&  request);
   bool  acceptNavigationRequest(QWebEnginePage* theWrappedObject, const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame);
   bool  py_q_acceptNavigationRequest(QWebEnginePage* theWrappedObject, const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_acceptNavigationRequest(url, type, isMainFrame));}
   QAction*  action(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action) const;
   QColor  backgroundColor(QWebEnginePage* theWrappedObject) const;
   QStringList  chooseFiles(QWebEnginePage* theWrappedObject, QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes);
   QStringList  py_q_chooseFiles(QWebEnginePage* theWrappedObject, QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_chooseFiles(mode, oldFiles, acceptedMimeTypes));}
   QSizeF  contentsSize(QWebEnginePage* theWrappedObject) const;
   QWebEnginePage*  createWindow(QWebEnginePage* theWrappedObject, QWebEnginePage::WebWindowType  type);
   QWebEnginePage*  py_q_createWindow(QWebEnginePage* theWrappedObject, QWebEnginePage::WebWindowType  type){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_createWindow(type));}
   QString  devToolsId(QWebEnginePage* theWrappedObject) const;
   QWebEnginePage*  devToolsPage(QWebEnginePage* theWrappedObject) const;
   void download(QWebEnginePage* theWrappedObject, const QUrl&  url, const QString&  filename = QString());
   bool  py_q_event(QWebEnginePage* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_event(arg__1));}
   bool  hasSelection(QWebEnginePage* theWrappedObject) const;
   QWebEngineHistory*  history(QWebEnginePage* theWrappedObject) const;
   QIcon  icon(QWebEnginePage* theWrappedObject) const;
   QUrl  iconUrl(QWebEnginePage* theWrappedObject) const;
   QWebEnginePage*  inspectedPage(QWebEnginePage* theWrappedObject) const;
   bool  isAudioMuted(QWebEnginePage* theWrappedObject) const;
   bool  isLoading(QWebEnginePage* theWrappedObject) const;
   bool  isVisible(QWebEnginePage* theWrappedObject) const;
   void javaScriptAlert(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg);
   void py_q_javaScriptAlert(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg){  (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptAlert(securityOrigin, msg));}
   bool  javaScriptConfirm(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg);
   bool  py_q_javaScriptConfirm(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptConfirm(securityOrigin, msg));}
   void javaScriptConsoleMessage(QWebEnginePage* theWrappedObject, QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID);
   void py_q_javaScriptConsoleMessage(QWebEnginePage* theWrappedObject, QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID){  (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptConsoleMessage(level, message, lineNumber, sourceID));}
   bool  javaScriptPrompt(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result);
   bool  py_q_javaScriptPrompt(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptPrompt(securityOrigin, msg, defaultValue, result));}
   QWebEnginePage::LifecycleState  lifecycleState(QWebEnginePage* theWrappedObject) const;
   void load(QWebEnginePage* theWrappedObject, const QUrl&  url);
   void load(QWebEnginePage* theWrappedObject, const QWebEngineHttpRequest&  request);
   void printToPdf(QWebEnginePage* theWrappedObject, const QString&  filePath, const QPageLayout&  layout = QPageLayout(QPageSize(QPageSize::A4), QPageLayout::Portrait, QMarginsF()), const QPageRanges&  ranges = {});
   QWebEngineProfile*  profile(QWebEnginePage* theWrappedObject) const;
   bool  recentlyAudible(QWebEnginePage* theWrappedObject) const;
   QWebEnginePage::LifecycleState  recommendedState(QWebEnginePage* theWrappedObject) const;
   qint64  renderProcessPid(QWebEnginePage* theWrappedObject) const;
   void replaceMisspelledWord(QWebEnginePage* theWrappedObject, const QString&  replacement);
   QUrl  requestedUrl(QWebEnginePage* theWrappedObject) const;
   void save(QWebEnginePage* theWrappedObject, const QString&  filePath, QWebEngineDownloadRequest::SavePageFormat  format = QWebEngineDownloadRequest::MimeHtmlSaveFormat) const;
   QWebEngineScriptCollection*  scripts(QWebEnginePage* theWrappedObject);
   QPointF  scrollPosition(QWebEnginePage* theWrappedObject) const;
   QString  selectedText(QWebEnginePage* theWrappedObject) const;
   void setAudioMuted(QWebEnginePage* theWrappedObject, bool  muted);
   void setBackgroundColor(QWebEnginePage* theWrappedObject, const QColor&  color);
   void setContent(QWebEnginePage* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setDevToolsPage(QWebEnginePage* theWrappedObject, QWebEnginePage*  page);
   void setFeaturePermission(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, QWebEnginePage::Feature  feature, QWebEnginePage::PermissionPolicy  policy);
   void setHtml(QWebEnginePage* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void setInspectedPage(QWebEnginePage* theWrappedObject, QWebEnginePage*  page);
   void setLifecycleState(QWebEnginePage* theWrappedObject, QWebEnginePage::LifecycleState  state);
   void setUrl(QWebEnginePage* theWrappedObject, const QUrl&  url);
   void setUrlRequestInterceptor(QWebEnginePage* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor);
   void setVisible(QWebEnginePage* theWrappedObject, bool  visible);
   void setWebChannel(QWebEnginePage* theWrappedObject, QWebChannel*  arg__1, unsigned int  worldId = 0);
   void setZoomFactor(QWebEnginePage* theWrappedObject, qreal  factor);
   QWebEngineSettings*  settings(QWebEnginePage* theWrappedObject) const;
   QString  title(QWebEnginePage* theWrappedObject) const;
   void triggerAction(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked = false);
   void py_q_triggerAction(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked = false){  (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_triggerAction(action, checked));}
   QUrl  url(QWebEnginePage* theWrappedObject) const;
   QWebChannel*  webChannel(QWebEnginePage* theWrappedObject) const;
   qreal  zoomFactor(QWebEnginePage* theWrappedObject) const;
};





class PythonQtShell_QWebEngineProfile : public QWebEngineProfile
{
public:
    PythonQtShell_QWebEngineProfile(QObject*  parent = nullptr):QWebEngineProfile(parent),_wrapper(nullptr) {};
    PythonQtShell_QWebEngineProfile(const QString&  name, QObject*  parent = nullptr):QWebEngineProfile(name, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineProfile() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QWebEngineProfile : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineProfile* new_QWebEngineProfile(QObject*  parent = nullptr);
QWebEngineProfile* new_QWebEngineProfile(const QString&  name, QObject*  parent = nullptr);
void delete_QWebEngineProfile(QWebEngineProfile* obj) { delete obj; }
   QString  cachePath(QWebEngineProfile* theWrappedObject) const;
   void clearAllVisitedLinks(QWebEngineProfile* theWrappedObject);
   void clearHttpCache(QWebEngineProfile* theWrappedObject);
   void clearVisitedLinks(QWebEngineProfile* theWrappedObject, const QList<QUrl >&  urls);
   QWebEngineClientCertificateStore*  clientCertificateStore(QWebEngineProfile* theWrappedObject);
   QWebEngineCookieStore*  cookieStore(QWebEngineProfile* theWrappedObject);
   QWebEngineProfile*  static_QWebEngineProfile_defaultProfile();
   QString  downloadPath(QWebEngineProfile* theWrappedObject) const;
   QString  httpAcceptLanguage(QWebEngineProfile* theWrappedObject) const;
   int  httpCacheMaximumSize(QWebEngineProfile* theWrappedObject) const;
   QWebEngineProfile::HttpCacheType  httpCacheType(QWebEngineProfile* theWrappedObject) const;
   QString  httpUserAgent(QWebEngineProfile* theWrappedObject) const;
   void installUrlSchemeHandler(QWebEngineProfile* theWrappedObject, const QByteArray&  scheme, QWebEngineUrlSchemeHandler*  arg__2);
   bool  isOffTheRecord(QWebEngineProfile* theWrappedObject) const;
   bool  isPushServiceEnabled(QWebEngineProfile* theWrappedObject) const;
   bool  isSpellCheckEnabled(QWebEngineProfile* theWrappedObject) const;
   QWebEngineProfile::PersistentCookiesPolicy  persistentCookiesPolicy(QWebEngineProfile* theWrappedObject) const;
   QString  persistentStoragePath(QWebEngineProfile* theWrappedObject) const;
   void removeAllUrlSchemeHandlers(QWebEngineProfile* theWrappedObject);
   void removeUrlScheme(QWebEngineProfile* theWrappedObject, const QByteArray&  scheme);
   void removeUrlSchemeHandler(QWebEngineProfile* theWrappedObject, QWebEngineUrlSchemeHandler*  arg__1);
   QWebEngineScriptCollection*  scripts(QWebEngineProfile* theWrappedObject) const;
   void setCachePath(QWebEngineProfile* theWrappedObject, const QString&  path);
   void setDownloadPath(QWebEngineProfile* theWrappedObject, const QString&  path);
   void setHttpAcceptLanguage(QWebEngineProfile* theWrappedObject, const QString&  httpAcceptLanguage);
   void setHttpCacheMaximumSize(QWebEngineProfile* theWrappedObject, int  maxSize);
   void setHttpCacheType(QWebEngineProfile* theWrappedObject, QWebEngineProfile::HttpCacheType  arg__1);
   void setHttpUserAgent(QWebEngineProfile* theWrappedObject, const QString&  userAgent);
   void setPersistentCookiesPolicy(QWebEngineProfile* theWrappedObject, QWebEngineProfile::PersistentCookiesPolicy  arg__1);
   void setPersistentStoragePath(QWebEngineProfile* theWrappedObject, const QString&  path);
   void setPushServiceEnabled(QWebEngineProfile* theWrappedObject, bool  enabled);
   void setSpellCheckEnabled(QWebEngineProfile* theWrappedObject, bool  enabled);
   void setSpellCheckLanguages(QWebEngineProfile* theWrappedObject, const QStringList&  languages);
   void setUrlRequestInterceptor(QWebEngineProfile* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor);
   QWebEngineSettings*  settings(QWebEngineProfile* theWrappedObject) const;
   QStringList  spellCheckLanguages(QWebEngineProfile* theWrappedObject) const;
   QString  storageName(QWebEngineProfile* theWrappedObject) const;
   const QWebEngineUrlSchemeHandler*  urlSchemeHandler(QWebEngineProfile* theWrappedObject, const QByteArray&  arg__1) const;
   bool  visitedLinksContainsUrl(QWebEngineProfile* theWrappedObject, const QUrl&  url) const;
};





class PythonQtWrapper_QWebEngineQuotaRequest : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineQuotaRequest* new_QWebEngineQuotaRequest();
void delete_QWebEngineQuotaRequest(QWebEngineQuotaRequest* obj) { delete obj; }
   void accept(QWebEngineQuotaRequest* theWrappedObject);
   bool  __ne__(QWebEngineQuotaRequest* theWrappedObject, const QWebEngineQuotaRequest&  arg__1) const;
   bool  __eq__(QWebEngineQuotaRequest* theWrappedObject, const QWebEngineQuotaRequest&  arg__1) const;
   QUrl  origin(QWebEngineQuotaRequest* theWrappedObject) const;
   void reject(QWebEngineQuotaRequest* theWrappedObject);
   qint64  requestedSize(QWebEngineQuotaRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineRegisterProtocolHandlerRequest* new_QWebEngineRegisterProtocolHandlerRequest();
void delete_QWebEngineRegisterProtocolHandlerRequest(QWebEngineRegisterProtocolHandlerRequest* obj) { delete obj; }
   void accept(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject);
   bool  __ne__(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject, const QWebEngineRegisterProtocolHandlerRequest&  that) const;
   bool  __eq__(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject, const QWebEngineRegisterProtocolHandlerRequest&  that) const;
   QUrl  origin(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject) const;
   void reject(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject);
   QString  scheme(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineScript : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InjectionPoint ScriptWorldId )
enum InjectionPoint{
  Deferred = QWebEngineScript::Deferred,   DocumentReady = QWebEngineScript::DocumentReady,   DocumentCreation = QWebEngineScript::DocumentCreation};
enum ScriptWorldId{
  MainWorld = QWebEngineScript::MainWorld,   ApplicationWorld = QWebEngineScript::ApplicationWorld,   UserWorld = QWebEngineScript::UserWorld};
public slots:
QWebEngineScript* new_QWebEngineScript();
QWebEngineScript* new_QWebEngineScript(const QWebEngineScript&  other);
void delete_QWebEngineScript(QWebEngineScript* obj) { delete obj; }
   QWebEngineScript::InjectionPoint  injectionPoint(QWebEngineScript* theWrappedObject) const;
   QString  name(QWebEngineScript* theWrappedObject) const;
   bool  __ne__(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other) const;
   QWebEngineScript*  operator_assign(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other);
   bool  __eq__(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other) const;
   bool  runsOnSubFrames(QWebEngineScript* theWrappedObject) const;
   void setInjectionPoint(QWebEngineScript* theWrappedObject, QWebEngineScript::InjectionPoint  arg__1);
   void setName(QWebEngineScript* theWrappedObject, const QString&  arg__1);
   void setRunsOnSubFrames(QWebEngineScript* theWrappedObject, bool  on);
   void setSourceCode(QWebEngineScript* theWrappedObject, const QString&  arg__1);
   void setSourceUrl(QWebEngineScript* theWrappedObject, const QUrl&  url);
   void setWorldId(QWebEngineScript* theWrappedObject, unsigned int  arg__1);
   QString  sourceCode(QWebEngineScript* theWrappedObject) const;
   QUrl  sourceUrl(QWebEngineScript* theWrappedObject) const;
   void swap(QWebEngineScript* theWrappedObject, QWebEngineScript&  other);
   unsigned int  worldId(QWebEngineScript* theWrappedObject) const;
    QString py_toString(QWebEngineScript*);
};





class PythonQtWrapper_QWebEngineScriptCollection : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineScriptCollection(QWebEngineScriptCollection* obj) { delete obj; }
   void clear(QWebEngineScriptCollection* theWrappedObject);
   bool  contains(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  value) const;
   int  count(QWebEngineScriptCollection* theWrappedObject) const;
   QList<QWebEngineScript >  find(QWebEngineScriptCollection* theWrappedObject, const QString&  name) const;
   void insert(QWebEngineScriptCollection* theWrappedObject, const QList<QWebEngineScript >&  list);
   void insert(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  arg__1);
   bool  isEmpty(QWebEngineScriptCollection* theWrappedObject) const;
   bool  remove(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  arg__1);
   QList<QWebEngineScript >  toList(QWebEngineScriptCollection* theWrappedObject) const;
    bool __nonzero__(QWebEngineScriptCollection* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QWebEngineSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontFamily FontSize UnknownUrlSchemePolicy WebAttribute )
enum FontFamily{
  StandardFont = QWebEngineSettings::StandardFont,   FixedFont = QWebEngineSettings::FixedFont,   SerifFont = QWebEngineSettings::SerifFont,   SansSerifFont = QWebEngineSettings::SansSerifFont,   CursiveFont = QWebEngineSettings::CursiveFont,   FantasyFont = QWebEngineSettings::FantasyFont,   PictographFont = QWebEngineSettings::PictographFont};
enum FontSize{
  MinimumFontSize = QWebEngineSettings::MinimumFontSize,   MinimumLogicalFontSize = QWebEngineSettings::MinimumLogicalFontSize,   DefaultFontSize = QWebEngineSettings::DefaultFontSize,   DefaultFixedFontSize = QWebEngineSettings::DefaultFixedFontSize};
enum UnknownUrlSchemePolicy{
  InheritedUnknownUrlSchemePolicy = QWebEngineSettings::InheritedUnknownUrlSchemePolicy,   DisallowUnknownUrlSchemes = QWebEngineSettings::DisallowUnknownUrlSchemes,   AllowUnknownUrlSchemesFromUserInteraction = QWebEngineSettings::AllowUnknownUrlSchemesFromUserInteraction,   AllowAllUnknownUrlSchemes = QWebEngineSettings::AllowAllUnknownUrlSchemes};
enum WebAttribute{
  AutoLoadImages = QWebEngineSettings::AutoLoadImages,   JavascriptEnabled = QWebEngineSettings::JavascriptEnabled,   JavascriptCanOpenWindows = QWebEngineSettings::JavascriptCanOpenWindows,   JavascriptCanAccessClipboard = QWebEngineSettings::JavascriptCanAccessClipboard,   LinksIncludedInFocusChain = QWebEngineSettings::LinksIncludedInFocusChain,   LocalStorageEnabled = QWebEngineSettings::LocalStorageEnabled,   LocalContentCanAccessRemoteUrls = QWebEngineSettings::LocalContentCanAccessRemoteUrls,   XSSAuditingEnabled = QWebEngineSettings::XSSAuditingEnabled,   SpatialNavigationEnabled = QWebEngineSettings::SpatialNavigationEnabled,   LocalContentCanAccessFileUrls = QWebEngineSettings::LocalContentCanAccessFileUrls,   HyperlinkAuditingEnabled = QWebEngineSettings::HyperlinkAuditingEnabled,   ScrollAnimatorEnabled = QWebEngineSettings::ScrollAnimatorEnabled,   ErrorPageEnabled = QWebEngineSettings::ErrorPageEnabled,   PluginsEnabled = QWebEngineSettings::PluginsEnabled,   FullScreenSupportEnabled = QWebEngineSettings::FullScreenSupportEnabled,   ScreenCaptureEnabled = QWebEngineSettings::ScreenCaptureEnabled,   WebGLEnabled = QWebEngineSettings::WebGLEnabled,   Accelerated2dCanvasEnabled = QWebEngineSettings::Accelerated2dCanvasEnabled,   AutoLoadIconsForPage = QWebEngineSettings::AutoLoadIconsForPage,   TouchIconsEnabled = QWebEngineSettings::TouchIconsEnabled,   FocusOnNavigationEnabled = QWebEngineSettings::FocusOnNavigationEnabled,   PrintElementBackgrounds = QWebEngineSettings::PrintElementBackgrounds,   AllowRunningInsecureContent = QWebEngineSettings::AllowRunningInsecureContent,   AllowGeolocationOnInsecureOrigins = QWebEngineSettings::AllowGeolocationOnInsecureOrigins,   AllowWindowActivationFromJavaScript = QWebEngineSettings::AllowWindowActivationFromJavaScript,   ShowScrollBars = QWebEngineSettings::ShowScrollBars,   PlaybackRequiresUserGesture = QWebEngineSettings::PlaybackRequiresUserGesture,   WebRTCPublicInterfacesOnly = QWebEngineSettings::WebRTCPublicInterfacesOnly,   JavascriptCanPaste = QWebEngineSettings::JavascriptCanPaste,   DnsPrefetchEnabled = QWebEngineSettings::DnsPrefetchEnabled,   PdfViewerEnabled = QWebEngineSettings::PdfViewerEnabled,   NavigateOnDropEnabled = QWebEngineSettings::NavigateOnDropEnabled,   ReadingFromCanvasEnabled = QWebEngineSettings::ReadingFromCanvasEnabled,   ForceDarkMode = QWebEngineSettings::ForceDarkMode};
public slots:
void delete_QWebEngineSettings(QWebEngineSettings* obj) { delete obj; }
   QString  defaultTextEncoding(QWebEngineSettings* theWrappedObject) const;
   QString  fontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which) const;
   int  fontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type) const;
   void resetAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr);
   void resetFontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which);
   void resetFontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type);
   void resetUnknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject);
   void setAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr, bool  on);
   void setDefaultTextEncoding(QWebEngineSettings* theWrappedObject, const QString&  encoding);
   void setFontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which, const QString&  family);
   void setFontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type, int  size);
   void setUnknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject, QWebEngineSettings::UnknownUrlSchemePolicy  policy);
   bool  testAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr) const;
   QWebEngineSettings::UnknownUrlSchemePolicy  unknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineUrlRequestInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NavigationType ResourceType )
enum NavigationType{
  NavigationTypeLink = QWebEngineUrlRequestInfo::NavigationTypeLink,   NavigationTypeTyped = QWebEngineUrlRequestInfo::NavigationTypeTyped,   NavigationTypeFormSubmitted = QWebEngineUrlRequestInfo::NavigationTypeFormSubmitted,   NavigationTypeBackForward = QWebEngineUrlRequestInfo::NavigationTypeBackForward,   NavigationTypeReload = QWebEngineUrlRequestInfo::NavigationTypeReload,   NavigationTypeOther = QWebEngineUrlRequestInfo::NavigationTypeOther,   NavigationTypeRedirect = QWebEngineUrlRequestInfo::NavigationTypeRedirect};
enum ResourceType{
  ResourceTypeMainFrame = QWebEngineUrlRequestInfo::ResourceTypeMainFrame,   ResourceTypeSubFrame = QWebEngineUrlRequestInfo::ResourceTypeSubFrame,   ResourceTypeStylesheet = QWebEngineUrlRequestInfo::ResourceTypeStylesheet,   ResourceTypeScript = QWebEngineUrlRequestInfo::ResourceTypeScript,   ResourceTypeImage = QWebEngineUrlRequestInfo::ResourceTypeImage,   ResourceTypeFontResource = QWebEngineUrlRequestInfo::ResourceTypeFontResource,   ResourceTypeSubResource = QWebEngineUrlRequestInfo::ResourceTypeSubResource,   ResourceTypeObject = QWebEngineUrlRequestInfo::ResourceTypeObject,   ResourceTypeMedia = QWebEngineUrlRequestInfo::ResourceTypeMedia,   ResourceTypeWorker = QWebEngineUrlRequestInfo::ResourceTypeWorker,   ResourceTypeSharedWorker = QWebEngineUrlRequestInfo::ResourceTypeSharedWorker,   ResourceTypePrefetch = QWebEngineUrlRequestInfo::ResourceTypePrefetch,   ResourceTypeFavicon = QWebEngineUrlRequestInfo::ResourceTypeFavicon,   ResourceTypeXhr = QWebEngineUrlRequestInfo::ResourceTypeXhr,   ResourceTypePing = QWebEngineUrlRequestInfo::ResourceTypePing,   ResourceTypeServiceWorker = QWebEngineUrlRequestInfo::ResourceTypeServiceWorker,   ResourceTypeCspReport = QWebEngineUrlRequestInfo::ResourceTypeCspReport,   ResourceTypePluginResource = QWebEngineUrlRequestInfo::ResourceTypePluginResource,   ResourceTypeNavigationPreloadMainFrame = QWebEngineUrlRequestInfo::ResourceTypeNavigationPreloadMainFrame,   ResourceTypeNavigationPreloadSubFrame = QWebEngineUrlRequestInfo::ResourceTypeNavigationPreloadSubFrame,   ResourceTypeLast = QWebEngineUrlRequestInfo::ResourceTypeLast,   ResourceTypeWebSocket = QWebEngineUrlRequestInfo::ResourceTypeWebSocket,   ResourceTypeUnknown = QWebEngineUrlRequestInfo::ResourceTypeUnknown};
public slots:
   void block(QWebEngineUrlRequestInfo* theWrappedObject, bool  shouldBlock);
   bool  changed(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QUrl  firstPartyUrl(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QHash<QByteArray , QByteArray >  httpHeaders(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QUrl  initiator(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QWebEngineUrlRequestInfo::NavigationType  navigationType(QWebEngineUrlRequestInfo* theWrappedObject) const;
   void redirect(QWebEngineUrlRequestInfo* theWrappedObject, const QUrl&  url);
   QIODevice*  requestBody(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QByteArray  requestMethod(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QUrl  requestUrl(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QWebEngineUrlRequestInfo::ResourceType  resourceType(QWebEngineUrlRequestInfo* theWrappedObject) const;
   void setHttpHeader(QWebEngineUrlRequestInfo* theWrappedObject, const QByteArray&  name, const QByteArray&  value);
};





class PythonQtShell_QWebEngineUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor
{
public:
    PythonQtShell_QWebEngineUrlRequestInterceptor(QObject*  p = nullptr):QWebEngineUrlRequestInterceptor(p),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineUrlRequestInterceptor() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void interceptRequest(QWebEngineUrlRequestInfo&  info) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEngineUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor
{ public:
inline void py_q_interceptRequest(QWebEngineUrlRequestInfo&  info) { this->interceptRequest(info); }
};

class PythonQtWrapper_QWebEngineUrlRequestInterceptor : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineUrlRequestInterceptor* new_QWebEngineUrlRequestInterceptor(QObject*  p = nullptr);
void delete_QWebEngineUrlRequestInterceptor(QWebEngineUrlRequestInterceptor* obj) { delete obj; }
   void interceptRequest(QWebEngineUrlRequestInterceptor* theWrappedObject, QWebEngineUrlRequestInfo&  info);
   void py_q_interceptRequest(QWebEngineUrlRequestInterceptor* theWrappedObject, QWebEngineUrlRequestInfo&  info){  (((PythonQtPublicPromoter_QWebEngineUrlRequestInterceptor*)theWrappedObject)->py_q_interceptRequest(info));}
};





class PythonQtWrapper_QWebEngineUrlRequestJob : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineUrlRequestJob(QWebEngineUrlRequestJob* obj) { delete obj; }
   void fail(QWebEngineUrlRequestJob* theWrappedObject, QWebEngineUrlRequestJob::Error  error);
   QUrl  initiator(QWebEngineUrlRequestJob* theWrappedObject) const;
   void redirect(QWebEngineUrlRequestJob* theWrappedObject, const QUrl&  url);
   void reply(QWebEngineUrlRequestJob* theWrappedObject, const QByteArray&  contentType, QIODevice*  device);
   QIODevice*  requestBody(QWebEngineUrlRequestJob* theWrappedObject) const;
   QMap<QByteArray , QByteArray >  requestHeaders(QWebEngineUrlRequestJob* theWrappedObject) const;
   QByteArray  requestMethod(QWebEngineUrlRequestJob* theWrappedObject) const;
   QUrl  requestUrl(QWebEngineUrlRequestJob* theWrappedObject) const;
   void setAdditionalResponseHeaders(QWebEngineUrlRequestJob* theWrappedObject, const QMultiMap<QByteArray , QByteArray >&  additionalResponseHeaders) const;
};


