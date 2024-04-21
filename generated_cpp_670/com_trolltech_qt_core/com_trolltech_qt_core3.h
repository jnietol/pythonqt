#include <PythonQt.h>
#include <QObject>
#include <QStringList>
#include <QVariant>
#include <qabstractanimation.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcborcommon.h>
#include <qcontainerfwd.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdeadlinetimer.h>
#include <qeasingcurve.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocale.h>
#include <qlogging.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpauseanimation.h>
#include <qreadwritelock.h>
#include <qsemaphore.h>
#include <qsequentialanimationgroup.h>
#include <qsettings.h>
#include <qsharedmemory.h>
#include <qsignalmapper.h>
#include <qsocketnotifier.h>
#include <qstringmatcher.h>
#include <qsysinfo.h>
#include <qtextstream.h>
#include <qthread.h>
#include <qtimezone.h>
#include <qtipccommon.h>
#include <quuid.h>
#include <qvariantanimation.h>



class PythonQtWrapper_QSemaphore : public QObject
{ Q_OBJECT
public:
public slots:
QSemaphore* new_QSemaphore(int  n = 0);
void delete_QSemaphore(QSemaphore* obj) { delete obj; }
   void acquire(QSemaphore* theWrappedObject, int  n = 1);
   int  available(QSemaphore* theWrappedObject) const;
   void release(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, QDeadlineTimer  timeout);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout);
   bool  try_acquire(QSemaphore* theWrappedObject);
};





class PythonQtShell_QSequentialAnimationGroup : public QSequentialAnimationGroup
{
public:
    PythonQtShell_QSequentialAnimationGroup(QObject*  parent = nullptr):QSequentialAnimationGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSequentialAnimationGroup() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSequentialAnimationGroup : public QSequentialAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { this->updateDirection(direction); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QSequentialAnimationGroup::duration(); }
inline bool  py_q_event(QEvent*  event) { return QSequentialAnimationGroup::event(event); }
inline void py_q_updateCurrentTime(int  arg__1) { QSequentialAnimationGroup::updateCurrentTime(arg__1); }
inline void py_q_updateDirection(QAbstractAnimation::Direction  direction) { QSequentialAnimationGroup::updateDirection(direction); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QSequentialAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QSequentialAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QSequentialAnimationGroup* new_QSequentialAnimationGroup(QObject*  parent = nullptr);
void delete_QSequentialAnimationGroup(QSequentialAnimationGroup* obj) { delete obj; }
   QPauseAnimation*  addPause(QSequentialAnimationGroup* theWrappedObject, int  msecs);
   QAbstractAnimation*  currentAnimation(QSequentialAnimationGroup* theWrappedObject) const;
   int  py_q_duration(QSequentialAnimationGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_duration());}
   bool  py_q_event(QSequentialAnimationGroup* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_event(event));}
   QPauseAnimation*  insertPause(QSequentialAnimationGroup* theWrappedObject, int  index, int  msecs);
   void py_q_updateCurrentTime(QSequentialAnimationGroup* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
   void py_q_updateDirection(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateDirection(direction));}
   void py_q_updateState(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtShell_QSettings : public QSettings
{
public:
    PythonQtShell_QSettings(QObject*  parent = nullptr):QSettings(parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(format, scope, organization, application, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, QObject*  parent = nullptr):QSettings(scope, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(scope, organization, application, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = nullptr):QSettings(fileName, format, parent),_wrapper(nullptr) {};
    PythonQtShell_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr):QSettings(organization, application, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSettings() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSettings : public QSettings
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  py_q_event(QEvent*  event) { return QSettings::event(event); }
};

class PythonQtWrapper_QSettings : public QObject
{ Q_OBJECT
public:
public slots:
QSettings* new_QSettings(QObject*  parent = nullptr);
QSettings* new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
QSettings* new_QSettings(QSettings::Scope  scope, QObject*  parent = nullptr);
QSettings* new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
QSettings* new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = nullptr);
QSettings* new_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = nullptr);
void delete_QSettings(QSettings* obj) { delete obj; }
   QStringList  allKeys(QSettings* theWrappedObject) const;
   QString  applicationName(QSettings* theWrappedObject) const;
   void beginGroup(QSettings* theWrappedObject, QAnyStringView  prefix);
   int  beginReadArray(QSettings* theWrappedObject, QAnyStringView  prefix);
   void beginWriteArray(QSettings* theWrappedObject, QAnyStringView  prefix, int  size = -1);
   QStringList  childGroups(QSettings* theWrappedObject) const;
   QStringList  childKeys(QSettings* theWrappedObject) const;
   void clear(QSettings* theWrappedObject);
   bool  contains(QSettings* theWrappedObject, QAnyStringView  key) const;
   QSettings::Format  static_QSettings_defaultFormat();
   void endArray(QSettings* theWrappedObject);
   void endGroup(QSettings* theWrappedObject);
   bool  py_q_event(QSettings* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSettings*)theWrappedObject)->py_q_event(event));}
   bool  fallbacksEnabled(QSettings* theWrappedObject) const;
   QString  fileName(QSettings* theWrappedObject) const;
   QSettings::Format  format(QSettings* theWrappedObject) const;
   QString  group(QSettings* theWrappedObject) const;
   bool  isAtomicSyncRequired(QSettings* theWrappedObject) const;
   bool  isWritable(QSettings* theWrappedObject) const;
   QString  organizationName(QSettings* theWrappedObject) const;
   void remove(QSettings* theWrappedObject, QAnyStringView  key);
   QSettings::Scope  scope(QSettings* theWrappedObject) const;
   void setArrayIndex(QSettings* theWrappedObject, int  i);
   void setAtomicSyncRequired(QSettings* theWrappedObject, bool  enable);
   void static_QSettings_setDefaultFormat(QSettings::Format  format);
   void setFallbacksEnabled(QSettings* theWrappedObject, bool  b);
   void static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path);
   void setValue(QSettings* theWrappedObject, QAnyStringView  key, const QVariant&  value);
   QSettings::Status  status(QSettings* theWrappedObject) const;
   void sync(QSettings* theWrappedObject);
   QVariant  value(QSettings* theWrappedObject, QAnyStringView  key) const;
   QVariant  value(QSettings* theWrappedObject, QAnyStringView  key, const QVariant&  defaultValue) const;
};





