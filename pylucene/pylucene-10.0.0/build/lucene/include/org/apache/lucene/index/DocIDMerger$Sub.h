#ifndef org_apache_lucene_index_DocIDMerger$Sub_H
#define org_apache_lucene_index_DocIDMerger$Sub_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState$DocMap;
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

        class DocIDMerger$Sub : public ::java::lang::Object {
         public:
          enum {
            mid_nextDoc_20fbf7565993c3d7,
            mid_nextMappedDoc_20fbf7565993c3d7,
            max_mid
          };

          enum {
            fid_docMap,
            fid_mappedDocID,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIDMerger$Sub(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIDMerger$Sub(const DocIDMerger$Sub& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::MergeState$DocMap _get_docMap() const;
          jint _get_mappedDocID() const;
          void _set_mappedDocID(jint) const;

          jint nextDoc() const;
          jint nextMappedDoc() const;
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
        extern PyType_Def PY_TYPE_DEF(DocIDMerger$Sub);
        extern PyTypeObject *PY_TYPE(DocIDMerger$Sub);

        class t_DocIDMerger$Sub {
        public:
          PyObject_HEAD
          DocIDMerger$Sub object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocIDMerger$Sub *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocIDMerger$Sub&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocIDMerger$Sub&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
