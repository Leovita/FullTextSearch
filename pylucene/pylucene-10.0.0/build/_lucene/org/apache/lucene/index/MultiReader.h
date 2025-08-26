#ifndef org_apache_lucene_index_MultiReader_H
#define org_apache_lucene_index_MultiReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiReader : public ::org::apache::lucene::index::BaseCompositeReader {
         public:
          enum {
            mid_init$_053ffeb4376325c6,
            mid_init$_de68ea8de2565a8b,
            mid_init$_dd39674645b505cf,
            mid_getReaderCacheHelper_bcf8e7a3b3f2dbe2,
            mid_doClose_e7bdbe105ce1bafb,
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