class PythonQtShell_QSharedMemory : public QSharedMemory
{
public:
    PythonQtShell_QSharedMemory(QObject*  parent = nullptr):QSharedMemory(parent),_wrapper(nullptr) {};
    PythonQtShell_QSharedMemory(const QNativeIpcKey&  key, QObject*  parent = nullptr):QSharedMemory(key, parent),_wrapper(nullptr) {};
    PythonQtShell_QSharedMemory(const QString&  key, QObject*  parent = nullptr):QSharedMemory(key, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSharedMemory() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSharedMemory : public QObject
{ Q_OBJECT
public:
public slots:
QSharedMemory* new_QSharedMemory(QObject*  parent = nullptr);
QSharedMemory* new_QSharedMemory(const QNativeIpcKey&  key, QObject*  parent = nullptr);
QSharedMemory* new_QSharedMemory(const QString&  key, QObject*  parent = nullptr);
void delete_QSharedMemory(QSharedMemory* obj) { delete obj; }
   bool  attach(QSharedMemory* theWrappedObject, QSharedMemory::AccessMode  mode = QSharedMemory::ReadWrite);
   const void*  constData(QSharedMemory* theWrappedObject) const;
   bool  create(QSharedMemory* theWrappedObject, qsizetype  size, QSharedMemory::AccessMode  mode = QSharedMemory::ReadWrite);
   void*  data(QSharedMemory* theWrappedObject);
   const void*  data(QSharedMemory* theWrappedObject) const;
   QSharedMemory::SharedMemoryError  error(QSharedMemory* theWrappedObject) const;
   QString  errorString(QSharedMemory* theWrappedObject) const;
   bool  isAttached(QSharedMemory* theWrappedObject) const;
   bool  static_QSharedMemory_isKeyTypeSupported(QNativeIpcKey::Type  type);
   QString  key(QSharedMemory* theWrappedObject) const;
   QNativeIpcKey  static_QSharedMemory_legacyNativeKey(const QString&  key, QNativeIpcKey::Type  type = QNativeIpcKey::legacyDefaultTypeForOs());
   bool  lock(QSharedMemory* theWrappedObject);
   QNativeIpcKey  nativeIpcKey(QSharedMemory* theWrappedObject) const;
   QString  nativeKey(QSharedMemory* theWrappedObject) const;
   QNativeIpcKey  static_QSharedMemory_platformSafeKey(const QString&  key, QNativeIpcKey::Type  type = QNativeIpcKey::DefaultTypeForOs);
   void setKey(QSharedMemory* theWrappedObject, const QString&  key);
   void setNativeKey(QSharedMemory* theWrappedObject, const QNativeIpcKey&  key);
   void setNativeKey(QSharedMemory* theWrappedObject, const QString&  key, QNativeIpcKey::Type  type = QNativeIpcKey::legacyDefaultTypeForOs());
   qsizetype  size(QSharedMemory* theWrappedObject) const;
   bool  unlock(QSharedMemory* theWrappedObject);
};





class PythonQtWrapper_QSignalBlocker : public QObject
{ Q_OBJECT
public:
public slots:
QSignalBlocker* new_QSignalBlocker(QObject&  o);
QSignalBlocker* new_QSignalBlocker(QObject*  o);
void delete_QSignalBlocker(QSignalBlocker* obj) { delete obj; }
   void dismiss(QSignalBlocker* theWrappedObject);
   void reblock(QSignalBlocker* theWrappedObject);
   void unblock(QSignalBlocker* theWrappedObject);
};





class PythonQtShell_QSignalMapper : public QSignalMapper
{
public:
    PythonQtShell_QSignalMapper(QObject*  parent = nullptr):QSignalMapper(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSignalMapper() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSignalMapper : public QObject
{ Q_OBJECT
public:
public slots:
QSignalMapper* new_QSignalMapper(QObject*  parent = nullptr);
void delete_QSignalMapper(QSignalMapper* obj) { delete obj; }
   QObject*  mapping(QSignalMapper* theWrappedObject, QObject*  object) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, const QString&  text) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, int  id) const;
   void removeMappings(QSignalMapper* theWrappedObject, QObject*  sender);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id);
};





class PythonQtShell_QSocketNotifier : public QSocketNotifier
{
public:
    PythonQtShell_QSocketNotifier(QSocketNotifier::Type  arg__1, QObject*  parent = nullptr):QSocketNotifier(arg__1, parent),_wrapper(nullptr) {};
    PythonQtShell_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent = nullptr):QSocketNotifier(socket, arg__2, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSocketNotifier() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSocketNotifier : public QSocketNotifier
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QSocketNotifier::event(arg__1); }
};

