#ifndef org_apache_lucene_search_DoubleValuesSource_H
#define org_apache_lucene_search_DoubleValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class DoubleValuesSource;
        class SegmentCacheable;
        class Query;
        class DoubleValues;
        class LongValuesSource;
        class Scorable;
        class SortField;
        class IndexSearcher;
      }
      namespace index {
        class LeafReaderContext;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_constant_1ea2ad5f4e707ed4,
            mid_equals_00d17418847797d4,
            mid_explain_c6bb58f50f82e1f6,
            mid_fromDoubleField_4dceecd0b9399ae8,
            mid_fromField_d556075b506a4808,
            mid_fromFloatField_4dceecd0b9399ae8,
            mid_fromIntField_4dceecd0b9399ae8,
            mid_fromLongField_4dceecd0b9399ae8,
            mid_fromQuery_d63392e3526041f0,
            mid_fromScorer_f18981ef13b858bb,
            mid_getSortField_6b771f2dc8fe37aa,
            mid_getValues_e8f0afd0e79526a0,
            mid_hashCode_bd89ce15dad49192,
            mid_needsScores_9aa4f33e82ea333f,
            mid_rewrite_98fead23c7c5ae08,
            mid_similarityToQueryVector_3f7379026f173a59,
            mid_similarityToQueryVector_af13ff9ea76beb87,
            mid_toLongValuesSource_199c6718f27496e6,
            mid_toSortableLongDoubleValuesSource_199c6718f27496e6,
            mid_toString_e7df854526d67fa3,
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
