#ifndef org_apache_lucene_codecs_uniformsplit_IndexDictionary_H
#define org_apache_lucene_codecs_uniformsplit_IndexDictionary_H

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
          class BlockEncoder;
        }
      }
      namespace store {
        class DataOutput;
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

          class IndexDictionary : public ::java::lang::Object {
           public:
            enum {
              mid_browser_a1250803d9fc677a,
              mid_write_92a1156cce64bb27,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexDictionary(const IndexDictionary& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$Browser browser() const;
            void write(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &) const;
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
          extern PyType_Def PY_TYPE_DEF(IndexDictionary);
          extern PyTypeObject *PY_TYPE(IndexDictionary);

          class t_IndexDictionary {
          public:
            PyObject_HEAD
            IndexDictionary object;
            static PyObject *wrap_Object(const IndexDictionary&);
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