class PythonQtWrapper_QSocketNotifier : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Read = QSocketNotifier::Read,   Write = QSocketNotifier::Write,   Exception = QSocketNotifier::Exception};
public slots:
QSocketNotifier* new_QSocketNotifier(QSocketNotifier::Type  arg__1, QObject*  parent = nullptr);
QSocketNotifier* new_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent = nullptr);
void delete_QSocketNotifier(QSocketNotifier* obj) { delete obj; }
   bool  py_q_event(QSocketNotifier* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QSocketNotifier*)theWrappedObject)->py_q_event(arg__1));}
   bool  isEnabled(QSocketNotifier* theWrappedObject) const;
   bool  isValid(QSocketNotifier* theWrappedObject) const;
   void setSocket(QSocketNotifier* theWrappedObject, qintptr  socket);
   qintptr  socket(QSocketNotifier* theWrappedObject) const;
   QSocketNotifier::Type  type(QSocketNotifier* theWrappedObject) const;
    bool __nonzero__(QSocketNotifier* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QStringMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QStringMatcher* new_QStringMatcher();
QStringMatcher* new_QStringMatcher(const QChar*  uc, qsizetype  len, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QStringMatcher&  other);
void delete_QStringMatcher(QStringMatcher* obj) { delete obj; }
   Qt::CaseSensitivity  caseSensitivity(QStringMatcher* theWrappedObject) const;
   qsizetype  indexIn(QStringMatcher* theWrappedObject, const QChar*  str, qsizetype  length, qsizetype  from = 0) const;
   qsizetype  indexIn(QStringMatcher* theWrappedObject, const QString&  str, qsizetype  from = 0) const;
   QString  pattern(QStringMatcher* theWrappedObject) const;
   QStringView  patternView(QStringMatcher* theWrappedObject) const;
   void setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs);
   void setPattern(QStringMatcher* theWrappedObject, const QString&  pattern);
};





class PythonQtShell_QSysInfo : public QSysInfo
{
public:
    PythonQtShell_QSysInfo():QSysInfo(),_wrapper(nullptr) {};

   ~PythonQtShell_QSysInfo();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSysInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Endian Sizes )
enum Endian{
  BigEndian = QSysInfo::BigEndian,   LittleEndian = QSysInfo::LittleEndian,   ByteOrder = QSysInfo::ByteOrder};
enum Sizes{
  WordSize = QSysInfo::WordSize};
public slots:
QSysInfo* new_QSysInfo();
void delete_QSysInfo(QSysInfo* obj) { delete obj; }
   QByteArray  static_QSysInfo_bootUniqueId();
   QString  static_QSysInfo_buildAbi();
   QString  static_QSysInfo_buildCpuArchitecture();
   QString  static_QSysInfo_currentCpuArchitecture();
   QString  static_QSysInfo_kernelType();
   QString  static_QSysInfo_kernelVersion();
   QString  static_QSysInfo_machineHostName();
   QByteArray  static_QSysInfo_machineUniqueId();
   QString  static_QSysInfo_prettyProductName();
   QString  static_QSysInfo_productType();
   QString  static_QSysInfo_productVersion();
};





