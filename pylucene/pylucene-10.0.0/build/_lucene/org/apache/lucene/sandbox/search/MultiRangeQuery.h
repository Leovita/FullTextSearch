#ifndef org_apache_lucene_sandbox_search_MultiRangeQuery_H
#define org_apache_lucene_sandbox_search_MultiRangeQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        class ScoreMode;
        class Weight;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Cloneable;
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

          class MultiRangeQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_createWeight_77fe52950093e704,
              mid_equals_570b5248a6da3ef6,
              mid_getBytesPerDim_20fbf7565993c3d7,
              mid_getField_09a7afff1868fc5e,
              mid_getNumDims_20fbf7565993c3d7,
              mid_hashCode_20fbf7565993c3d7,
              mid_rewrite_aeaa882ae5e96552,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
              mid_toString_d38e105f0ef83a34,
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
