#ifndef org_apache_lucene_index_IndexUpgrader_H
#define org_apache_lucene_index_IndexUpgrader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class InfoStream;
      }
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexWriterConfig;
      }
    }
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
            mid_init$_3c151c130d7f3176,
            mid_init$_527ba76716c519b6,
            mid_init$_0f2763c96829bc29,
            mid_main_ce41e621b30e91b1,
            mid_upgrade_3720c61b0679eb3e,
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