class PythonQtShell_QTextStream : public QTextStream
{
public:
    PythonQtShell_QTextStream():QTextStream(),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(QByteArray*  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite):QTextStream(array, openMode),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(QIODevice*  device):QTextStream(device),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(QString*  string, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite):QTextStream(string, openMode),_wrapper(nullptr) {};
    PythonQtShell_QTextStream(const QByteArray&  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadOnly):QTextStream(array, openMode),_wrapper(nullptr) {};

   ~PythonQtShell_QTextStream() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FieldAlignment NumberFlag RealNumberNotation Status )
Q_FLAGS(NumberFlags )
enum FieldAlignment{
  AlignLeft = QTextStream::AlignLeft,   AlignRight = QTextStream::AlignRight,   AlignCenter = QTextStream::AlignCenter,   AlignAccountingStyle = QTextStream::AlignAccountingStyle};
enum NumberFlag{
  ShowBase = QTextStream::ShowBase,   ForcePoint = QTextStream::ForcePoint,   ForceSign = QTextStream::ForceSign,   UppercaseBase = QTextStream::UppercaseBase,   UppercaseDigits = QTextStream::UppercaseDigits};
enum RealNumberNotation{
  SmartNotation = QTextStream::SmartNotation,   FixedNotation = QTextStream::FixedNotation,   ScientificNotation = QTextStream::ScientificNotation};
enum Status{
  Ok = QTextStream::Ok,   ReadPastEnd = QTextStream::ReadPastEnd,   ReadCorruptData = QTextStream::ReadCorruptData,   WriteFailed = QTextStream::WriteFailed};
Q_DECLARE_FLAGS(NumberFlags, NumberFlag)
public slots:
QTextStream* new_QTextStream();
QTextStream* new_QTextStream(QByteArray*  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite);
QTextStream* new_QTextStream(QIODevice*  device);
QTextStream* new_QTextStream(QString*  string, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite);
QTextStream* new_QTextStream(const QByteArray&  array, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadOnly);
void delete_QTextStream(QTextStream* obj) { delete obj; }
   bool  atEnd(QTextStream* theWrappedObject) const;
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   QIODevice*  device(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   int  fieldWidth(QTextStream* theWrappedObject) const;
   void flush(QTextStream* theWrappedObject);
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
   int  integerBase(QTextStream* theWrappedObject) const;
   QLocale  locale(QTextStream* theWrappedObject) const;
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   QTextStream*  writeByte(QTextStream* theWrappedObject, char  ch);
   QTextStream*  writeDouble(QTextStream* theWrappedObject, double  f);
   QTextStream*  writeFloat(QTextStream* theWrappedObject, float  f);
   QTextStream*  writeLongLong(QTextStream* theWrappedObject, qlonglong  i);
   QTextStream*  writeInt(QTextStream* theWrappedObject, signed int  i);
   QTextStream*  writeShort(QTextStream* theWrappedObject, signed short  i);
   QTextStream*  readByte(QTextStream* theWrappedObject, char&  ch);
   QTextStream*  readDouble(QTextStream* theWrappedObject, double&  f);
   QTextStream*  readFloat(QTextStream* theWrappedObject, float&  f);
   QTextStream*  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   QTextStream*  readInt(QTextStream* theWrappedObject, signed int&  i);
   QTextStream*  readShort(QTextStream* theWrappedObject, signed short&  i);
   QChar  padChar(QTextStream* theWrappedObject) const;
   qint64  pos(QTextStream* theWrappedObject) const;
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   QString  readAll(QTextStream* theWrappedObject);
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   bool  readLineInto(QTextStream* theWrappedObject, QString*  line, qint64  maxlen = 0);
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   void reset(QTextStream* theWrappedObject);
   void resetStatus(QTextStream* theWrappedObject);
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   void setLocale(QTextStream* theWrappedObject, const QLocale&  locale);
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   void setString(QTextStream* theWrappedObject, QString*  string, QIODeviceBase::OpenMode  openMode = QIODeviceBase::ReadWrite);
   void skipWhiteSpace(QTextStream* theWrappedObject);
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
};





