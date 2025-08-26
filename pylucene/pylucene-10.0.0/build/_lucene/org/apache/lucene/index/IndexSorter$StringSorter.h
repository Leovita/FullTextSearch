#ifndef org_apache_lucene_index_IndexSorter$StringSorter_H
#define org_apache_lucene_index_IndexSorter$StringSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexSorter$DocComparator;
        class IndexSorter$ComparableProvider;
        class IndexSorter;
        class LeafReader;
        class IndexSorter$SortedDocValuesProvider;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

        class IndexSorter$StringSorter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2321aaa78d77ca8d,
            mid_getComparableProviders_19c09bde37dfb9f4,
            mid_getDocComparator_39610edf39379e77,
            mid_getProviderName_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter$StringSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter$StringSorter(const IndexSorter$StringSorter& obj) : ::java::lang::Object(obj) {}

          IndexSorter$StringSorter(const ::java::lang::String &, const ::java::lang::Object &, jboolean, const ::org::apache::lucene::index::IndexSorter$SortedDocValuesProvider &);

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
        extern PyType_Def PY_TYPE_DEF(IndexSorter$StringSorter);
        extern PyTypeObject *PY_TYPE(IndexSorter$StringSorter);

        class t_IndexSorter$StringSorter {
        public:
          PyObject_HEAD
          IndexSorter$StringSorter object;
          static PyObject *wrap_Object(const IndexSorter$StringSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
