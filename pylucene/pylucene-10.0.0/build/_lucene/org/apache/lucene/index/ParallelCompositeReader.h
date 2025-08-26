#ifndef org_apache_lucene_index_ParallelCompositeReader_H
#define org_apache_lucene_index_ParallelCompositeReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader$CacheHelper;
        class CompositeReader;
        class LeafReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ParallelCompositeReader : public ::org::apache::lucene::index::BaseCompositeReader {
         public:
          enum {
            mid_init$_a263278a99f8e44d,
            mid_init$_e11031eefb9e1cc7,
            mid_init$_d0caf5203f7fb352,
            mid_getReaderCacheHelper_bcf8e7a3b3f2dbe2,
            mid_doClose_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParallelCompositeReader(jobject obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParallelCompositeReader(const ParallelCompositeReader& obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {}

          ParallelCompositeReader(const JArray< ::org::apache::lucene::index::CompositeReader > &);
          ParallelCompositeReader(jboolean, const JArray< ::org::apache::lucene::index::CompositeReader > &);
          ParallelCompositeReader(jboolean, const JArray< ::org::apache::lucene::index::CompositeReader > &, const JArray< ::org::apache::lucene::index::CompositeReader > &);

          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
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
        extern PyType_Def PY_TYPE_DEF(ParallelCompositeReader);
        extern PyTypeObject *PY_TYPE(ParallelCompositeReader);

        class t_ParallelCompositeReader {
        public:
          PyObject_HEAD
          ParallelCompositeReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ParallelCompositeReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ParallelCompositeReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ParallelCompositeReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