class PythonQtShell_QThread : public QThread
{
public:
    PythonQtShell_QThread(QObject*  parent = nullptr):QThread(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QThread() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void run() override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QThread : public QThread
{ public:
inline int  promoted_exec() { return this->exec(); }
inline void promoted_run() { this->run(); }
static inline void promoted_setTerminationEnabled(bool  enabled = true) { setTerminationEnabled(enabled); }
inline bool  py_q_event(QEvent*  event) { return QThread::event(event); }
inline void py_q_run() { QThread::run(); }
};

class PythonQtWrapper_QThread : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Priority )
enum Priority{
  IdlePriority = QThread::IdlePriority,   LowestPriority = QThread::LowestPriority,   LowPriority = QThread::LowPriority,   NormalPriority = QThread::NormalPriority,   HighPriority = QThread::HighPriority,   HighestPriority = QThread::HighestPriority,   TimeCriticalPriority = QThread::TimeCriticalPriority,   InheritPriority = QThread::InheritPriority};
public slots:
QThread* new_QThread(QObject*  parent = nullptr);
void delete_QThread(QThread* obj) { delete obj; }
   QThread*  static_QThread_currentThread();
   Qt::HANDLE  static_QThread_currentThreadId();
   bool  py_q_event(QThread* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QThread*)theWrappedObject)->py_q_event(event));}
   QAbstractEventDispatcher*  eventDispatcher(QThread* theWrappedObject) const;
   int  exec(QThread* theWrappedObject);
   int  static_QThread_idealThreadCount();
   bool  isFinished(QThread* theWrappedObject) const;
   bool  isInterruptionRequested(QThread* theWrappedObject) const;
   bool  isRunning(QThread* theWrappedObject) const;
   int  loopLevel(QThread* theWrappedObject) const;
   void static_QThread_msleep(unsigned long  arg__1);
   QThread::Priority  priority(QThread* theWrappedObject) const;
   void requestInterruption(QThread* theWrappedObject);
   void run(QThread* theWrappedObject);
   void py_q_run(QThread* theWrappedObject){  (((PythonQtPublicPromoter_QThread*)theWrappedObject)->py_q_run());}
   void setEventDispatcher(QThread* theWrappedObject, QAbstractEventDispatcher*  eventDispatcher);
   void setPriority(QThread* theWrappedObject, QThread::Priority  priority);
   void setStackSize(QThread* theWrappedObject, uint  stackSize);
   void static_QThread_setTerminationEnabled(bool  enabled = true);
   void static_QThread_sleep(unsigned long  arg__1);
   uint  stackSize(QThread* theWrappedObject) const;
   void static_QThread_usleep(unsigned long  arg__1);
   bool  wait(QThread* theWrappedObject, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
   bool  wait(QThread* theWrappedObject, unsigned long  time);
   void static_QThread_yieldCurrentThread();
};





class PythonQtShell_QTimeZone : public QTimeZone
{
public:
    PythonQtShell_QTimeZone():QTimeZone(),_wrapper(nullptr) {};
    PythonQtShell_QTimeZone(QTimeZone::Initialization  spec):QTimeZone(spec),_wrapper(nullptr) {};
    PythonQtShell_QTimeZone(const QByteArray&  ianaId):QTimeZone(ianaId),_wrapper(nullptr) {};
    PythonQtShell_QTimeZone(const QByteArray&  zoneId, int  offsetSeconds, const QString&  name, const QString&  abbreviation, QLocale::Country  territory = QLocale::AnyTerritory, const QString&  comment = QString()):QTimeZone(zoneId, offsetSeconds, name, abbreviation, territory, comment),_wrapper(nullptr) {};
    PythonQtShell_QTimeZone(const QTimeZone&  other):QTimeZone(other),_wrapper(nullptr) {};
    PythonQtShell_QTimeZone(int  offsetSeconds):QTimeZone(offsetSeconds),_wrapper(nullptr) {};

   ~PythonQtShell_QTimeZone();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTimeZone : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Initialization NameType TimeType )
enum Initialization{
  LocalTime = QTimeZone::LocalTime,   UTC = QTimeZone::UTC};
enum NameType{
  DefaultName = QTimeZone::DefaultName,   LongName = QTimeZone::LongName,   ShortName = QTimeZone::ShortName,   OffsetName = QTimeZone::OffsetName};
enum TimeType{
  StandardTime = QTimeZone::StandardTime,   DaylightTime = QTimeZone::DaylightTime,   GenericTime = QTimeZone::GenericTime};
