#ifndef org_apache_lucene_index_MultiFields_H
#define org_apache_lucene_index_MultiFields_H

#include "org/apache/lucene/index/Fields.h"

namespace java {
  namespace util {
    class Iterator;
  }
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
      namespace index {
        class Terms;
        class ReaderSlice;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiFields : public ::org::apache::lucene::index::Fields {
         public:
          enum {
            mid_init$_ebc86d1acd5d20bc,
            mid_iterator_0db4c76ff7ee995b,
            mid_size_20fbf7565993c3d7,
            mid_terms_734b49c46dc30275,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiFields(jobject obj) : ::org::apache::lucene::index::Fields(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiFields(const MultiFields& obj) : ::org::apache::lucene::index::Fields(obj) {}

          MultiFields(const JArray< ::org::apache::lucene::index::Fields > &, const JArray< ::org::apache::lucene::index::ReaderSlice > &);

          ::java::util::Iterator iterator() const;
          jint size() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiFields);
        extern PyTypeObject *PY_TYPE(MultiFields);

        class t_MultiFields {
        public:
          PyObject_HEAD
          MultiFields object;
          static PyObject *wrap_Object(const MultiFields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
