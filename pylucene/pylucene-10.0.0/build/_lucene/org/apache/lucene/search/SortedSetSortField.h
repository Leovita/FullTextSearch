#ifndef org_apache_lucene_search_SortedSetSortField_H
#define org_apache_lucene_search_SortedSetSortField_H

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
        class SortedSetSelector$Type;
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

        class SortedSetSortField : public ::org::apache::lucene::search::SortField {
         public:
          enum {
            mid_init$_0c3fb5e97dae8b90,
            mid_init$_5693e3af10dbfae9,
            mid_equals_00d17418847797d4,
            mid_getComparator_4f2ccf90fa477e37,
            mid_getIndexSorter_f1f08a72a6d09a31,
            mid_getSelector_cf96dc62f3946b62,
            mid_hashCode_bd89ce15dad49192,
            mid_setMissingValue_501c3eb890ff6d79,
            mid_toString_e7df854526d67fa3,
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