public slots:
QTimeZone* new_QTimeZone();
QTimeZone* new_QTimeZone(QTimeZone::Initialization  spec);
QTimeZone* new_QTimeZone(const QByteArray&  ianaId);
QTimeZone* new_QTimeZone(const QByteArray&  zoneId, int  offsetSeconds, const QString&  name, const QString&  abbreviation, QLocale::Country  territory = QLocale::AnyTerritory, const QString&  comment = QString());
QTimeZone* new_QTimeZone(const QTimeZone&  other);
QTimeZone* new_QTimeZone(int  offsetSeconds);
void delete_QTimeZone(QTimeZone* obj) { delete obj; }
   QString  abbreviation(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   QTimeZone  asBackendZone(QTimeZone* theWrappedObject) const;
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds();
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds(QLocale::Country  territory);
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds(int  offsetSeconds);
   QString  comment(QTimeZone* theWrappedObject) const;
   QLocale::Country  country(QTimeZone* theWrappedObject) const;
   int  daylightTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   QString  displayName(QTimeZone* theWrappedObject, QTimeZone::TimeType  timeType, QTimeZone::NameType  nameType = QTimeZone::DefaultName, const QLocale&  locale = QLocale()) const;
   QString  displayName(QTimeZone* theWrappedObject, const QDateTime&  atDateTime, QTimeZone::NameType  nameType = QTimeZone::DefaultName, const QLocale&  locale = QLocale()) const;
   int  fixedSecondsAheadOfUtc(QTimeZone* theWrappedObject) const;
   QTimeZone  static_QTimeZone_fromSecondsAheadOfUtc(int  offset);
   bool  hasDaylightTime(QTimeZone* theWrappedObject) const;
   bool  hasTransitions(QTimeZone* theWrappedObject) const;
   QByteArray  static_QTimeZone_ianaIdToWindowsId(const QByteArray&  ianaId);
   QByteArray  id(QTimeZone* theWrappedObject) const;
   bool  isDaylightTime(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   bool  static_QTimeZone_isTimeZoneIdAvailable(const QByteArray&  ianaId);
   bool  isUtcOrFixedOffset(QTimeZone* theWrappedObject) const;
   bool  static_QTimeZone_isUtcOrFixedOffset(Qt::TimeSpec  spec);
   bool  isValid(QTimeZone* theWrappedObject) const;
   int  offsetFromUtc(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   void writeTo(QTimeZone* theWrappedObject, QDataStream&  ds);
   QTimeZone*  operator_assign(QTimeZone* theWrappedObject, const QTimeZone&  other);
   void readFrom(QTimeZone* theWrappedObject, QDataStream&  ds);
   int  standardTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   void swap(QTimeZone* theWrappedObject, QTimeZone&  other);
   QTimeZone  static_QTimeZone_systemTimeZone();
   QByteArray  static_QTimeZone_systemTimeZoneId();
   QLocale::Country  territory(QTimeZone* theWrappedObject) const;
   Qt::TimeSpec  timeSpec(QTimeZone* theWrappedObject) const;
   QTimeZone  static_QTimeZone_utc();
   QByteArray  static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId);
   QByteArray  static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId, QLocale::Country  territory);
   QList<QByteArray >  static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId);
   QList<QByteArray >  static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId, QLocale::Country  territory);
    QString py_toString(QTimeZone*);
    bool __nonzero__(QTimeZone* obj) { return obj->isValid(); }
};





class PythonQtShell_QTimerEvent : public QTimerEvent
{
public:
    PythonQtShell_QTimerEvent(const QTimerEvent&  arg__1):QTimerEvent(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QTimerEvent(int  timerId):QTimerEvent(timerId),_wrapper(nullptr) {};

   ~PythonQtShell_QTimerEvent() override;

QTimerEvent*  clone() const override;
void setAccepted(bool  accepted) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTimerEvent : public QTimerEvent
{ public:
inline QTimerEvent&  promoted_operator_assign(const QTimerEvent&  other) { return this->QTimerEvent::operator=(other); }
inline QTimerEvent*  py_q_clone() const { return QTimerEvent::clone(); }
};

class PythonQtWrapper_QTimerEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTimerEvent* new_QTimerEvent(const QTimerEvent&  arg__1);
QTimerEvent* new_QTimerEvent(int  timerId);
void delete_QTimerEvent(QTimerEvent* obj) { delete obj; }
   QTimerEvent*  py_q_clone(QTimerEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTimerEvent*)theWrappedObject)->py_q_clone());}
   QTimerEvent*  operator_assign(QTimerEvent* theWrappedObject, const QTimerEvent&  other);
   int  timerId(QTimerEvent* theWrappedObject) const;
};





class PythonQtShell_QUuid : public QUuid
{
public:
    PythonQtShell_QUuid():QUuid(),_wrapper(nullptr) {};
    PythonQtShell_QUuid(QAnyStringView  string):QUuid(string),_wrapper(nullptr) {};
    PythonQtShell_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8):QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8),_wrapper(nullptr) {};

   ~PythonQtShell_QUuid();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QUuid : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StringFormat Variant Version )
enum StringFormat{
  WithBraces = QUuid::WithBraces,   WithoutBraces = QUuid::WithoutBraces,   Id128 = QUuid::Id128};
