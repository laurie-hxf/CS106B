#ifndef LIST_GLOBAL_H
#define LIST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIST_LIBRARY)
#define LIST_EXPORT Q_DECL_EXPORT
#else
#define LIST_EXPORT Q_DECL_IMPORT
#endif

#endif // LIST_GLOBAL_H
