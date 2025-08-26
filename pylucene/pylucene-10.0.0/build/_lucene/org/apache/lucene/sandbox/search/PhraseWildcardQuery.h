#ifndef org_apache_lucene_sandbox_search_PhraseWildcardQuery_H
#define org_apache_lucene_sandbox_search_PhraseWildcardQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class IndexSearcher;
        class QueryVisitor;
        class Weight;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class PhraseWildcardQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_createWeight_dc54d493278607e4,
              mid_equals_00d17418847797d4,
              mid_getField_e7df854526d67fa3,
              mid_hashCode_bd89ce15dad49192,
              mid_rewrite_25984111320dbe39,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              mid_createTermsData_3930d72cb54a0fb7,
              mid_earlyStopWeight_e6a5e4df16993154,
              mid_noMatchWeight_e6a5e4df16993154,
              mid_collectSingleTermData_a41fe53f4d886884,
              mid_collectMultiTermData_d446986d02ab64cb,
              mid_checkTermsHavePositions_9b8a64d6e5548a1d,
              mid_shouldOptimizeSegments_9aa4f33e82ea333f,
              mid_createTermStatsMap_5a7b3fdb536be71c,
              mid_collectMultiTermDataForSegment_73b452e1c93d4c7b,
              mid_collectMultiTermStats_9fc4ebd60f6f0048,
              mid_createTermsEnum_ba9953af538659f7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhraseWildcardQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhraseWildcardQuery(const PhraseWildcardQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(PhraseWildcardQuery);
          extern PyTypeObject *PY_TYPE(PhraseWildcardQuery);

          class t_PhraseWildcardQuery {
          public:
            PyObject_HEAD
            PhraseWildcardQuery object;
            static PyObject *wrap_Object(const PhraseWildcardQuery&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
