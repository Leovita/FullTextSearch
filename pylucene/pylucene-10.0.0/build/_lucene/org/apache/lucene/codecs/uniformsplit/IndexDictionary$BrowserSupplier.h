#ifndef org_apache_lucene_codecs_uniformsplit_IndexDictionary$BrowserSupplier_H
#define org_apache_lucene_codecs_uniformsplit_IndexDictionary$BrowserSupplier_H

#include "org/apache/lucene/util/IOSupplier.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary$Browser;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class IndexDictionary$BrowserSupplier : public ::org::apache::lucene::util::IOSupplier {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexDictionary$BrowserSupplier(jobject obj) : ::org::apache::lucene::util::IOSupplier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexDictionary$BrowserSupplier(const IndexDictionary$BrowserSupplier& obj) : ::org::apache::lucene::util::IOSupplier(obj) {}
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(IndexDictionary$BrowserSupplier);
          extern PyTypeObject *PY_TYPE(IndexDictionary$BrowserSupplier);

          class t_IndexDictionary$BrowserSupplier {
          public:
            PyObject_HEAD
            IndexDictionary$BrowserSupplier object;
            static PyObject *wrap_Object(const IndexDictionary$BrowserSupplier&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
