#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_webenginewidgets0.h"
#include "com_trolltech_qt_webenginewidgets1.h"



void PythonQt_init_QtWebEngineWidgets(PyObject* module) {
PythonQt::priv()->registerClass(&QWebChannel::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebChannel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebChannel>, module, 0);
PythonQt::priv()->registerClass(&QWebChannelAbstractTransport::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebChannelAbstractTransport>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebChannelAbstractTransport>, module, 0);
PythonQt::priv()->registerCPPClass("QWebEngineCertificateError", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineCertificateError>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QWebEngineClientCertificateSelection", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineClientCertificateSelection>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QWebEngineClientCertificateStore", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineClientCertificateStore>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QWebEngineContextMenuRequest::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineContextMenuRequest>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QWebEngineCookieStore::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineCookieStore>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QWebEngineCookieStore::FilterRequest", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineCookieStore__FilterRequest>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebEngineCookieStore__FilterRequest>, module, 0);
PythonQt::priv()->registerClass(&QWebEngineDownloadRequest::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineDownloadRequest>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QWebEngineFileSystemAccessRequest", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineFileSystemAccessRequest>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QWebEngineFindTextResult", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineFindTextResult>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QWebEngineFullScreenRequest", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineFullScreenRequest>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QWebEngineHistory::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineHistory>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QWebEngineHistoryItem", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineHistoryItem>, nullptr, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QWebEngineHistoryModel::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineHistoryModel>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QWebEngineHttpRequest", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineHttpRequest>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QWebEngineLoadingInfo", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineLoadingInfo>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QWebEngineNavigationRequest::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineNavigationRequest>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QWebEngineNewWindowRequest::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineNewWindowRequest>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QWebEngineNotification::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineNotification>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QWebEnginePage::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEnginePage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebEnginePage>, module, 0);
PythonQt::priv()->registerClass(&QWebEngineProfile::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineProfile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebEngineProfile>, module, 0);
PythonQt::priv()->registerCPPClass("QWebEngineQuotaRequest", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineQuotaRequest>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QWebEngineRegisterProtocolHandlerRequest", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QWebEngineScript", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineScript>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QWebEngineScriptCollection", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineScriptCollection>, nullptr, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QWebEngineSettings", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineSettings>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QWebEngineUrlRequestInfo", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineUrlRequestInfo>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QWebEngineUrlRequestInterceptor::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineUrlRequestInterceptor>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebEngineUrlRequestInterceptor>, module, 0);
PythonQt::priv()->registerClass(&QWebEngineUrlRequestJob::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineUrlRequestJob>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QWebEngineUrlScheme", "", "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineUrlScheme>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QWebEngineUrlSchemeHandler::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineUrlSchemeHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebEngineUrlSchemeHandler>, module, 0);
PythonQt::priv()->registerClass(&QWebEngineView::staticMetaObject, "QtWebEngineWidgets", PythonQtCreateObject<PythonQtWrapper_QWebEngineView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebEngineView>, module, 0);


PythonQtRegisterListTemplateConverterForKnownClass(QList, QModelIndex);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QPersistentModelIndex);
#ifndef QT_NO_SSL
PythonQtRegisterListTemplateConverterForKnownClass(QList, QSslCertificate);
#endif
PythonQtRegisterListTemplateConverterForKnownClass(QList, QWebEngineHistoryItem);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QWebEngineScript);
}
