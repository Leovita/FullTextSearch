#ifndef org_apache_lucene_index_IndexWriterEventListener_H
#define org_apache_lucene_index_IndexWriterEventListener_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriterEventListener;
        class MergePolicy$MergeSpecification;
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
      namespace index {

        class IndexWriterEventListener : public ::java::lang::Object {
         public:
          enum {
            mid_beginMergeOnFullFlush_e96594eb00031dc0,
            mid_endMergeOnFullFlush_e96594eb00031dc0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexWriterEventListener(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexWriterEventListener(const IndexWriterEventListener& obj) : ::java::lang::Object(obj) {}

          static IndexWriterEventListener *NO_OP_LISTENER;

          void beginMergeOnFullFlush(const ::org::apache::lucene::index::MergePolicy$MergeSpecification &) const;
          void endMergeOnFullFlush(const ::org::apache::lucene::index::MergePolicy$MergeSpecification &) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexWriterEventListener);
        extern PyTypeObject *PY_TYPE(IndexWriterEventListener);

        class t_IndexWriterEventListener {
        public:
          PyObject_HEAD
          IndexWriterEventListener object;
          static PyObject *wrap_Object(const IndexWriterEventListener&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
