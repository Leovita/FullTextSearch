#ifndef org_apache_lucene_index_IndexSorter$IntSorter_H
#define org_apache_lucene_index_IndexSorter$IntSorter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexSorter$IntSorter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6b005da54e9e2173,
            mid_getComparableProviders_a67440c3973dbbc1,
            mid_getDocComparator_292ec420be98b531,
            mid_getProviderName_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter$IntSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter$IntSorter(const IndexSorter$IntSorter& obj) : ::java::lang::Object(obj) {}

          IndexSorter$IntSorter(const ::java::lang::String &, const ::java::lang::Integer &, jboolean, const ::org::apache::lucene::index::IndexSorter$NumericDocValuesProvider &);

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
        extern PyType_Def PY_TYPE_DEF(IndexSorter$IntSorter);
        extern PyTypeObject *PY_TYPE(IndexSorter$IntSorter);

        class t_IndexSorter$IntSorter {
        public:
          PyObject_HEAD
          IndexSorter$IntSorter object;
          static PyObject *wrap_Object(const IndexSorter$IntSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
