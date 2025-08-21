#ifndef org_apache_lucene_search_DocIdStream_H
#define org_apache_lucene_search_DocIdStream_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class CheckedIntConsumer;
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
      namespace search {

        class DocIdStream : public ::java::lang::Object {
         public:
          enum {
            mid_count_20fbf7565993c3d7,
            mid_forEach_91b42f36087d1010,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdStream(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIdStream(const DocIdStream& obj) : ::java::lang::Object(obj) {}

          jint count() const;
          void forEach(const ::org::apache::lucene::search::CheckedIntConsumer &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(DocIdStream);
        extern PyTypeObject *PY_TYPE(DocIdStream);

        class t_DocIdStream {
        public:
          PyObject_HEAD
          DocIdStream object;
          static PyObject *wrap_Object(const DocIdStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
