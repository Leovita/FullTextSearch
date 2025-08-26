#ifndef org_apache_lucene_search_highlight_QueryTermExtractor_H
#define org_apache_lucene_search_highlight_QueryTermExtractor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class WeightedTerm;
        }
        class Query;
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class QueryTermExtractor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_getIdfWeightedTerms_eba57fddcfccd198,
              mid_getTerms_5f3ee6e4152ae934,
              mid_getTerms_81373adb6b370cbc,
              mid_getTerms_7277033faf7eb295,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryTermExtractor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryTermExtractor(const QueryTermExtractor& obj) : ::java::lang::Object(obj) {}

            QueryTermExtractor();

            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getIdfWeightedTerms(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &, jboolean);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &, jboolean, const ::java::lang::String &);
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(QueryTermExtractor);
          extern PyTypeObject *PY_TYPE(QueryTermExtractor);

          class t_QueryTermExtractor {
          public:
            PyObject_HEAD
            QueryTermExtractor object;
            static PyObject *wrap_Object(const QueryTermExtractor&);
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
