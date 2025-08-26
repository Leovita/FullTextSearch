#ifndef org_apache_lucene_index_IndexSorter$LongSorter_H
#define org_apache_lucene_index_IndexSorter$LongSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexSorter$DocComparator;
        class IndexSorter$ComparableProvider;
        class IndexSorter;
        class LeafReader;
        class IndexSorter$NumericDocValuesProvider;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Long;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexSorter$LongSorter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_35e2056b305701df,
            mid_getComparableProviders_19c09bde37dfb9f4,
            mid_getDocComparator_39610edf39379e77,
            mid_getProviderName_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter$LongSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter$LongSorter(const IndexSorter$LongSorter& obj) : ::java::lang::Object(obj) {}

          IndexSorter$LongSorter(const ::java::lang::String &, const ::java::lang::Long &, jboolean, const ::org::apache::lucene::index::IndexSorter$NumericDocValuesProvider &);

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
        extern PyType_Def PY_TYPE_DEF(IndexSorter$LongSorter);
        extern PyTypeObject *PY_TYPE(IndexSorter$LongSorter);

        class t_IndexSorter$LongSorter {
        public:
          PyObject_HEAD
          IndexSorter$LongSorter object;
          static PyObject *wrap_Object(const IndexSorter$LongSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
