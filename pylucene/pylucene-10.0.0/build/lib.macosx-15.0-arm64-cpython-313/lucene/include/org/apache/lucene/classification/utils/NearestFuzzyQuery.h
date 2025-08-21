#ifndef org_apache_lucene_classification_utils_NearestFuzzyQuery_H
#define org_apache_lucene_classification_utils_NearestFuzzyQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        class IndexSearcher;
      }
      namespace analysis {
        class Analyzer;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace utils {

          class NearestFuzzyQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_07cd0f76cabcf75a,
              mid_addTerms_3d104da0b5c75e64,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_rewrite_aeaa882ae5e96552,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NearestFuzzyQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NearestFuzzyQuery(const NearestFuzzyQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            NearestFuzzyQuery(const ::org::apache::lucene::analysis::Analyzer &);

            void addTerms(const ::java::lang::String &, const ::java::lang::String &) const;
            jboolean equals(const ::java::lang::Object &) const;
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
      namespace classification {
        namespace utils {
          extern PyType_Def PY_TYPE_DEF(NearestFuzzyQuery);
          extern PyTypeObject *PY_TYPE(NearestFuzzyQuery);

          class t_NearestFuzzyQuery {
          public:
            PyObject_HEAD
            NearestFuzzyQuery object;
            static PyObject *wrap_Object(const NearestFuzzyQuery&);
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
