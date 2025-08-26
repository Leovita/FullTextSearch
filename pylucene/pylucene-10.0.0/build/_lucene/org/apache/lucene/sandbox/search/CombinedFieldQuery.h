#ifndef org_apache_lucene_sandbox_search_CombinedFieldQuery_H
#define org_apache_lucene_sandbox_search_CombinedFieldQuery_H

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
      namespace util {
        class Accountable;
      }
      namespace index {
        class Term;
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class CombinedFieldQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_createWeight_dc54d493278607e4,
              mid_equals_00d17418847797d4,
              mid_getTerms_1387e1e2702ac173,
              mid_hashCode_bd89ce15dad49192,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_rewrite_25984111320dbe39,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CombinedFieldQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CombinedFieldQuery(const CombinedFieldQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::util::List getTerms() const;
            jint hashCode() const;
            jlong ramBytesUsed() const;
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
          extern PyType_Def PY_TYPE_DEF(CombinedFieldQuery);
          extern PyTypeObject *PY_TYPE(CombinedFieldQuery);

          class t_CombinedFieldQuery {
          public:
            PyObject_HEAD
            CombinedFieldQuery object;
            static PyObject *wrap_Object(const CombinedFieldQuery&);
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
