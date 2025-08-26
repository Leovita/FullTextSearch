#ifndef org_apache_lucene_sandbox_search_MultiRangeQuery_H
#define org_apache_lucene_sandbox_search_MultiRangeQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Weight;
        class QueryVisitor;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Cloneable;
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

          class MultiRangeQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_createWeight_dc54d493278607e4,
              mid_equals_00d17418847797d4,
              mid_getBytesPerDim_bd89ce15dad49192,
              mid_getField_e7df854526d67fa3,
              mid_getNumDims_bd89ce15dad49192,
              mid_hashCode_bd89ce15dad49192,
              mid_rewrite_25984111320dbe39,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              mid_toString_110c01865d4b271d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiRangeQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiRangeQuery(const MultiRangeQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getBytesPerDim() const;
            ::java::lang::String getField() const;
            jint getNumDims() const;
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
          extern PyType_Def PY_TYPE_DEF(MultiRangeQuery);
          extern PyTypeObject *PY_TYPE(MultiRangeQuery);

          class t_MultiRangeQuery {
          public:
            PyObject_HEAD
            MultiRangeQuery object;
            static PyObject *wrap_Object(const MultiRangeQuery&);
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
