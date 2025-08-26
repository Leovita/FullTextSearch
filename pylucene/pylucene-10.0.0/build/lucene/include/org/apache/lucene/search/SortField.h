#ifndef org_apache_lucene_search_SortField_H
#define org_apache_lucene_search_SortField_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Comparator;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexSorter;
      }
      namespace search {
        class FieldComparator;
        class FieldComparatorSource;
        class Pruning;
        class SortField$Type;
        class SortField;
        class IndexSearcher;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SortField : public ::java::lang::Object {
         public:
          enum {
            mid_init$_972830eff8bbf0ce,
            mid_init$_861cdda103b0f319,
            mid_init$_4f14e65d9a0d947f,
            mid_init$_f28a3305895350fb,
            mid_equals_00d17418847797d4,
            mid_getBytesComparator_5cc89c689cd941fe,
            mid_getComparator_4f2ccf90fa477e37,
            mid_getComparatorSource_8831f02fe854d06e,
            mid_getField_e7df854526d67fa3,
            mid_getIndexSorter_f1f08a72a6d09a31,
            mid_getMissingValue_4819806f62f1360a,
            mid_getOptimizeSortWithIndexedData_9aa4f33e82ea333f,
            mid_getOptimizeSortWithPoints_9aa4f33e82ea333f,
            mid_getReverse_9aa4f33e82ea333f,
            mid_getType_96395ddc8b3795c3,
            mid_hashCode_bd89ce15dad49192,
            mid_needsScores_9aa4f33e82ea333f,
            mid_rewrite_c62116462e9f6544,
            mid_setBytesComparator_236c903ae32a3610,
            mid_setMissingValue_501c3eb890ff6d79,
            mid_setOptimizeSortWithIndexedData_f5dd97eebf6a215a,
            mid_setOptimizeSortWithPoints_f5dd97eebf6a215a,
            mid_toString_e7df854526d67fa3,
            mid_readType_0829a8d83a4e5b4f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortField(const SortField& obj) : ::java::lang::Object(obj) {}

          static SortField *FIELD_DOC;
          static SortField *FIELD_SCORE;
          static ::java::lang::Object *STRING_FIRST;
          static ::java::lang::Object *STRING_LAST;

          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::FieldComparatorSource &);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::FieldComparatorSource &, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Comparator getBytesComparator() const;
          ::org::apache::lucene::search::FieldComparator getComparator(jint, const ::org::apache::lucene::search::Pruning &) const;
          ::org::apache::lucene::search::FieldComparatorSource getComparatorSource() const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::index::IndexSorter getIndexSorter() const;
          ::java::lang::Object getMissingValue() const;
          jboolean getOptimizeSortWithIndexedData() const;
          jboolean getOptimizeSortWithPoints() const;
          jboolean getReverse() const;
          ::org::apache::lucene::search::SortField$Type getType() const;
          jint hashCode() const;
          jboolean needsScores() const;
          SortField rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          void setBytesComparator(const ::java::util::Comparator &) const;
          void setMissingValue(const ::java::lang::Object &) const;
          void setOptimizeSortWithIndexedData(jboolean) const;
          void setOptimizeSortWithPoints(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(SortField);
        extern PyTypeObject *PY_TYPE(SortField);

        class t_SortField {
        public:
          PyObject_HEAD
          SortField object;
          static PyObject *wrap_Object(const SortField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
