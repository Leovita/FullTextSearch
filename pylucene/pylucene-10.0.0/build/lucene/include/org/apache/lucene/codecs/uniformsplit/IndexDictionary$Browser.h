#ifndef org_apache_lucene_codecs_uniformsplit_IndexDictionary$Browser_H
#define org_apache_lucene_codecs_uniformsplit_IndexDictionary$Browser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
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

          class IndexDictionary$Browser : public ::java::lang::Object {
           public:
            enum {
              mid_seekBlock_7595cb5441b08443,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexDictionary$Browser(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexDictionary$Browser(const IndexDictionary$Browser& obj) : ::java::lang::Object(obj) {}

            jlong seekBlock(const ::org::apache::lucene::util::BytesRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(IndexDictionary$Browser);
          extern PyTypeObject *PY_TYPE(IndexDictionary$Browser);

          class t_IndexDictionary$Browser {
          public:
            PyObject_HEAD
            IndexDictionary$Browser object;
            static PyObject *wrap_Object(const IndexDictionary$Browser&);
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
