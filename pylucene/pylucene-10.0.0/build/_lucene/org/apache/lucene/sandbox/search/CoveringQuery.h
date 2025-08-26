#ifndef org_apache_lucene_sandbox_search_CoveringQuery_H
#define org_apache_lucene_sandbox_search_CoveringQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Weight;
        class QueryVisitor;
        class LongValuesSource;
        class IndexSearcher;
      }
      namespace util {
        class Accountable;
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
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class CoveringQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_4b8f8a50d3d59b16,
              mid_createWeight_dc54d493278607e4,
              mid_equals_00d17418847797d4,
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

            explicit CoveringQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CoveringQuery(const CoveringQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            CoveringQuery(const ::java::util::Collection &, const ::org::apache::lucene::search::LongValuesSource &);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
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
          extern PyType_Def PY_TYPE_DEF(CoveringQuery);
          extern PyTypeObject *PY_TYPE(CoveringQuery);

          class t_CoveringQuery {
          public:
            PyObject_HEAD
            CoveringQuery object;
            static PyObject *wrap_Object(const CoveringQuery&);
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
