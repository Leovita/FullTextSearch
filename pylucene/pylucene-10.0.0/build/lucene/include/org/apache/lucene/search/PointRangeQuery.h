#ifndef org_apache_lucene_search_PointRangeQuery_H
#define org_apache_lucene_search_PointRangeQuery_H

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
      namespace search {

        class PointRangeQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_checkArgs_f20780003f6d87ef,
            mid_createWeight_dc54d493278607e4,
            mid_equals_00d17418847797d4,
            mid_getBytesPerDim_bd89ce15dad49192,
            mid_getField_e7df854526d67fa3,
            mid_getLowerPoint_44e916dc40fc04cb,
            mid_getNumDims_bd89ce15dad49192,
            mid_getUpperPoint_44e916dc40fc04cb,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            mid_toString_110c01865d4b271d,
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
