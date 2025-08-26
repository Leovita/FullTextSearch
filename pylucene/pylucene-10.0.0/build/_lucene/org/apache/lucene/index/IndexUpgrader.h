#ifndef org_apache_lucene_index_IndexUpgrader_H
#define org_apache_lucene_index_IndexUpgrader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace util {
        class InfoStream;
      }
      namespace index {
        class IndexWriterConfig;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexUpgrader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0bf39a7351552ef4,
            mid_init$_bf6b8553692a37c7,
            mid_init$_04463ea4ede3110e,
            mid_main_1f90f2fcbe43e50d,
            mid_upgrade_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexUpgrader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexUpgrader(const IndexUpgrader& obj) : ::java::lang::Object(obj) {}

          IndexUpgrader(const ::org::apache::lucene::store::Directory &);
          IndexUpgrader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig &, jboolean);
          IndexUpgrader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::util::InfoStream &, jboolean);

          static void main(const JArray< ::java::lang::String > &);
          void upgrade() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexUpgrader);
        extern PyTypeObject *PY_TYPE(IndexUpgrader);

        class t_IndexUpgrader {
        public:
          PyObject_HEAD
          IndexUpgrader object;
          static PyObject *wrap_Object(const IndexUpgrader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
