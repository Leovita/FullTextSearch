#ifndef org_apache_lucene_search_SortedNumericSortField_H
#define org_apache_lucene_search_SortedNumericSortField_H

#include "org/apache/lucene/search/SortField.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexSorter;
      }
      namespace search {
        class SortField$Type;
        class SortedNumericSelector$Type;
        class Pruning;
        class FieldComparator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SortedNumericSortField : public ::org::apache::lucene::search::SortField {
         public:
          enum {
            mid_init$_972830eff8bbf0ce,
            mid_init$_4f14e65d9a0d947f,
            mid_init$_bb4d5aeca00f9f5d,
            mid_equals_00d17418847797d4,
            mid_getComparator_4f2ccf90fa477e37,
            mid_getIndexSorter_f1f08a72a6d09a31,
            mid_getNumericType_96395ddc8b3795c3,
            mid_getSelector_2eb6fe6e4189cb6e,
            mid_hashCode_bd89ce15dad49192,
            mid_setMissingValue_501c3eb890ff6d79,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedNumericSortField(jobject obj) : ::org::apache::lucene::search::SortField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedNumericSortField(const SortedNumericSortField& obj) : ::org::apache::lucene::search::SortField(obj) {}

          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &);
          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean);
          SortedNumericSortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::FieldComparator getComparator(jint, const ::org::apache::lucene::search::Pruning &) const;
          ::org::apache::lucene::index::IndexSorter getIndexSorter() const;
          ::org::apache::lucene::search::SortField$Type getNumericType() const;
          ::org::apache::lucene::search::SortedNumericSelector$Type getSelector() const;
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
        extern PyType_Def PY_TYPE_DEF(SortedNumericSortField);
        extern PyTypeObject *PY_TYPE(SortedNumericSortField);

        class t_SortedNumericSortField {
        public:
          PyObject_HEAD
          SortedNumericSortField object;
          static PyObject *wrap_Object(const SortedNumericSortField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
