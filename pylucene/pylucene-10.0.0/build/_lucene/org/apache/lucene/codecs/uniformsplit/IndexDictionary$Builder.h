#ifndef org_apache_lucene_codecs_uniformsplit_IndexDictionary$Builder_H
#define org_apache_lucene_codecs_uniformsplit_IndexDictionary$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary;
        }
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

          class IndexDictionary$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_add_0ad076b578ea277f,
              mid_build_c71d216bb01cfdc5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexDictionary$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexDictionary$Builder(const IndexDictionary$Builder& obj) : ::java::lang::Object(obj) {}

            void add(const ::org::apache::lucene::util::BytesRef &, jlong) const;
            ::org::apache::lucene::codecs::uniformsplit::IndexDictionary build() const;
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
          extern PyType_Def PY_TYPE_DEF(IndexDictionary$Builder);
          extern PyTypeObject *PY_TYPE(IndexDictionary$Builder);

          class t_IndexDictionary$Builder {
          public:
            PyObject_HEAD
            IndexDictionary$Builder object;
            static PyObject *wrap_Object(const IndexDictionary$Builder&);
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
