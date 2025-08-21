#ifndef org_apache_lucene_search_DoubleValuesSource_H
#define org_apache_lucene_search_DoubleValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class Scorable;
        class DoubleValuesSource;
        class DoubleValues;
        class Explanation;
        class SortField;
        class LongValuesSource;
        class SegmentCacheable;
        class IndexSearcher;
      }
      namespace index {
        class LeafReaderContext;
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
    namespace function {
      class LongToDoubleFunction;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DoubleValuesSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_constant_a24185487bfe8d1c,
            mid_equals_570b5248a6da3ef6,
            mid_explain_01115576792a92f6,
            mid_fromDoubleField_fc4fee8eaa090fbd,
            mid_fromField_95cf958db331d0c4,
            mid_fromFloatField_fc4fee8eaa090fbd,
            mid_fromIntField_fc4fee8eaa090fbd,
            mid_fromLongField_fc4fee8eaa090fbd,
            mid_fromQuery_ad6f59bd9372083a,
            mid_fromScorer_fe59306e0ba0d7b2,
            mid_getSortField_33273beb7e6f6fa1,
            mid_getValues_2257952fbc0fc955,
            mid_hashCode_20fbf7565993c3d7,
            mid_needsScores_947277eca0748c4e,
            mid_rewrite_652f2ef7a24fb31e,
            mid_similarityToQueryVector_4b5824fb0787fcd1,
            mid_similarityToQueryVector_e5621523dad729f8,
            mid_toLongValuesSource_6d5a547f55f28d29,
            mid_toSortableLongDoubleValuesSource_6d5a547f55f28d29,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleValuesSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoubleValuesSource(const DoubleValuesSource& obj) : ::java::lang::Object(obj) {}

          static DoubleValuesSource *SCORES;

          DoubleValuesSource();

          static DoubleValuesSource constant(jdouble);
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint, const ::org::apache::lucene::search::Explanation &) const;
          static DoubleValuesSource fromDoubleField(const ::java::lang::String &);
          static DoubleValuesSource fromField(const ::java::lang::String &, const ::java::util::function::LongToDoubleFunction &);
          static DoubleValuesSource fromFloatField(const ::java::lang::String &);
          static DoubleValuesSource fromIntField(const ::java::lang::String &);
          static DoubleValuesSource fromLongField(const ::java::lang::String &);
          static DoubleValuesSource fromQuery(const ::org::apache::lucene::search::Query &);
          static ::org::apache::lucene::search::DoubleValues fromScorer(const ::org::apache::lucene::search::Scorable &);
          ::org::apache::lucene::search::SortField getSortField(jboolean) const;
          ::org::apache::lucene::search::DoubleValues getValues(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::DoubleValues &) const;
          jint hashCode() const;
          jboolean needsScores() const;
          DoubleValuesSource rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          static ::org::apache::lucene::search::DoubleValues similarityToQueryVector(const ::org::apache::lucene::index::LeafReaderContext &, const JArray< jbyte > &, const ::java::lang::String &);
          static ::org::apache::lucene::search::DoubleValues similarityToQueryVector(const ::org::apache::lucene::index::LeafReaderContext &, const JArray< jfloat > &, const ::java::lang::String &);
          ::org::apache::lucene::search::LongValuesSource toLongValuesSource() const;
          ::org::apache::lucene::search::LongValuesSource toSortableLongDoubleValuesSource() const;
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
        extern PyType_Def PY_TYPE_DEF(DoubleValuesSource);
        extern PyTypeObject *PY_TYPE(DoubleValuesSource);

        class t_DoubleValuesSource {
        public:
          PyObject_HEAD
          DoubleValuesSource object;
          static PyObject *wrap_Object(const DoubleValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
