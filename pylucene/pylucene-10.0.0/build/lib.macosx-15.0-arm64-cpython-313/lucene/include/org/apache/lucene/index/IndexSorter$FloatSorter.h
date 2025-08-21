#ifndef org_apache_lucene_index_IndexSorter$FloatSorter_H
#define org_apache_lucene_index_IndexSorter$FloatSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexSorter$ComparableProvider;
        class IndexSorter$NumericDocValuesProvider;
        class IndexSorter;
        class IndexSorter$DocComparator;
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Float;
    class String;
    class Class;
  }
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexSorter$FloatSorter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6371ca2bc33095f4,
            mid_getComparableProviders_a67440c3973dbbc1,
            mid_getDocComparator_292ec420be98b531,
            mid_getProviderName_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter$FloatSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter$FloatSorter(const IndexSorter$FloatSorter& obj) : ::java::lang::Object(obj) {}

          IndexSorter$FloatSorter(const ::java::lang::String &, const ::java::lang::Float &, jboolean, const ::org::apache::lucene::index::IndexSorter$NumericDocValuesProvider &);

          JArray< ::org::apache::lucene::index::IndexSorter$ComparableProvider > getComparableProviders(const ::java::util::List &) const;
          ::org::apache::lucene::index::IndexSorter$DocComparator getDocComparator(const ::org::apache::lucene::index::LeafReader &, jint) const;
          ::java::lang::String getProviderName() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexSorter$FloatSorter);
        extern PyTypeObject *PY_TYPE(IndexSorter$FloatSorter);

        class t_IndexSorter$FloatSorter {
        public:
          PyObject_HEAD
          IndexSorter$FloatSorter object;
          static PyObject *wrap_Object(const IndexSorter$FloatSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
