#ifndef org_apache_lucene_search_SortedSetSortField_H
#define org_apache_lucene_search_SortedSetSortField_H

#include "org/apache/lucene/search/SortField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Pruning;
        class SortedSetSelector$Type;
        class FieldComparator;
      }
      namespace index {
        class IndexSorter;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SortedSetSortField : public ::org::apache::lucene::search::SortField {
         public:
          enum {
            mid_init$_855d5fa744141d54,
            mid_init$_c047329a416e0ce3,
            mid_equals_570b5248a6da3ef6,
            mid_getComparator_602f5765ec13a452,
            mid_getIndexSorter_381453b87424c4d9,
            mid_getSelector_b75f016a62aef730,
            mid_hashCode_20fbf7565993c3d7,
            mid_setMissingValue_eb61ef4d1db15d08,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedSetSortField(jobject obj) : ::org::apache::lucene::search::SortField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedSetSortField(const SortedSetSortField& obj) : ::org::apache::lucene::search::SortField(obj) {}

          SortedSetSortField(const ::java::lang::String &, jboolean);
          SortedSetSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedSetSelector$Type &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::FieldComparator getComparator(jint, const ::org::apache::lucene::search::Pruning &) const;
          ::org::apache::lucene::index::IndexSorter getIndexSorter() const;
          ::org::apache::lucene::search::SortedSetSelector$Type getSelector() const;
          jint hashCode() const;
          void setMissingValue(const ::java::lang::Object &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(SortedSetSortField);
        extern PyTypeObject *PY_TYPE(SortedSetSortField);

        class t_SortedSetSortField {
        public:
          PyObject_HEAD
          SortedSetSortField object;
          static PyObject *wrap_Object(const SortedSetSortField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
