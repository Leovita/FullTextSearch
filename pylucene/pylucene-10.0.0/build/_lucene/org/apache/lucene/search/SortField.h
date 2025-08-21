#ifndef org_apache_lucene_search_SortField_H
#define org_apache_lucene_search_SortField_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class FieldComparatorSource;
        class Pruning;
        class SortField$Type;
        class SortField;
        class FieldComparator;
        class IndexSearcher;
      }
      namespace util {
        class BytesRef;
      }
      namespace index {
        class IndexSorter;
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
    class Comparator;
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
            mid_init$_1f41d5a77c16274f,
            mid_init$_a27665ec78eae27c,
            mid_init$_09e168080411589e,
            mid_init$_da9e90b7dafd1cca,
            mid_equals_570b5248a6da3ef6,
            mid_getBytesComparator_39238840448c1807,
            mid_getComparator_602f5765ec13a452,
            mid_getComparatorSource_6d04b1a070bcf1fd,
            mid_getField_09a7afff1868fc5e,
            mid_getIndexSorter_381453b87424c4d9,
            mid_getMissingValue_5655ed8670534604,
            mid_getOptimizeSortWithIndexedData_947277eca0748c4e,
            mid_getOptimizeSortWithPoints_947277eca0748c4e,
            mid_getReverse_947277eca0748c4e,
            mid_getType_810eac8b83c5f8b1,
            mid_hashCode_20fbf7565993c3d7,
            mid_needsScores_947277eca0748c4e,
            mid_rewrite_a0617e7c52fcb300,
            mid_setBytesComparator_480edaf434ebe52f,
            mid_setMissingValue_eb61ef4d1db15d08,
            mid_setOptimizeSortWithIndexedData_b110fc3a58c081ab,
            mid_setOptimizeSortWithPoints_b110fc3a58c081ab,
            mid_toString_09a7afff1868fc5e,
            mid_readType_d2a7811f28ef58ae,
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
