#ifndef org_apache_lucene_index_IndexSorter_H
#define org_apache_lucene_index_IndexSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexSorter$ComparableProvider;
        class IndexSorter$DocComparator;
        class LeafReader;
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
    class String;
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

        class IndexSorter : public ::java::lang::Object {
         public:
          enum {
            mid_getComparableProviders_a67440c3973dbbc1,
            mid_getDocComparator_292ec420be98b531,
            mid_getProviderName_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter(const IndexSorter& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(IndexSorter);
        extern PyTypeObject *PY_TYPE(IndexSorter);

        class t_IndexSorter {
        public:
          PyObject_HEAD
          IndexSorter object;
          static PyObject *wrap_Object(const IndexSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
