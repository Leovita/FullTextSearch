#ifndef org_apache_lucene_search_PointRangeQuery_H
#define org_apache_lucene_search_PointRangeQuery_H

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
      namespace search {

        class PointRangeQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_checkArgs_534d2fe5648039c2,
            mid_createWeight_77fe52950093e704,
            mid_equals_570b5248a6da3ef6,
            mid_getBytesPerDim_20fbf7565993c3d7,
            mid_getField_09a7afff1868fc5e,
            mid_getLowerPoint_5560da88fc44aa82,
            mid_getNumDims_20fbf7565993c3d7,
            mid_getUpperPoint_5560da88fc44aa82,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_cb0eb1432185fc94,
            mid_visit_1b22ec612b613eea,
            mid_toString_d38e105f0ef83a34,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointRangeQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointRangeQuery(const PointRangeQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          static void checkArgs(const ::java::lang::String &, const ::java::lang::Object &, const ::java::lang::Object &);
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint getBytesPerDim() const;
          ::java::lang::String getField() const;
          JArray< jbyte > getLowerPoint() const;
          jint getNumDims() const;
          JArray< jbyte > getUpperPoint() const;
          jint hashCode() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
        extern PyType_Def PY_TYPE_DEF(PointRangeQuery);
        extern PyTypeObject *PY_TYPE(PointRangeQuery);

        class t_PointRangeQuery {
        public:
          PyObject_HEAD
          PointRangeQuery object;
          static PyObject *wrap_Object(const PointRangeQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
