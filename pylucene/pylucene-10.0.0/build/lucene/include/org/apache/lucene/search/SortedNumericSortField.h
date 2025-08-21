#ifndef org_apache_lucene_search_SortedNumericSortField_H
#define org_apache_lucene_search_SortedNumericSortField_H

#include "org/apache/lucene/search/SortField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Pruning;
        class SortedNumericSelector$Type;
        class SortField$Type;
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

        class SortedNumericSortField : public ::org::apache::lucene::search::SortField {
         public:
          enum {
            mid_init$_1f41d5a77c16274f,
            mid_init$_09e168080411589e,
            mid_init$_4ee4f23d2282dba1,
            mid_equals_570b5248a6da3ef6,
            mid_getComparator_602f5765ec13a452,
            mid_getIndexSorter_381453b87424c4d9,
            mid_getNumericType_810eac8b83c5f8b1,
            mid_getSelector_a2f0adc22adb697c,
            mid_hashCode_20fbf7565993c3d7,
            mid_setMissingValue_eb61ef4d1db15d08,
            mid_toString_09a7afff1868fc5e,
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