enum Variant{
  VarUnknown = QUuid::VarUnknown,   NCS = QUuid::NCS,   DCE = QUuid::DCE,   Microsoft = QUuid::Microsoft,   Reserved = QUuid::Reserved};
enum Version{
  VerUnknown = QUuid::VerUnknown,   Time = QUuid::Time,   EmbeddedPOSIX = QUuid::EmbeddedPOSIX,   Md5 = QUuid::Md5,   Name = QUuid::Name,   Random = QUuid::Random,   Sha1 = QUuid::Sha1};
public slots:
QUuid* new_QUuid();
QUuid* new_QUuid(QAnyStringView  string);
QUuid* new_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8);
QUuid* new_QUuid(const QUuid& other) {
PythonQtShell_QUuid* a = new PythonQtShell_QUuid();
*((QUuid*)a) = other;
return a; }
void delete_QUuid(QUuid* obj) { delete obj; }
   QUuid  static_QUuid_createUuid();
   QUuid  static_QUuid_createUuidV3(const QUuid&  ns, const QByteArray&  baseData);
   QUuid  static_QUuid_createUuidV3(const QUuid&  ns, const QString&  baseData);
   QUuid  static_QUuid_createUuidV5(const QUuid&  ns, const QByteArray&  baseData);
   QUuid  static_QUuid_createUuidV5(const QUuid&  ns, const QString&  baseData);
   QUuid  static_QUuid_fromBytes(const void*  bytes, QSysInfo::Endian  order = QSysInfo::BigEndian);
   QUuid  static_QUuid_fromRfc4122(QByteArrayView  arg__1);
   QUuid  static_QUuid_fromString(QAnyStringView  string);
   bool  isNull(QUuid* theWrappedObject) const;
   bool  __ne__(QUuid* theWrappedObject, const QUuid&  orig) const;
   bool  __lt__(QUuid* theWrappedObject, const QUuid&  other) const;
   void writeTo(QUuid* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QUuid* theWrappedObject, const QUuid&  rhs);
   bool  __eq__(QUuid* theWrappedObject, const QUuid&  orig) const;
   bool  __gt__(QUuid* theWrappedObject, const QUuid&  other) const;
   bool  __ge__(QUuid* theWrappedObject, const QUuid&  rhs);
   void readFrom(QUuid* theWrappedObject, QDataStream&  arg__1);
   QByteArray  toByteArray(QUuid* theWrappedObject, QUuid::StringFormat  mode = QUuid::WithBraces) const;
   QByteArray  toRfc4122(QUuid* theWrappedObject) const;
   QString  toString(QUuid* theWrappedObject, QUuid::StringFormat  mode = QUuid::WithBraces) const;
   QUuid::Variant  variant(QUuid* theWrappedObject) const;
   QUuid::Version  version(QUuid* theWrappedObject) const;
    QString py_toString(QUuid*);
    bool __nonzero__(QUuid* obj) { return !obj->isNull(); }
void py_set_data1(QUuid* theWrappedObject, uint  data1){ theWrappedObject->data1 = data1; }
uint  py_get_data1(QUuid* theWrappedObject){ return theWrappedObject->data1; }
void py_set_data2(QUuid* theWrappedObject, ushort  data2){ theWrappedObject->data2 = data2; }
ushort  py_get_data2(QUuid* theWrappedObject){ return theWrappedObject->data2; }
void py_set_data3(QUuid* theWrappedObject, ushort  data3){ theWrappedObject->data3 = data3; }
ushort  py_get_data3(QUuid* theWrappedObject){ return theWrappedObject->data3; }
};





