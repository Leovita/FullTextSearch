#ifndef org_apache_lucene_index_SimpleMergedSegmentWarmer_H
#define org_apache_lucene_index_SimpleMergedSegmentWarmer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter$IndexReaderWarmer;
        class LeafReader;
      }
      namespace util {
        class InfoStream;
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
      namespace index {

        class SimpleMergedSegmentWarmer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f10e797612112ab1,
            mid_warm_412cc6aacc4af1b9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleMergedSegmentWarmer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleMergedSegmentWarmer(const SimpleMergedSegmentWarmer& obj) : ::java::lang::Object(obj) {}

          SimpleMergedSegmentWarmer(const ::org::apache::lucene::util::InfoStream &);

          void warm(const ::org::apache::lucene::index::LeafReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(SimpleMergedSegmentWarmer);
        extern PyTypeObject *PY_TYPE(SimpleMergedSegmentWarmer);

        class t_SimpleMergedSegmentWarmer {
        public:
          PyObject_HEAD
          SimpleMergedSegmentWarmer object;
          static PyObject *wrap_Object(const SimpleMergedSegmentWarmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
