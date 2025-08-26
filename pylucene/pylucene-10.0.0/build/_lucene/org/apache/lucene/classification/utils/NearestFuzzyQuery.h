#ifndef org_apache_lucene_classification_utils_NearestFuzzyQuery_H
#define org_apache_lucene_classification_utils_NearestFuzzyQuery_H

#include "org/apache/lucene/search/Query.h"

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
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class QueryVisitor;
        class IndexSearcher;
      }
    }
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
              mid_init$_1aaca852402a5069,
              mid_addTerms_0dd012a11c3f389b,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_rewrite_25984111320dbe39,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
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
