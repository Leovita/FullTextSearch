#ifndef org_apache_lucene_codecs_uniformsplit_FSTDictionary$BrowserSupplier_H
#define org_apache_lucene_codecs_uniformsplit_FSTDictionary$BrowserSupplier_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary$Browser;
          class BlockDecoder;
          class IndexDictionary$BrowserSupplier;
        }
      }
      namespace store {
        class IndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class FSTDictionary$BrowserSupplier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_97a90ba64f6d2239,
              mid_get_a1250803d9fc677a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTDictionary$BrowserSupplier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTDictionary$BrowserSupplier(const FSTDictionary$BrowserSupplier& obj) : ::java::lang::Object(obj) {}

            FSTDictionary$BrowserSupplier(const ::org::apache::lucene::store::IndexInput &, jlong, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, jboolean);

            ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$Browser get() const;
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
          extern PyType_Def PY_TYPE_DEF(FSTDictionary$BrowserSupplier);
          extern PyTypeObject *PY_TYPE(FSTDictionary$BrowserSupplier);

          class t_FSTDictionary$BrowserSupplier {
          public:
            PyObject_HEAD
            FSTDictionary$BrowserSupplier object;
            static PyObject *wrap_Object(const FSTDictionary$BrowserSupplier&);
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
