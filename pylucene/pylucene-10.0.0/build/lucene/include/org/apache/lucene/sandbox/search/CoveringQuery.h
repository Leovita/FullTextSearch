#ifndef org_apache_lucene_sandbox_search_CoveringQuery_H
#define org_apache_lucene_sandbox_search_CoveringQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace search {
        class QueryVisitor;
        class ScoreMode;
        class Weight;
        class LongValuesSource;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
      namespace sandbox {
        namespace search {

          class CoveringQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_7f8d514ba4b912c2,
              mid_createWeight_77fe52950093e704,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_rewrite_aeaa882ae5e96552,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
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
