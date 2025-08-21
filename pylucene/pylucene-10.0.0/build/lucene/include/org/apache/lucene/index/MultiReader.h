#ifndef org_apache_lucene_index_MultiReader_H
#define org_apache_lucene_index_MultiReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class Comparator;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class IndexReader$CacheHelper;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiReader : public ::org::apache::lucene::index::BaseCompositeReader {
         public:
          enum {
            mid_init$_c3775b3616995907,
            mid_init$_d64540bf22b2840c,
            mid_init$_a6b88d72a8613499,
            mid_getReaderCacheHelper_3117e2e82cc46163,
            mid_doClose_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiReader(jobject obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiReader(const MultiReader& obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {}

          MultiReader(const JArray< ::org::apache::lucene::index::IndexReader > &);
          MultiReader(const JArray< ::org::apache::lucene::index::IndexReader > &, jboolean);
          MultiReader(const JArray< ::org::apache::lucene::index::IndexReader > &, const ::java::util::Comparator &, jboolean);

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
        extern PyType_Def PY_TYPE_DEF(MultiReader);
        extern PyTypeObject *PY_TYPE(MultiReader);

        class t_MultiReader {
        public:
          PyObject_HEAD
          MultiReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
