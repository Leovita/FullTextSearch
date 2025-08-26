#ifndef org_apache_lucene_index_SegmentInfos$FindSegmentsFile_H
#define org_apache_lucene_index_SegmentInfos$FindSegmentsFile_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
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

        class SegmentInfos$FindSegmentsFile : public ::java::lang::Object {
         public:
          enum {
            mid_run_4819806f62f1360a,
            mid_run_310cec18b8987d4a,
            mid_doBody_a78a91e32cc37c7c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfos$FindSegmentsFile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentInfos$FindSegmentsFile(const SegmentInfos$FindSegmentsFile& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Object run() const;
          ::java::lang::Object run(const ::org::apache::lucene::index::IndexCommit &) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentInfos$FindSegmentsFile);
        extern PyTypeObject *PY_TYPE(SegmentInfos$FindSegmentsFile);

        class t_SegmentInfos$FindSegmentsFile {
        public:
          PyObject_HEAD
          SegmentInfos$FindSegmentsFile object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SegmentInfos$FindSegmentsFile *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SegmentInfos$FindSegmentsFile&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SegmentInfos$FindSegmentsFile&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
