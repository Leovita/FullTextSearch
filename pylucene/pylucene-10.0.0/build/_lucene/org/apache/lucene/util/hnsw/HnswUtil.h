#ifndef org_apache_lucene_util_hnsw_HnswUtil_H
#define org_apache_lucene_util_hnsw_HnswUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class HnswUtil : public ::java::lang::Object {
           public:
            enum {
              mid_graphIsRooted_5f0b51980dcace85,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswUtil(const HnswUtil& obj) : ::java::lang::Object(obj) {}

            static jboolean graphIsRooted(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
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
      namespace util {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(HnswUtil);
          extern PyTypeObject *PY_TYPE(HnswUtil);

          class t_HnswUtil {
          public:
            PyObject_HEAD
            HnswUtil object;
            static PyObject *wrap_Object(const HnswUtil&);
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