class PythonQtShell_QVariantAnimation : public QVariantAnimation
{
public:
    PythonQtShell_QVariantAnimation(QObject*  parent = nullptr):QVariantAnimation(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVariantAnimation() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateCurrentValue(const QVariant&  value) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QVariantAnimation : public QVariantAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline QVariant  promoted_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return this->interpolated(from, to, progress); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline void promoted_updateCurrentValue(const QVariant&  value) { this->updateCurrentValue(value); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QVariantAnimation::duration(); }
inline bool  py_q_event(QEvent*  event) { return QVariantAnimation::event(event); }
inline QVariant  py_q_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return QVariantAnimation::interpolated(from, to, progress); }
inline void py_q_updateCurrentTime(int  arg__1) { QVariantAnimation::updateCurrentTime(arg__1); }
inline void py_q_updateCurrentValue(const QVariant&  value) { QVariantAnimation::updateCurrentValue(value); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QVariantAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QVariantAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QVariantAnimation* new_QVariantAnimation(QObject*  parent = nullptr);
void delete_QVariantAnimation(QVariantAnimation* obj) { delete obj; }
   QVariant  currentValue(QVariantAnimation* theWrappedObject) const;
   int  py_q_duration(QVariantAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_duration());}
   QEasingCurve  easingCurve(QVariantAnimation* theWrappedObject) const;
   QVariant  endValue(QVariantAnimation* theWrappedObject) const;
   bool  py_q_event(QVariantAnimation* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_event(event));}
   QVariant  interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const;
   QVariant  py_q_interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const{  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_interpolated(from, to, progress));}
   QVariant  keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const;
   QList<std::pair<qreal , QVariant >  >  keyValues(QVariantAnimation* theWrappedObject) const;
   void setDuration(QVariantAnimation* theWrappedObject, int  msecs);
   void setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing);
   void setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value);
   void setKeyValues(QVariantAnimation* theWrappedObject, const QList<std::pair<qreal , QVariant >  >&  values);
   void setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   QVariant  startValue(QVariantAnimation* theWrappedObject) const;
   void py_q_updateCurrentTime(QVariantAnimation* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
   void updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void py_q_updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateCurrentValue(value));}
   void py_q_updateState(QVariantAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtWrapper_QWriteLocker : public QObject
{ Q_OBJECT
public:
public slots:
QWriteLocker* new_QWriteLocker(QReadWriteLock*  readWriteLock);
void delete_QWriteLocker(QWriteLocker* obj) { delete obj; }
   QReadWriteLock*  readWriteLock(QWriteLocker* theWrappedObject) const;
   void relock(QWriteLocker* theWrappedObject);
   void unlock(QWriteLocker* theWrappedObject);

    void __enter__(QWriteLocker* /*self*/) {}
    void __exit__(QWriteLocker* self, PyObject* /*type*/, PyObject* /*value*/, PyObject* /*traceback*/) { self->unlock(); }
    
};





class PythonQtWrapper_QtCore : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QCborKnownTags QCborSimpleType QCborTag QtMsgType )
enum class QCborKnownTags{
  DateTimeString = static_cast<int>(::QCborKnownTags::DateTimeString),   UnixTime_t = static_cast<int>(::QCborKnownTags::UnixTime_t),   PositiveBignum = static_cast<int>(::QCborKnownTags::PositiveBignum),   NegativeBignum = static_cast<int>(::QCborKnownTags::NegativeBignum),   Decimal = static_cast<int>(::QCborKnownTags::Decimal),   Bigfloat = static_cast<int>(::QCborKnownTags::Bigfloat),   COSE_Encrypt0 = static_cast<int>(::QCborKnownTags::COSE_Encrypt0),   COSE_Mac0 = static_cast<int>(::QCborKnownTags::COSE_Mac0),   COSE_Sign1 = static_cast<int>(::QCborKnownTags::COSE_Sign1),   ExpectedBase64url = static_cast<int>(::QCborKnownTags::ExpectedBase64url),   ExpectedBase64 = static_cast<int>(::QCborKnownTags::ExpectedBase64),   ExpectedBase16 = static_cast<int>(::QCborKnownTags::ExpectedBase16),   EncodedCbor = static_cast<int>(::QCborKnownTags::EncodedCbor),   Url = static_cast<int>(::QCborKnownTags::Url),   Base64url = static_cast<int>(::QCborKnownTags::Base64url),   Base64 = static_cast<int>(::QCborKnownTags::Base64),   RegularExpression = static_cast<int>(::QCborKnownTags::RegularExpression),   MimeMessage = static_cast<int>(::QCborKnownTags::MimeMessage),   Uuid = static_cast<int>(::QCborKnownTags::Uuid),   COSE_Encrypt = static_cast<int>(::QCborKnownTags::COSE_Encrypt),   COSE_Mac = static_cast<int>(::QCborKnownTags::COSE_Mac),   COSE_Sign = static_cast<int>(::QCborKnownTags::COSE_Sign),   Signature = static_cast<int>(::QCborKnownTags::Signature)};
enum class QCborSimpleType{
  False = static_cast<int>(::QCborSimpleType::False),   True = static_cast<int>(::QCborSimpleType::True),   Null = static_cast<int>(::QCborSimpleType::Null),   Undefined = static_cast<int>(::QCborSimpleType::Undefined)};
enum class QCborTag{
};
enum QtMsgType{
  QtDebugMsg = ::QtDebugMsg,   QtWarningMsg = ::QtWarningMsg,   QtCriticalMsg = ::QtCriticalMsg,   QtFatalMsg = ::QtFatalMsg,   QtInfoMsg = ::QtInfoMsg,   QtSystemMsg = ::QtSystemMsg};
public slots:
};


