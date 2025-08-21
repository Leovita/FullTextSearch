#ifndef org_apache_lucene_search_SegmentCacheable_H
#define org_apache_lucene_search_SegmentCacheable_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
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
      namespace search {

        class SegmentCacheable : public ::java::lang::Object {
         public:
          enum {
            mid_isCacheable_03101e9518c66be0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentCacheable(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentCacheable(const SegmentCacheable& obj) : ::java::lang::Object(obj) {}

          jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentCacheable);
        extern PyTypeObject *PY_TYPE(SegmentCacheable);

        class t_SegmentCacheable {
        public:
          PyObject_HEAD
          SegmentCacheable object;
          static PyObject *wrap_Object(const SegmentCacheable&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
